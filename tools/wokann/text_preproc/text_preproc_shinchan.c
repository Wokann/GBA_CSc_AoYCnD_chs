#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#include <ctype.h>  

#ifdef _WIN32
#include <windows.h>
#endif

#define MAX_LINE_LENGTH 4096  
#define MAX_MAPPINGS 10000  
#define MAX_STRING_LENGTH 1024  
  
typedef struct {  
    unsigned char bytes[8];    // 支持多字节编码  
    int byte_count;           // 字节数量  
    char character[8];        // 普通字符映射（UTF-8）  
    char constant[64];        // 常量名称（如End_01）  
    int is_constant;          // 标记是否为常量  
} CharMapping;  
  
typedef struct {  
    CharMapping mappings[MAX_MAPPINGS];  
    int count;  
} Charmap;  
  
// 全局变量：结束符配置  
int g_add_terminator = 0;  
unsigned char g_terminator_bytes[8];  
int g_terminator_count = 0;  
  
// 解析十六进制编码为字节数组  
int parse_hex_code(const char* hex_str, unsigned char* bytes) {  
    int len = strlen(hex_str);  
    int byte_count = 0;  
      
    if (len >= 2 && hex_str[0] == '0' && (hex_str[1] == 'x' || hex_str[1] == 'X')) {  
        hex_str += 2;  
        len -= 2;  
    }  
      
    if (len % 2 != 0) {  
        char temp[32];  
        sprintf(temp, "0%s", hex_str);  
        hex_str = temp;  
        len++;  
    }  
      
    for (int i = 0; i < len && byte_count < 8; i += 2) {  
        char byte_str[3] = {hex_str[i], hex_str[i+1], '\0'};  
        bytes[byte_count++] = (unsigned char)strtol(byte_str, NULL, 16);  
    }  
      
    return byte_count;  
}  
  
// 提取UTF-8字符  
int extract_utf8_char(const char* input, int pos, char* utf8_char) {  
    unsigned char first_byte = (unsigned char)input[pos];  
    int char_len = 1;  
      
    if ((first_byte & 0x80) == 0) {  
        char_len = 1; // ASCII  
    } else if ((first_byte & 0xE0) == 0xC0) {  
        char_len = 2; // 2字节UTF-8  
    } else if ((first_byte & 0xF0) == 0xE0) {  
        char_len = 3; // 3字节UTF-8（中文）  
    } else if ((first_byte & 0xF8) == 0xF0) {  
        char_len = 4; // 4字节UTF-8  
    }  
      
    strncpy(utf8_char, input + pos, char_len);  
    utf8_char[char_len] = '\0';  
    return char_len;  
}  
  
// 加载字符映射表  
int load_charmap(const char* filename, Charmap* charmap) {  
    FILE* file = fopen(filename, "r");  
    if (!file) {  
        fprintf(stderr, "Error: Cannot open charmap file '%s'\n", filename);  
        return 0;  
    }  
      
    char line[MAX_LINE_LENGTH];  
    charmap->count = 0;  
      
    while (fgets(line, sizeof(line), file) && charmap->count < MAX_MAPPINGS) {  
        if (line[0] == '#' || line[0] == '\n' || line[0] == '\r') continue;  
          
        char* equals = strchr(line, '=');  
        if (!equals) continue;  
          
        *equals = '\0';  
        char* code_str = line;  
        char* char_str = equals + 1;  
          
        while (isspace(*code_str)) code_str++;  
        while (isspace(*char_str)) char_str++;  
          
        char* newline = strchr(char_str, '\n');  
        if (newline) *newline = '\0';  
        newline = strchr(char_str, '\r');  
        if (newline) *newline = '\0';  
          
        charmap->mappings[charmap->count].byte_count =   
            parse_hex_code(code_str, charmap->mappings[charmap->count].bytes);  
          
        if (char_str[0] == '{' && char_str[strlen(char_str)-1] == '}') {  
            char_str[strlen(char_str)-1] = '\0';  
            char_str++;  
              
            charmap->mappings[charmap->count].is_constant = 1;  
            strncpy(charmap->mappings[charmap->count].constant, char_str, 63);  
            charmap->mappings[charmap->count].constant[63] = '\0';  
            charmap->mappings[charmap->count].character[0] = '\0';  
        } else {  
            charmap->mappings[charmap->count].is_constant = 0;  
            strncpy(charmap->mappings[charmap->count].character, char_str, 7);  
            charmap->mappings[charmap->count].character[7] = '\0';  
            charmap->mappings[charmap->count].constant[0] = '\0';  
        }  
          
        charmap->count++;  
    }  
      
    fclose(file);  
    printf("Loaded %d character mappings from %s\n", charmap->count, filename);  
    return 1;  
}  
  
// 查找字符映射（支持UTF-8）  
CharMapping* find_char_mapping(const Charmap* charmap, const char* character) {  
    for (int i = 0; i < charmap->count; i++) {  
        if (!charmap->mappings[i].is_constant &&   
            strcmp(charmap->mappings[i].character, character) == 0) {  
            return &charmap->mappings[i];  
        }  
    }  
    return NULL;  
}  
  
// 查找常量映射  
CharMapping* find_constant_mapping(const Charmap* charmap, const char* constant) {  
    for (int i = 0; i < charmap->count; i++) {  
        if (charmap->mappings[i].is_constant &&   
            strcmp(charmap->mappings[i].constant, constant) == 0) {  
            return &charmap->mappings[i];  
        }  
    }  
    return NULL;  
}  
  
// 字符串转换函数（修正版）  
void convert_string(const char* input, char* output, const Charmap* charmap) {  
    output[0] = '\0';  // 初始化为空串
    strcpy(output, "{ ");
    int first_item = 1;  

    // 获取当前代码所在行号辅助宏
    #define CURRENT_LINE (__LINE__)

    for (int i = 0; input[i] != '\0'; ) {
        if (!first_item) {
            strcat(output, ", ");
        }
        first_item = 0;

        if (input[i] == '{') {
            char* end_brace = strchr(input + i, '}');
            if (end_brace) {
                int const_len = end_brace - (input + i + 1);
                char constant[64];
                strncpy(constant, input + i + 1, const_len);
                constant[const_len] = '\0';

                CharMapping* mapping = find_constant_mapping(charmap, constant);
                if (mapping) {
                    for (int j = 0; j < mapping->byte_count; j++) {
                        if (j > 0) strcat(output, ", ");
                        char hex_str[16];
                        sprintf(hex_str, "0x%02X", mapping->bytes[j]);
                        strcat(output, hex_str);
                    }
                } else {
                    // 常量未找到，提示并跳过
                    fprintf(stderr, "[Warning][Line %d] Constant \"%s\" not found in mapping, skipped.\n", CURRENT_LINE, constant);
                    // 跳过整个常量，不输出任何内容
                }

                i = end_brace - input + 1;
            } else {
                // '{' 但找不到 '}'，按单字符处理
                fprintf(stderr, "[Warning][Line %d] Unclosed '{' encountered, skipping character '%c'.\n", CURRENT_LINE, input[i]);
                i++;
            }
        } else {
            // 提取UTF-8字符
            char utf8_char[8];
            int char_len = extract_utf8_char(input, i, utf8_char);

            CharMapping* mapping = find_char_mapping(charmap, utf8_char);

            if (mapping) {
                // 使用charmap中定义的编码
                for (int j = 0; j < mapping->byte_count; j++) {
                    if (j > 0) strcat(output, ", ");
                    char hex_str[16];
                    sprintf(hex_str, "0x%02X", mapping->bytes[j]);
                    strcat(output, hex_str);
                }
            } else {
                // 字符未找到映射，提示并跳过
                fprintf(stderr, "[Warning][Line %d] Character \"%s\" not found in mapping, skipped.\n", CURRENT_LINE, utf8_char);
                // 直接跳过此字符，不输出
            }

            i += char_len;
        }
    }
      
    // 添加结束符  
    if (g_add_terminator) {
        int has_content = (strlen(output) > 2); // "{ " 长度是2，说明已有内容
        if (has_content) {
            strcat(output, ", ");
        }
        for (int i = 0; i < g_terminator_count; i++) {
            if (i > 0) strcat(output, ", ");
            char hex_str[16];
            sprintf(hex_str, "0x%02X", g_terminator_bytes[i]);
            strcat(output, hex_str);
        }
    }

    //特化处理蜡笔小新文本结束符
    int len = strlen(output);
    if (len >= 10) { // 最短 "0x**, 0x80", "0x**, 0xC0"
        // 找最后一个 "0x" 的位置
        char* last_0x = NULL;
        for (int i = len - 3; i >= 0; i--) {
            if (output[i] == '0' && output[i+1] == 'x') {
                last_0x = &output[i];
                break;
            }
        }
        if (last_0x) {
            // 找倒数第二个 "0x"
            char* second_last_0x = NULL;
            for (int i = (int)(last_0x - output) - 1; i >= 0; i--) {
                if (output[i] == '0' && output[i+1] == 'x') {
                    second_last_0x = &output[i];
                    break;
                }
            }
            if (second_last_0x) {
                unsigned int last_byte = 0, second_last_byte = 0;
                sscanf(second_last_0x, "0x%2X", &second_last_byte);
                sscanf(last_0x, "0x%2X", &last_byte);

                if (last_byte == 0x80 || last_byte == 0xC0) {
                    // 解析所有字节成数组
                    unsigned int bytes[4096];
                    int byte_count = 0;
                    const char* p = output;
                    while (*p) {
                        if (*p == '0' && *(p+1) == 'x') {
                            unsigned int val;
                            if (sscanf(p, "0x%2X", &val) == 1) {
                                bytes[byte_count++] = val;
                            }
                            p += 4; // 跳过"0x??"
                        } else {
                            p++;
                        }
                    }

                    if (byte_count >= 2) {
                        // 计算长度 = 除去最后2字节外的所有字节数
                        int data_len = byte_count - 2;

                        // 这里加一条特殊判断：
                        // 如果只有这2字节，即data_len==0，则长度字节一定写0x00
                        if (data_len == 0) {
                            data_len = 0x00;
                        }

                        // 把长度写回倒数第二个字节位置
                        char new_len_str[5];
                        sprintf(new_len_str, "0x%02X", data_len);
                        memcpy(second_last_0x, new_len_str, 4);
                    }
                }
            }
        }
    }
      
    strcat(output, " }");  

    #undef CURRENT_LINE
}  
  
// 预处理C文件  
int preprocess_file(const char* input_file, const char* output_file, const Charmap* charmap) {  
    FILE* in = fopen(input_file, "r");  
    if (!in) {  
        fprintf(stderr, "Error: Cannot open input file '%s'\n", input_file);  
        return 0;  
    }  
      
    FILE* out = fopen(output_file, "w");  
    if (!out) {  
        fprintf(stderr, "Error: Cannot create output file '%s'\n", output_file);  
        fclose(in);  
        return 0;  
    }  
      
    char line[MAX_LINE_LENGTH];  
    int line_count = 0;  
    int matches_found = 0;  
      
    while (fgets(line, sizeof(line), in)) {  
        line_count++;  
        char* pos = line;  
        char* start = line;  
        int line_modified = 0;  
          
        char output_line[MAX_LINE_LENGTH * 4] = "";  
          
        while ((pos = strstr(pos, "_(\"")) != NULL) {  
            line_modified = 1;  
            matches_found++;  
              
            int copy_len = pos - start;  
            if (copy_len > 0) {  
                strncat(output_line, start, copy_len);  
            }  
              
            pos += 3;  
            char* end_quote = strchr(pos, '"');  
            if (end_quote) {  
                char* closing_paren = end_quote + 1;  
                if (*closing_paren == ')') {  
                    char string_content[MAX_STRING_LENGTH];  
                    int len = end_quote - pos;  
                    if (len < MAX_STRING_LENGTH) {  
                        strncpy(string_content, pos, len);  
                        string_content[len] = '\0';  
                          
                        char converted[MAX_STRING_LENGTH * 8];  
                        convert_string(string_content, converted, charmap);  
                        strcat(output_line, converted);  
                          
                        pos = closing_paren + 1;  
                        start = pos;  
                    } else {  
                        strncat(output_line, start, 3);  
                        pos += 3;  
                        start = pos;  
                    }  
                } else {  
                    strncat(output_line, start, 3);  
                    pos += 3;  
                    start = pos;  
                }  
            } else {  
                strncat(output_line, start, 3);  
                pos += 3;  
                start = pos;  
            }  
        }  
          
        if (line_modified) {  
            strcat(output_line, start);  
            fputs(output_line, out);  
        } else {  
            fputs(line, out);  
        }  
    }  
      
    printf("Processed %d lines, found %d string conversions\n", line_count, matches_found);  
      
    fclose(in);  
    fclose(out);  
    return 1;  
}  
  
void print_usage(const char* program) {  
    fprintf(stderr, "Usage: %s <input.c> <output.c> <charmap.txt> [-t terminator_hex]\n", program);  
    fprintf(stderr, "Options:\n");  
    fprintf(stderr, "  -t terminator_hex  Add terminator with specified hex code\n");  
    fprintf(stderr, "Examples:\n");  
    fprintf(stderr, "  %s src/test.c temp.c charmap.txt\n", program);  
    fprintf(stderr, "  %s src/test.c temp.c charmap.txt -t FF\n", program);  
}  
int main(int argc, char* argv[]) {  
    #ifdef _WIN32
        SetConsoleOutputCP(CP_UTF8);
        SetConsoleCP(CP_UTF8);
    #endif

    if (argc < 4 || argc > 6) {  
        print_usage(argv[0]);  
        return 1;  
    }  
      
    const char* input_file = argv[1];  
    const char* output_file = argv[2];  
    const char* charmap_file = argv[3];  
      
    // 处理可选的结束符参数  
    if (argc >= 5) {  
        if (strcmp(argv[4], "-t") == 0 && argc == 6) {  
            g_add_terminator = 1;  
            g_terminator_count = parse_hex_code(argv[5], g_terminator_bytes);  
            if (g_terminator_count == 0) {  
                fprintf(stderr, "Error: Invalid terminator hex code '%s'\n", argv[5]);  
                return 1;  
            }  
            printf("Using terminator: ");  
            for (int i = 0; i < g_terminator_count; i++) {  
                printf("0x%02X", g_terminator_bytes[i]);  
                if (i < g_terminator_count - 1) printf(" ");  
            }  
            printf("\n");  
        } else {  
            print_usage(argv[0]);  
            return 1;  
        }  
    }  
      
    printf("Text Preprocessor v5.0\n");  
    printf("Input: %s\n", input_file);  
    printf("Output: %s\n", output_file);  
    printf("Charmap: %s\n", charmap_file);  
    printf("Add terminator: %s\n", g_add_terminator ? "Yes" : "No");  
      
    Charmap charmap;  
    if (!load_charmap(charmap_file, &charmap)) {  
        return 1;  
    }  
      
    if (!preprocess_file(input_file, output_file, &charmap)) {  
        return 1;  
    }  
      
    printf("Successfully preprocessed %s -> %s\n", input_file, output_file);  
    return 0;  
}