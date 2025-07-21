#include "libgba\gba_types.h"
#include "strings\NameList.h"
#include "strings\Tips.h"
#include "strings\GetItemNote.h"
#include "strings\MoviePlot.h"

//NameList      text    0x080B1B88 - 0x080B1D61
//Tips          text    0x080B1D64 - 0x080BC675
//GetItemNote   text    0x080BC678 - 0x080BDE9D
//MoviePlot     text    0x080BDEA0 - 0x080CC7D7

//*MessageOfNameList        0x084990C8 - 0x08499157
//*Tips                     0x08499158 - 0x0849BB6B
//**MessageOfTips           0x0849BB6C - 0x0849C673
//*GetItemNote              0x0849C674 - 0x0849CC07
//**MessageOfGetItemNote    0x0849CC08 - 0x0849CDE3
//*MoviePlot                0x0849CDE4 - 0x0849F96F
//**MessageOfMoviePlot      0x0849F970 - 0x084A0347


// *MessageOfNameList
// 0x084990C8 - 0x08499157
u8 *MessageOfNameList[] = 
{
    NameList_000, NameList_001, NameList_002, NameList_003, 
    NameList_004, NameList_005, NameList_006, NameList_007, 
    NameList_008, NameList_009, NameList_010, NameList_011, 
    NameList_012, NameList_013, NameList_014, NameList_015, 
    NameList_016, NameList_017, NameList_018, NameList_019, 
    NameList_020, NameList_021, NameList_022, NameList_023, 
    NameList_024, NameList_025, NameList_026, NameList_027, 
    NameList_028, NameList_029, NameList_030, NameList_031, 
    NameList_032, NameList_033, NameList_034, 0 
};

// *Tips #706
// 0x08499158 - 0x0849BB6B
u8 *Tips_000[] = {Tips_000_000, Tips_000_001, Tips_000_002, Tips_000_003, Tips_000_004, Tips_000_005, Tips_000_006, Tips_000_007, Tips_000_008, 0};
u8 *Tips_001[] = {Tips_001_000, Tips_001_001, Tips_001_002, Tips_001_003, 0};
u8 *Tips_002[] = {Tips_002_000, Tips_002_001, Tips_002_002, Tips_002_003, 0};
u8 *Tips_003[] = {Tips_003_000, Tips_003_001, Tips_003_002, Tips_003_003, 0};
u8 *Tips_004[] = {Tips_004_000, Tips_004_001, Tips_004_002, Tips_004_003, 0};
u8 *Tips_005[] = {Tips_005_000, Tips_005_001, Tips_005_002, Tips_005_003, 0};
u8 *Tips_006[] = {Tips_006_000, Tips_006_001, Tips_006_002, Tips_006_003, 0};
u8 *Tips_007[] = {Tips_007_000, Tips_007_001, Tips_007_002, Tips_007_003, 0};
u8 *Tips_008[] = {Tips_008_000, Tips_008_001, Tips_008_002, Tips_008_003, 0};
u8 *Tips_009[] = {Tips_009_000, Tips_009_001, Tips_009_002, Tips_009_003, 0};
u8 *Tips_010[] = {Tips_010_000, Tips_010_001, Tips_010_002, Tips_010_003, 0};
u8 *Tips_011[] = {Tips_011_000, Tips_011_001, Tips_011_002, Tips_011_003, 0};
u8 *Tips_012[] = {Tips_012_000, Tips_012_001, Tips_012_002, Tips_012_003, 0};
u8 *Tips_013[] = {Tips_013_000, Tips_013_001, Tips_013_002, Tips_013_003, 0};
u8 *Tips_014[] = {Tips_014_000, Tips_014_001, Tips_014_002, Tips_014_003, 0};
u8 *Tips_015[] = {Tips_015_000, 0};
u8 *Tips_016[] = {Tips_016_000, 0};
u8 *Tips_017[] = {Tips_017_000, Tips_017_001, Tips_017_002, Tips_017_003, Tips_017_004, Tips_017_005, 0};
u8 *Tips_018[] = {Tips_018_000, 0};
u8 *Tips_019[] = {Tips_019_000, Tips_019_001, 0};
u8 *Tips_020[] = {Tips_020_000, Tips_020_001, 0};
u8 *Tips_021[] = {Tips_021_000, Tips_021_001, 0};
u8 *Tips_022[] = {Tips_022_000, Tips_022_001, 0};
u8 *Tips_023[] = {Tips_023_000, 0};
u8 *Tips_024[] = {Tips_024_000, 0};
u8 *Tips_025[] = {Tips_025_000, Tips_025_001, Tips_025_002, Tips_025_003, 0};
u8 *Tips_026[] = {Tips_026_000, Tips_026_001, Tips_026_002, Tips_026_003, 0};
u8 *Tips_027[] = {Tips_027_000, Tips_027_001, Tips_027_002, Tips_027_003, 0};
u8 *Tips_028[] = {Tips_028_000, Tips_028_001, Tips_028_002, Tips_028_003, 0};
u8 *Tips_029[] = {Tips_029_000, Tips_029_001, Tips_029_002, Tips_029_003, 0};
u8 *Tips_030[] = {Tips_030_000, Tips_030_001, Tips_030_002, Tips_030_003, 0};
u8 *Tips_031[] = {Tips_031_000, Tips_031_001, Tips_031_002, Tips_031_003, 0};
u8 *Tips_032[] = {Tips_032_000, Tips_032_001, Tips_032_002, Tips_032_003, 0};
u8 *Tips_033[] = {Tips_033_000, Tips_033_001, Tips_033_002, Tips_033_003, 0};
u8 *Tips_034[] = {Tips_034_000, Tips_034_001, Tips_034_002, Tips_034_003, 0};
u8 *Tips_035[] = {Tips_035_000, Tips_035_001, Tips_035_002, Tips_035_003, 0};
u8 *Tips_036[] = {Tips_036_000, Tips_036_001, Tips_036_002, Tips_036_003, 0};
u8 *Tips_037[] = {Tips_037_000, Tips_037_001, Tips_037_002, Tips_037_003, Tips_037_004, Tips_037_005, 0};
u8 *Tips_038[] = {Tips_038_000, Tips_038_001, Tips_038_002, Tips_038_003, Tips_038_004, Tips_038_005, 0};
u8 *Tips_039[] = {Tips_039_000, Tips_039_001, Tips_039_002, 0};
u8 *Tips_040[] = {Tips_040_000, Tips_040_001, Tips_040_002, 0};
u8 *Tips_041[] = {Tips_041_000, Tips_041_001, 0};
u8 *Tips_042[] = {Tips_042_000, Tips_042_001, 0};
u8 *Tips_043[] = {Tips_043_000, Tips_043_001, 0};
u8 *Tips_044[] = {Tips_044_000, Tips_044_001, 0};
u8 *Tips_045[] = {Tips_045_000, 0};
u8 *Tips_046[] = {Tips_046_000, 0};
u8 *Tips_047[] = {Tips_047_000, 0};
u8 *Tips_048[] = {Tips_048_000, 0};
u8 *Tips_049[] = {Tips_049_000, Tips_049_001, Tips_049_002, Tips_049_003, 0};
u8 *Tips_050[] = {Tips_050_000, Tips_050_001, Tips_050_002, Tips_050_003, 0};
u8 *Tips_051[] = {Tips_051_000, Tips_051_001, Tips_051_002, Tips_051_003, 0};
u8 *Tips_052[] = {Tips_052_000, Tips_052_001, Tips_052_002, Tips_052_003, 0};
u8 *Tips_053[] = {Tips_053_000, Tips_053_001, Tips_053_002, Tips_053_003, 0};
u8 *Tips_054[] = {Tips_054_000, Tips_054_001, Tips_054_002, Tips_054_003, 0};
u8 *Tips_055[] = {Tips_055_000, Tips_055_001, Tips_055_002, Tips_055_003, 0};
u8 *Tips_056[] = {Tips_056_000, Tips_056_001, Tips_056_002, Tips_056_003, 0};
u8 *Tips_057[] = {Tips_057_000, Tips_057_001, Tips_057_002, Tips_057_003, 0};
u8 *Tips_058[] = {Tips_058_000, Tips_058_001, Tips_058_002, Tips_058_003, 0};
u8 *Tips_059[] = {Tips_059_000, Tips_059_001, Tips_059_002, Tips_059_003, 0};
u8 *Tips_060[] = {Tips_060_000, Tips_060_001, Tips_060_002, Tips_060_003, 0};
u8 *Tips_061[] = {Tips_061_000, Tips_061_001, Tips_061_002, Tips_061_003, 0};
u8 *Tips_062[] = {Tips_062_000, Tips_062_001, Tips_062_002, Tips_062_003, 0};
u8 *Tips_063[] = {Tips_063_000, Tips_063_001, Tips_063_002, Tips_063_003, 0};
u8 *Tips_064[] = {Tips_064_000, Tips_064_001, Tips_064_002, Tips_064_003, 0};
u8 *Tips_065[] = {Tips_065_000, Tips_065_001, Tips_065_002, Tips_065_003, 0};
u8 *Tips_066[] = {Tips_066_000, Tips_066_001, Tips_066_002, Tips_066_003, 0};
u8 *Tips_067[] = {Tips_067_000, Tips_067_001, Tips_067_002, Tips_067_003, 0};
u8 *Tips_068[] = {Tips_068_000, Tips_068_001, Tips_068_002, Tips_068_003, 0};
u8 *Tips_069[] = {Tips_069_000, Tips_069_001, Tips_069_002, Tips_069_003, 0};
u8 *Tips_070[] = {Tips_070_000, Tips_070_001, Tips_070_002, Tips_070_003, 0};
u8 *Tips_071[] = {Tips_071_000, Tips_071_001, Tips_071_002, Tips_071_003, 0};
u8 *Tips_072[] = {Tips_072_000, Tips_072_001, Tips_072_002, Tips_072_003, 0};
u8 *Tips_073[] = {Tips_073_000, Tips_073_001, Tips_073_002, Tips_073_003, 0};
u8 *Tips_074[] = {Tips_074_000, Tips_074_001, Tips_074_002, 0};
u8 *Tips_075[] = {Tips_075_000, Tips_075_001, Tips_075_002, 0};
u8 *Tips_076[] = {Tips_076_000, Tips_076_001, Tips_076_002, 0};
u8 *Tips_077[] = {Tips_077_000, Tips_077_001, 0};
u8 *Tips_078[] = {Tips_078_000, Tips_078_001, 0};
u8 *Tips_079[] = {Tips_079_000, Tips_079_001, 0};
u8 *Tips_080[] = {Tips_080_000, Tips_080_001, 0};
u8 *Tips_081[] = {Tips_081_000, Tips_081_001, 0};
u8 *Tips_082[] = {Tips_082_000, Tips_082_001, 0};
u8 *Tips_083[] = {Tips_083_000, Tips_083_001, 0};
u8 *Tips_084[] = {Tips_084_000, Tips_084_001, 0};
u8 *Tips_085[] = {Tips_085_000, 0};
u8 *Tips_086[] = {Tips_086_000, 0};
u8 *Tips_087[] = {Tips_087_000, Tips_087_001, Tips_087_002, 0};
u8 *Tips_088[] = {Tips_088_000, Tips_088_001, Tips_088_002, 0};
u8 *Tips_089[] = {Tips_089_000, Tips_089_001, Tips_089_002, 0};
u8 *Tips_090[] = {Tips_090_000, Tips_090_001, Tips_090_002, 0};
u8 *Tips_091[] = {Tips_091_000, Tips_091_001, 0};
u8 *Tips_092[] = {Tips_092_000, Tips_092_001, 0};
u8 *Tips_093[] = {Tips_093_000, Tips_093_001, 0};
u8 *Tips_094[] = {Tips_094_000, Tips_094_001, 0};
u8 *Tips_095[] = {Tips_095_000, Tips_095_001, 0};
u8 *Tips_096[] = {Tips_096_000, Tips_096_001, 0};
u8 *Tips_097[] = {Tips_097_000, 0};
u8 *Tips_098[] = {Tips_098_000, 0};
u8 *Tips_099[] = {Tips_099_000, 0};
u8 *Tips_100[] = {Tips_100_000, 0};
u8 *Tips_101[] = {Tips_101_000, 0};
u8 *Tips_102[] = {Tips_102_000, 0};
u8 *Tips_103[] = {Tips_103_000, 0};
u8 *Tips_104[] = {Tips_104_000, 0};
u8 *Tips_105[] = {Tips_105_000, 0};
u8 *Tips_106[] = {Tips_106_000, 0};
u8 *Tips_107[] = {Tips_107_000, 0};
u8 *Tips_108[] = {Tips_108_000, 0};
u8 *Tips_109[] = {Tips_109_000, Tips_109_001, Tips_109_002, Tips_109_003, 0};
u8 *Tips_110[] = {Tips_110_000, Tips_110_001, Tips_110_002, Tips_110_003, 0};
u8 *Tips_111[] = {Tips_111_000, Tips_111_001, 0};
u8 *Tips_112[] = {Tips_112_000, Tips_112_001, 0};
u8 *Tips_113[] = {Tips_113_000, Tips_113_001, 0};
u8 *Tips_114[] = {Tips_114_000, Tips_114_001, 0};
u8 *Tips_115[] = {Tips_115_000, Tips_115_001, 0};
u8 *Tips_116[] = {Tips_116_000, Tips_116_001, 0};
u8 *Tips_117[] = {Tips_117_000, Tips_117_001, 0};
u8 *Tips_118[] = {Tips_118_000, Tips_118_001, 0};
u8 *Tips_119[] = {Tips_119_000, Tips_119_001, 0};
u8 *Tips_120[] = {Tips_120_000, Tips_120_001, 0};
u8 *Tips_121[] = {Tips_121_000, Tips_121_001, Tips_121_002, Tips_121_003, 0};
u8 *Tips_122[] = {Tips_122_000, Tips_122_001, Tips_122_002, Tips_122_003, 0};
u8 *Tips_123[] = {Tips_123_000, Tips_123_001, Tips_123_002, Tips_123_003, 0};
u8 *Tips_124[] = {Tips_124_000, Tips_124_001, Tips_124_002, Tips_124_003, 0};
u8 *Tips_125[] = {Tips_125_000, Tips_125_001, Tips_125_002, Tips_125_003, 0};
u8 *Tips_126[] = {Tips_126_000, Tips_126_001, Tips_126_002, Tips_126_003, 0};
u8 *Tips_127[] = {Tips_127_000, Tips_127_001, Tips_127_002, Tips_127_003, 0};
u8 *Tips_128[] = {Tips_128_000, Tips_128_001, Tips_128_002, Tips_128_003, 0};
u8 *Tips_129[] = {Tips_129_000, Tips_129_001, Tips_129_002, Tips_129_003, 0};
u8 *Tips_130[] = {Tips_130_000, Tips_130_001, Tips_130_002, Tips_130_003, 0};
u8 *Tips_131[] = {Tips_131_000, Tips_131_001, Tips_131_002, Tips_131_003, 0};
u8 *Tips_132[] = {Tips_132_000, Tips_132_001, Tips_132_002, Tips_132_003, 0};
u8 *Tips_133[] = {Tips_133_000, Tips_133_001, Tips_133_002, Tips_133_003, Tips_133_004, Tips_133_005, Tips_133_006, Tips_133_007, Tips_133_008, Tips_133_009, Tips_133_010, Tips_133_011, Tips_133_012, Tips_133_013, Tips_133_014, 0};
u8 *Tips_134[] = {Tips_134_000, Tips_134_001, Tips_134_002, Tips_134_003, 0};
u8 *Tips_135[] = {Tips_135_000, Tips_135_001, Tips_135_002, Tips_135_003, 0};
u8 *Tips_136[] = {Tips_136_000, 0};
u8 *Tips_137[] = {Tips_137_000, Tips_137_001, Tips_137_002, 0};
u8 *Tips_138[] = {Tips_138_000, 0};
u8 *Tips_139[] = {Tips_139_000, Tips_139_001, Tips_139_002, Tips_139_003, 0};
u8 *Tips_140[] = {Tips_140_000, 0};
u8 *Tips_141[] = {Tips_141_000, Tips_141_001, 0};
u8 *Tips_142[] = {Tips_142_000, Tips_142_001, Tips_142_002, 0};
u8 *Tips_143[] = {Tips_143_000, Tips_143_001, Tips_143_002, 0};
u8 *Tips_144[] = {Tips_144_000, Tips_144_001, Tips_144_002, Tips_144_003, 0};
u8 *Tips_145[] = {Tips_145_000, Tips_145_001, Tips_145_002, Tips_145_003, 0};
u8 *Tips_146[] = {Tips_146_000, Tips_146_001, Tips_146_002, Tips_146_003, Tips_146_004, Tips_146_005, Tips_146_006, 0};
u8 *Tips_147[] = {Tips_147_000, Tips_147_001, 0};
u8 *Tips_148[] = {Tips_148_000, Tips_148_001, Tips_148_002, 0};
u8 *Tips_149[] = {Tips_149_000, Tips_149_001, Tips_149_002, 0};
u8 *Tips_150[] = {Tips_150_000, Tips_150_001, Tips_150_002, Tips_150_003, Tips_150_004, Tips_150_005, Tips_150_006, Tips_150_007, Tips_150_008, Tips_150_009, 0};
u8 *Tips_151[] = {Tips_151_000, Tips_151_001, Tips_151_002, Tips_151_003, Tips_151_004, Tips_151_005, Tips_151_006, Tips_151_007, Tips_151_008, Tips_151_009, 0};
u8 *Tips_152[] = {Tips_152_000, Tips_152_001, 0};
u8 *Tips_153[] = {Tips_153_000, Tips_153_001, 0};
u8 *Tips_154[] = {Tips_154_000, Tips_154_001, Tips_154_002, 0};
u8 *Tips_155[] = {Tips_155_000, Tips_155_001, Tips_155_002, 0};
u8 *Tips_156[] = {Tips_156_000, Tips_156_001, Tips_156_002, Tips_156_003, 0};
u8 *Tips_157[] = {Tips_157_000, Tips_157_001, Tips_157_002, Tips_157_003, 0};
u8 *Tips_158[] = {Tips_158_000, Tips_158_001, Tips_158_002, Tips_158_003, 0};
u8 *Tips_159[] = {Tips_159_000, Tips_159_001, 0};
u8 *Tips_160[] = {Tips_160_000, Tips_160_001, Tips_160_002, Tips_160_003, 0};
u8 *Tips_161[] = {Tips_161_000, Tips_161_001, Tips_161_002, Tips_161_003, 0};
u8 *Tips_162[] = {Tips_162_000, 0};
u8 *Tips_163[] = {Tips_163_000, 0};
u8 *Tips_164[] = {Tips_164_000, Tips_164_001, Tips_164_002, 0};
u8 *Tips_165[] = {Tips_165_000, Tips_165_001, Tips_165_002, Tips_165_003, Tips_165_004, Tips_165_005, 0};
u8 *Tips_166[] = {Tips_166_000, Tips_166_001, Tips_166_002, 0};
u8 *Tips_167[] = {Tips_167_000, Tips_167_001, Tips_167_002, 0};
u8 *Tips_168[] = {Tips_168_000, Tips_168_001, Tips_168_002, Tips_168_003, 0};
u8 *Tips_169[] = {Tips_169_000, Tips_169_001, Tips_169_002, Tips_169_003, 0};
u8 *Tips_170[] = {Tips_170_000, 0};
u8 *Tips_171[] = {Tips_171_000, 0};
u8 *Tips_172[] = {Tips_172_000, 0};
u8 *Tips_173[] = {Tips_173_000, 0};
u8 *Tips_174[] = {Tips_174_000, 0};
u8 *Tips_175[] = {Tips_175_000, 0};
u8 *Tips_176[] = {Tips_176_000, 0};
u8 *Tips_177[] = {Tips_177_000, 0};
u8 *Tips_178[] = {Tips_178_000, 0};
u8 *Tips_179[] = {Tips_179_000, 0};
u8 *Tips_180[] = {Tips_180_000, 0};
u8 *Tips_181[] = {Tips_181_000, 0};
u8 *Tips_182[] = {Tips_182_000, Tips_182_001, Tips_182_002, Tips_182_003, 0};
u8 *Tips_183[] = {Tips_183_000, Tips_183_001, Tips_183_002, Tips_183_003, 0};
u8 *Tips_184[] = {Tips_184_000, Tips_184_001, Tips_184_002, Tips_184_003, 0};
u8 *Tips_185[] = {Tips_185_000, Tips_185_001, Tips_185_002, Tips_185_003, 0};
u8 *Tips_186[] = {Tips_186_000, Tips_186_001, Tips_186_002, Tips_186_003, 0};
u8 *Tips_187[] = {Tips_187_000, Tips_187_001, Tips_187_002, Tips_187_003, 0};
u8 *Tips_188[] = {Tips_188_000, Tips_188_001, Tips_188_002, Tips_188_003, 0};
u8 *Tips_189[] = {Tips_189_000, Tips_189_001, Tips_189_002, Tips_189_003, 0};
u8 *Tips_190[] = {Tips_190_000, Tips_190_001, Tips_190_002, Tips_190_003, 0};
u8 *Tips_191[] = {Tips_191_000, Tips_191_001, Tips_191_002, Tips_191_003, 0};
u8 *Tips_192[] = {Tips_192_000, Tips_192_001, Tips_192_002, Tips_192_003, 0};
u8 *Tips_193[] = {Tips_193_000, Tips_193_001, Tips_193_002, Tips_193_003, 0};
u8 *Tips_194[] = {Tips_194_000, Tips_194_001, Tips_194_002, 0};
u8 *Tips_195[] = {Tips_195_000, Tips_195_001, 0};
u8 *Tips_196[] = {Tips_196_000, Tips_196_001, Tips_196_002, Tips_196_003, 0};
u8 *Tips_197[] = {Tips_197_000, Tips_197_001, Tips_197_002, Tips_197_003, 0};
u8 *Tips_198[] = {Tips_198_000, Tips_198_001, 0};
u8 *Tips_199[] = {Tips_199_000, Tips_199_001, 0};
u8 *Tips_200[] = {Tips_200_000, Tips_200_001, Tips_200_002, Tips_200_003, Tips_200_004, 0};
u8 *Tips_201[] = {Tips_201_000, Tips_201_001, Tips_201_002, Tips_201_003, 0};
u8 *Tips_202[] = {Tips_202_000, Tips_202_001, Tips_202_002, 0};
u8 *Tips_203[] = {Tips_203_000, Tips_203_001, Tips_203_002, 0};
u8 *Tips_204[] = {Tips_204_000, Tips_204_001, Tips_204_002, Tips_204_003, 0};
u8 *Tips_205[] = {Tips_205_000, Tips_205_001, Tips_205_002, Tips_205_003, 0};
u8 *Tips_206[] = {Tips_206_000, Tips_206_001, Tips_206_002, 0};
u8 *Tips_207[] = {Tips_207_000, Tips_207_001, Tips_207_002, Tips_207_003, 0};
u8 *Tips_208[] = {Tips_208_000, Tips_208_001, 0};
u8 *Tips_209[] = {Tips_209_000, Tips_209_001, 0};
u8 *Tips_210[] = {Tips_210_000, Tips_210_001, Tips_210_002, 0};
u8 *Tips_211[] = {Tips_211_000, Tips_211_001, Tips_211_002, 0};
u8 *Tips_212[] = {Tips_212_000, Tips_212_001, 0};
u8 *Tips_213[] = {Tips_213_000, Tips_213_001, 0};
u8 *Tips_214[] = {Tips_214_000, Tips_214_001, 0};
u8 *Tips_215[] = {Tips_215_000, Tips_215_001, 0};
u8 *Tips_216[] = {Tips_216_000, Tips_216_001, 0};
u8 *Tips_217[] = {Tips_217_000, Tips_217_001, 0};
u8 *Tips_218[] = {Tips_218_000, Tips_218_001, 0};
u8 *Tips_219[] = {Tips_219_000, Tips_219_001, 0};
u8 *Tips_220[] = {Tips_220_000, Tips_220_001, Tips_220_002, Tips_220_003, 0};
u8 *Tips_221[] = {Tips_221_000, Tips_221_001, Tips_221_002, Tips_221_003, 0};
u8 *Tips_222[] = {Tips_222_000, Tips_222_001, 0};
u8 *Tips_223[] = {Tips_223_000, Tips_223_001, 0};
u8 *Tips_224[] = {Tips_224_000, Tips_224_001, 0};
u8 *Tips_225[] = {Tips_225_000, Tips_225_001, 0};
u8 *Tips_226[] = {Tips_226_000, 0};
u8 *Tips_227[] = {Tips_227_000, 0};
u8 *Tips_228[] = {Tips_228_000, 0};
u8 *Tips_229[] = {Tips_229_000, 0};
u8 *Tips_230[] = {Tips_230_000, Tips_230_001, Tips_230_002, Tips_230_003, 0};
u8 *Tips_231[] = {Tips_231_000, Tips_231_001, Tips_231_002, Tips_231_003, 0};
u8 *Tips_232[] = {Tips_232_000, Tips_232_001, 0};
u8 *Tips_233[] = {Tips_233_000, Tips_233_001, 0};
u8 *Tips_234[] = {Tips_234_000, Tips_234_001, 0};
u8 *Tips_235[] = {Tips_235_000, Tips_235_001, 0};
u8 *Tips_236[] = {Tips_236_000, Tips_236_001, 0};
u8 *Tips_237[] = {Tips_237_000, Tips_237_001, 0};
u8 *Tips_238[] = {Tips_238_000, Tips_238_001, 0};
u8 *Tips_239[] = {Tips_239_000, Tips_239_001, 0};
u8 *Tips_240[] = {Tips_240_000, Tips_240_001, 0};
u8 *Tips_241[] = {Tips_241_000, Tips_241_001, 0};
u8 *Tips_242[] = {Tips_242_000, Tips_242_001, Tips_242_002, Tips_242_003, 0};
u8 *Tips_243[] = {Tips_243_000, Tips_243_001, Tips_243_002, Tips_243_003, 0};
u8 *Tips_244[] = {Tips_244_000, Tips_244_001, Tips_244_002, Tips_244_003, 0};
u8 *Tips_245[] = {Tips_245_000, Tips_245_001, Tips_245_002, Tips_245_003, 0};
u8 *Tips_246[] = {Tips_246_000, Tips_246_001, Tips_246_002, Tips_246_003, 0};
u8 *Tips_247[] = {Tips_247_000, Tips_247_001, Tips_247_002, Tips_247_003, 0};
u8 *Tips_248[] = {Tips_248_000, Tips_248_001, Tips_248_002, Tips_248_003, 0};
u8 *Tips_249[] = {Tips_249_000, Tips_249_001, Tips_249_002, Tips_249_003, 0};
u8 *Tips_250[] = {Tips_250_000, Tips_250_001, Tips_250_002, Tips_250_003, 0};
u8 *Tips_251[] = {Tips_251_000, Tips_251_001, Tips_251_002, Tips_251_003, 0};
u8 *Tips_252[] = {Tips_252_000, Tips_252_001, Tips_252_002, Tips_252_003, 0};
u8 *Tips_253[] = {Tips_253_000, Tips_253_001, Tips_253_002, Tips_253_003, 0};
u8 *Tips_254[] = {Tips_254_000, Tips_254_001, 0};
u8 *Tips_255[] = {Tips_255_000, Tips_255_001, 0};
u8 *Tips_256[] = {Tips_256_000, Tips_256_001, 0};
u8 *Tips_257[] = {Tips_257_000, Tips_257_001, 0};
u8 *Tips_258[] = {Tips_258_000, Tips_258_001, 0};
u8 *Tips_259[] = {Tips_259_000, Tips_259_001, 0};
u8 *Tips_260[] = {Tips_260_000, Tips_260_001, 0};
u8 *Tips_261[] = {Tips_261_000, Tips_261_001, 0};
u8 *Tips_262[] = {Tips_262_000, Tips_262_001, 0};
u8 *Tips_263[] = {Tips_263_000, Tips_263_001, 0};
u8 *Tips_264[] = {Tips_264_000, Tips_264_001, 0};
u8 *Tips_265[] = {Tips_265_000, Tips_265_001, 0};
u8 *Tips_266[] = {Tips_266_000, Tips_266_001, Tips_266_002, Tips_266_003, Tips_266_004, Tips_266_005, 0};
u8 *Tips_267[] = {Tips_267_000, Tips_267_001, Tips_267_002, Tips_267_003, Tips_267_004, Tips_267_005, Tips_267_006, 0};
u8 *Tips_268[] = {Tips_268_000, Tips_268_001, Tips_268_002, 0};
u8 *Tips_269[] = {Tips_269_000, Tips_269_001, 0};
u8 *Tips_270[] = {Tips_270_000, Tips_270_001, Tips_270_002, 0};
u8 *Tips_271[] = {Tips_271_000, Tips_271_001, Tips_271_002, Tips_271_003, 0};
u8 *Tips_272[] = {Tips_272_000, Tips_272_001, Tips_272_002, 0};
u8 *Tips_273[] = {Tips_273_000, Tips_273_001, Tips_273_002, Tips_273_003, 0};
u8 *Tips_274[] = {Tips_274_000, Tips_274_001, Tips_274_002, 0};
u8 *Tips_275[] = {Tips_275_000, Tips_275_001, 0};
u8 *Tips_276[] = {Tips_276_000, Tips_276_001, Tips_276_002, 0};
u8 *Tips_277[] = {Tips_277_000, Tips_277_001, 0};
u8 *Tips_278[] = {Tips_278_000, Tips_278_001, Tips_278_002, 0};
u8 *Tips_279[] = {Tips_279_000, Tips_279_001, 0};
u8 *Tips_280[] = {Tips_280_000, Tips_280_001, 0};
u8 *Tips_281[] = {Tips_281_000, Tips_281_001, 0};
u8 *Tips_282[] = {Tips_282_000, Tips_282_001, 0};
u8 *Tips_283[] = {Tips_283_000, Tips_283_001, Tips_283_002, 0};
u8 *Tips_284[] = {Tips_284_000, Tips_284_001, Tips_284_002, 0};
u8 *Tips_285[] = {Tips_285_000, Tips_285_001, 0};
u8 *Tips_286[] = {Tips_286_000, Tips_286_001, 0};
u8 *Tips_287[] = {Tips_287_000, Tips_287_001, 0};
u8 *Tips_288[] = {Tips_288_000, Tips_288_001, 0};
u8 *Tips_289[] = {Tips_289_000, Tips_289_001, 0};
u8 *Tips_290[] = {Tips_290_000, Tips_290_001, 0};
u8 *Tips_291[] = {Tips_291_000, Tips_291_001, Tips_291_002, Tips_291_003, 0};
u8 *Tips_292[] = {Tips_292_000, Tips_292_001, Tips_292_002, Tips_292_003, 0};
u8 *Tips_293[] = {Tips_293_000, Tips_293_001, Tips_293_002, Tips_293_003, 0};
u8 *Tips_294[] = {Tips_294_000, Tips_294_001, Tips_294_002, Tips_294_003, 0};
u8 *Tips_295[] = {Tips_295_000, Tips_295_001, Tips_295_002, Tips_295_003, 0};
u8 *Tips_296[] = {Tips_296_000, Tips_296_001, Tips_296_002, Tips_296_003, 0};
u8 *Tips_297[] = {Tips_297_000, Tips_297_001, Tips_297_002, Tips_297_003, 0};
u8 *Tips_298[] = {Tips_298_000, Tips_298_001, Tips_298_002, Tips_298_003, 0};
u8 *Tips_299[] = {Tips_299_000, Tips_299_001, Tips_299_002, Tips_299_003, 0};
u8 *Tips_300[] = {Tips_300_000, Tips_300_001, Tips_300_002, Tips_300_003, 0};
u8 *Tips_301[] = {Tips_301_000, Tips_301_001, Tips_301_002, Tips_301_003, 0};
u8 *Tips_302[] = {Tips_302_000, Tips_302_001, Tips_302_002, Tips_302_003, 0};
u8 *Tips_303[] = {Tips_303_000, 0};
u8 *Tips_304[] = {Tips_304_000, 0};
u8 *Tips_305[] = {Tips_305_000, 0};
u8 *Tips_306[] = {Tips_306_000, 0};
u8 *Tips_307[] = {Tips_307_000, 0};
u8 *Tips_308[] = {Tips_308_000, 0};
u8 *Tips_309[] = {Tips_309_000, 0};
u8 *Tips_310[] = {Tips_310_000, 0};
u8 *Tips_311[] = {Tips_311_000, 0};
u8 *Tips_312[] = {Tips_312_000, 0};
u8 *Tips_313[] = {Tips_313_000, 0};
u8 *Tips_314[] = {Tips_314_000, 0};
u8 *Tips_315[] = {Tips_315_000, Tips_315_001, Tips_315_002, Tips_315_003, 0};
u8 *Tips_316[] = {Tips_316_000, Tips_316_001, Tips_316_002, Tips_316_003, 0};
u8 *Tips_317[] = {Tips_317_000, Tips_317_001, 0};
u8 *Tips_318[] = {Tips_318_000, Tips_318_001, 0};
u8 *Tips_319[] = {Tips_319_000, Tips_319_001, 0};
u8 *Tips_320[] = {Tips_320_000, Tips_320_001, 0};
u8 *Tips_321[] = {Tips_321_000, Tips_321_001, 0};
u8 *Tips_322[] = {Tips_322_000, Tips_322_001, 0};
u8 *Tips_323[] = {Tips_323_000, Tips_323_001, 0};
u8 *Tips_324[] = {Tips_324_000, Tips_324_001, 0};
u8 *Tips_325[] = {Tips_325_000, Tips_325_001, 0};
u8 *Tips_326[] = {Tips_326_000, Tips_326_001, 0};
u8 *Tips_327[] = {Tips_327_000, Tips_327_001, Tips_327_002, Tips_327_003, 0};
u8 *Tips_328[] = {Tips_328_000, Tips_328_001, Tips_328_002, Tips_328_003, 0};
u8 *Tips_329[] = {Tips_329_000, Tips_329_001, 0};
u8 *Tips_330[] = {Tips_330_000, Tips_330_001, 0};
u8 *Tips_331[] = {Tips_331_000, 0};
u8 *Tips_332[] = {Tips_332_000, 0};
u8 *Tips_333[] = {Tips_333_000, 0};
u8 *Tips_334[] = {Tips_334_000, 0};
u8 *Tips_335[] = {Tips_335_000, Tips_335_001, 0};
u8 *Tips_336[] = {Tips_336_000, Tips_336_001, 0};
u8 *Tips_337[] = {Tips_337_000, 0};
u8 *Tips_338[] = {Tips_338_000, 0};
u8 *Tips_339[] = {Tips_339_000, Tips_339_001, Tips_339_002, Tips_339_003, 0};
u8 *Tips_340[] = {Tips_340_000, Tips_340_001, Tips_340_002, Tips_340_003, 0};
u8 *Tips_341[] = {Tips_341_000, Tips_341_001, Tips_341_002, Tips_341_003, 0};
u8 *Tips_342[] = {Tips_342_000, Tips_342_001, Tips_342_002, Tips_342_003, 0};
u8 *Tips_343[] = {Tips_343_000, Tips_343_001, Tips_343_002, Tips_343_003, 0};
u8 *Tips_344[] = {Tips_344_000, Tips_344_001, Tips_344_002, Tips_344_003, 0};
u8 *Tips_345[] = {Tips_345_000, Tips_345_001, Tips_345_002, Tips_345_003, 0};
u8 *Tips_346[] = {Tips_346_000, Tips_346_001, Tips_346_002, Tips_346_003, 0};
u8 *Tips_347[] = {Tips_347_000, Tips_347_001, Tips_347_002, Tips_347_003, 0};
u8 *Tips_348[] = {Tips_348_000, Tips_348_001, Tips_348_002, Tips_348_003, 0};
u8 *Tips_349[] = {Tips_349_000, Tips_349_001, Tips_349_002, Tips_349_003, 0};
u8 *Tips_350[] = {Tips_350_000, Tips_350_001, Tips_350_002, Tips_350_003, 0};
u8 *Tips_351[] = {Tips_351_000, Tips_351_001, Tips_351_002, 0};
u8 *Tips_352[] = {Tips_352_000, Tips_352_001, Tips_352_002, 0};
u8 *Tips_353[] = {Tips_353_000, Tips_353_001, 0};
u8 *Tips_354[] = {Tips_354_000, Tips_354_001, 0};
u8 *Tips_355[] = {Tips_355_000, 0};
u8 *Tips_356[] = {Tips_356_000, 0};
u8 *Tips_357[] = {Tips_357_000, Tips_357_001, 0};
u8 *Tips_358[] = {Tips_358_000, Tips_358_001, 0};
u8 *Tips_359[] = {Tips_359_000, Tips_359_001, 0};
u8 *Tips_360[] = {Tips_360_000, Tips_360_001, 0};
u8 *Tips_361[] = {Tips_361_000, Tips_361_001, 0};
u8 *Tips_362[] = {Tips_362_000, Tips_362_001, 0};
u8 *Tips_363[] = {Tips_363_000, Tips_363_001, 0};
u8 *Tips_364[] = {Tips_364_000, Tips_364_001, 0};
u8 *Tips_365[] = {Tips_365_000, Tips_365_001, Tips_365_002, Tips_365_003, 0};
u8 *Tips_366[] = {Tips_366_000, Tips_366_001, Tips_366_002, 0};
u8 *Tips_367[] = {Tips_367_000, Tips_367_001, 0};
u8 *Tips_368[] = {Tips_368_000, Tips_368_001, 0};
u8 *Tips_369[] = {Tips_369_000, Tips_369_001, 0};
u8 *Tips_370[] = {Tips_370_000, Tips_370_001, 0};
u8 *Tips_371[] = {Tips_371_000, Tips_371_001, 0};
u8 *Tips_372[] = {Tips_372_000, Tips_372_001, 0};
u8 *Tips_373[] = {Tips_373_000, Tips_373_001, 0};
u8 *Tips_374[] = {Tips_374_000, Tips_374_001, 0};
u8 *Tips_375[] = {Tips_375_000, Tips_375_001, Tips_375_002, Tips_375_003, 0};
u8 *Tips_376[] = {Tips_376_000, Tips_376_001, Tips_376_002, Tips_376_003, 0};
u8 *Tips_377[] = {Tips_377_000, Tips_377_001, 0};
u8 *Tips_378[] = {Tips_378_000, Tips_378_001, 0};
u8 *Tips_379[] = {Tips_379_000, Tips_379_001, Tips_379_002, Tips_379_003, 0};
u8 *Tips_380[] = {Tips_380_000, Tips_380_001, 0};
u8 *Tips_381[] = {Tips_381_000, Tips_381_001, 0};
u8 *Tips_382[] = {Tips_382_000, Tips_382_001, 0};
u8 *Tips_383[] = {Tips_383_000, Tips_383_001, 0};
u8 *Tips_384[] = {Tips_384_000, Tips_384_001, 0};
u8 *Tips_385[] = {Tips_385_000, Tips_385_001, Tips_385_002, Tips_385_003, 0};
u8 *Tips_386[] = {Tips_386_000, Tips_386_001, Tips_386_002, Tips_386_003, 0};
u8 *Tips_387[] = {Tips_387_000, Tips_387_001, 0};
u8 *Tips_388[] = {Tips_388_000, Tips_388_001, 0};
u8 *Tips_389[] = {Tips_389_000, Tips_389_001, 0};
u8 *Tips_390[] = {Tips_390_000, Tips_390_001, 0};
u8 *Tips_391[] = {Tips_391_000, Tips_391_001, 0};
u8 *Tips_392[] = {Tips_392_000, Tips_392_001, 0};
u8 *Tips_393[] = {Tips_393_000, Tips_393_001, 0};
u8 *Tips_394[] = {Tips_394_000, Tips_394_001, 0};
u8 *Tips_395[] = {Tips_395_000, Tips_395_001, 0};
u8 *Tips_396[] = {Tips_396_000, Tips_396_001, 0};
u8 *Tips_397[] = {Tips_397_000, Tips_397_001, Tips_397_002, Tips_397_003, 0};
u8 *Tips_398[] = {Tips_398_000, Tips_398_001, Tips_398_002, Tips_398_003, 0};
u8 *Tips_399[] = {Tips_399_000, Tips_399_001, Tips_399_002, Tips_399_003, Tips_399_004, Tips_399_005, Tips_399_006, Tips_399_007, Tips_399_008, Tips_399_009, Tips_399_010, 0};
u8 *Tips_400[] = {Tips_400_000, Tips_400_001, Tips_400_002, Tips_400_003, 0};
u8 *Tips_401[] = {Tips_401_000, Tips_401_001, Tips_401_002, Tips_401_003, 0};
u8 *Tips_402[] = {Tips_402_000, Tips_402_001, Tips_402_002, Tips_402_003, 0};
u8 *Tips_403[] = {Tips_403_000, Tips_403_001, Tips_403_002, Tips_403_003, 0};
u8 *Tips_404[] = {Tips_404_000, Tips_404_001, Tips_404_002, Tips_404_003, 0};
u8 *Tips_405[] = {Tips_405_000, Tips_405_001, Tips_405_002, Tips_405_003, 0};
u8 *Tips_406[] = {Tips_406_000, Tips_406_001, Tips_406_002, Tips_406_003, 0};
u8 *Tips_407[] = {Tips_407_000, Tips_407_001, Tips_407_002, Tips_407_003, 0};
u8 *Tips_408[] = {Tips_408_000, Tips_408_001, Tips_408_002, Tips_408_003, 0};
u8 *Tips_409[] = {Tips_409_000, Tips_409_001, Tips_409_002, Tips_409_003, 0};
u8 *Tips_410[] = {Tips_410_000, Tips_410_001, Tips_410_002, Tips_410_003, 0};
u8 *Tips_411[] = {Tips_411_000, Tips_411_001, Tips_411_002, Tips_411_003, 0};
u8 *Tips_412[] = {Tips_412_000, 0};
u8 *Tips_413[] = {Tips_413_000, 0};
u8 *Tips_414[] = {Tips_414_000, 0};
u8 *Tips_415[] = {Tips_415_000, 0};
u8 *Tips_416[] = {Tips_416_000, 0};
u8 *Tips_417[] = {Tips_417_000, 0};
u8 *Tips_418[] = {Tips_418_000, 0};
u8 *Tips_419[] = {Tips_419_000, 0};
u8 *Tips_420[] = {Tips_420_000, 0};
u8 *Tips_421[] = {Tips_421_000, 0};
u8 *Tips_422[] = {Tips_422_000, 0};
u8 *Tips_423[] = {Tips_423_000, 0};
u8 *Tips_424[] = {Tips_424_000, Tips_424_001, Tips_424_002, Tips_424_003, 0};
u8 *Tips_425[] = {Tips_425_000, Tips_425_001, Tips_425_002, Tips_425_003, Tips_425_004, 0};
u8 *Tips_426[] = {Tips_426_000, Tips_426_001, 0};
u8 *Tips_427[] = {Tips_427_000, Tips_427_001, 0};
u8 *Tips_428[] = {Tips_428_000, 0};
u8 *Tips_429[] = {Tips_429_000, 0};
u8 *Tips_430[] = {Tips_430_000, Tips_430_001, Tips_430_002, Tips_430_003, 0};
u8 *Tips_431[] = {Tips_431_000, 0};
u8 *Tips_432[] = {Tips_432_000, 0};
u8 *Tips_433[] = {Tips_433_000, 0};
u8 *Tips_434[] = {Tips_434_000, Tips_434_001, 0};
u8 *Tips_435[] = {Tips_435_000, Tips_435_001, 0};
u8 *Tips_436[] = {Tips_436_000, Tips_436_001, Tips_436_002, Tips_436_003, 0};
u8 *Tips_437[] = {Tips_437_000, Tips_437_001, Tips_437_002, 0};
u8 *Tips_438[] = {Tips_438_000, Tips_438_001, 0};
u8 *Tips_439[] = {Tips_439_000, Tips_439_001, 0};
u8 *Tips_440[] = {Tips_440_000, 0};
u8 *Tips_441[] = {Tips_441_000, 0};
u8 *Tips_442[] = {Tips_442_000, 0};
u8 *Tips_443[] = {Tips_443_000, 0};
u8 *Tips_444[] = {Tips_444_000, Tips_444_001, 0};
u8 *Tips_445[] = {Tips_445_000, Tips_445_001, 0};
u8 *Tips_446[] = {Tips_446_000, Tips_446_001, 0};
u8 *Tips_447[] = {Tips_447_000, Tips_447_001, 0};
u8 *Tips_448[] = {Tips_448_000, Tips_448_001, Tips_448_002, 0};
u8 *Tips_449[] = {Tips_449_000, Tips_449_001, Tips_449_002, Tips_449_003, 0};
u8 *Tips_450[] = {Tips_450_000, Tips_450_001, 0};
u8 *Tips_451[] = {Tips_451_000, Tips_451_001, 0};
u8 *Tips_452[] = {Tips_452_000, 0};
u8 *Tips_453[] = {Tips_453_000, Tips_453_001, Tips_453_002, 0};
u8 *Tips_454[] = {Tips_454_000, 0};
u8 *Tips_455[] = {Tips_455_000, 0};
u8 *Tips_456[] = {Tips_456_000, 0};
u8 *Tips_457[] = {Tips_457_000, 0};
u8 *Tips_458[] = {Tips_458_000, Tips_458_001, 0};
u8 *Tips_459[] = {Tips_459_000, Tips_459_001, 0};
u8 *Tips_460[] = {Tips_460_000, Tips_460_001, Tips_460_002, Tips_460_003, 0};
u8 *Tips_461[] = {Tips_461_000, Tips_461_001, Tips_461_002, Tips_461_003, 0};
u8 *Tips_462[] = {Tips_462_000, Tips_462_001, 0};
u8 *Tips_463[] = {Tips_463_000, Tips_463_001, 0};
u8 *Tips_464[] = {Tips_464_000, 0};
u8 *Tips_465[] = {Tips_465_000, 0};
u8 *Tips_466[] = {Tips_466_000, Tips_466_001, Tips_466_002, 0};
u8 *Tips_467[] = {Tips_467_000, Tips_467_001, Tips_467_002, 0};
u8 *Tips_468[] = {Tips_468_000, 0};
u8 *Tips_469[] = {Tips_469_000, 0};
u8 *Tips_470[] = {Tips_470_000, Tips_470_001, 0};
u8 *Tips_471[] = {Tips_471_000, Tips_471_001, 0};
u8 *Tips_472[] = {Tips_472_000, 0};
u8 *Tips_473[] = {Tips_473_000, 0};
u8 *Tips_474[] = {Tips_474_000, 0};
u8 *Tips_475[] = {Tips_475_000, 0};
u8 *Tips_476[] = {Tips_476_000, 0};
u8 *Tips_477[] = {Tips_477_000, 0};
u8 *Tips_478[] = {Tips_478_000, 0};
u8 *Tips_479[] = {Tips_479_000, 0};
u8 *Tips_480[] = {Tips_480_000, 0};
u8 *Tips_481[] = {Tips_481_000, 0};
u8 *Tips_482[] = {Tips_482_000, 0};
u8 *Tips_483[] = {Tips_483_000, 0};
u8 *Tips_484[] = {Tips_484_000, Tips_484_001, 0};
u8 *Tips_485[] = {Tips_485_000, Tips_485_001, 0};
u8 *Tips_486[] = {Tips_486_000, Tips_486_001, 0};
u8 *Tips_487[] = {Tips_487_000, Tips_487_001, 0};
u8 *Tips_488[] = {Tips_488_000, 0};
u8 *Tips_489[] = {Tips_489_000, 0};
u8 *Tips_490[] = {Tips_490_000, 0};
u8 *Tips_491[] = {Tips_491_000, 0};
u8 *Tips_492[] = {Tips_492_000, 0};
u8 *Tips_493[] = {Tips_493_000, 0};
u8 *Tips_494[] = {Tips_494_000, Tips_494_001, 0};
u8 *Tips_495[] = {Tips_495_000, Tips_495_001, 0};
u8 *Tips_496[] = {Tips_496_000, Tips_496_001, Tips_496_002, Tips_496_003, 0};
u8 *Tips_497[] = {Tips_497_000, Tips_497_001, Tips_497_002, Tips_497_003, 0};
u8 *Tips_498[] = {Tips_498_000, Tips_498_001, Tips_498_002, Tips_498_003, 0};
u8 *Tips_499[] = {Tips_499_000, Tips_499_001, Tips_499_002, Tips_499_003, 0};
u8 *Tips_500[] = {Tips_500_000, Tips_500_001, Tips_500_002, Tips_500_003, 0};
u8 *Tips_501[] = {Tips_501_000, Tips_501_001, Tips_501_002, Tips_501_003, 0};
u8 *Tips_502[] = {Tips_502_000, Tips_502_001, Tips_502_002, Tips_502_003, 0};
u8 *Tips_503[] = {Tips_503_000, Tips_503_001, Tips_503_002, Tips_503_003, 0};
u8 *Tips_504[] = {Tips_504_000, Tips_504_001, Tips_504_002, Tips_504_003, 0};
u8 *Tips_505[] = {Tips_505_000, Tips_505_001, Tips_505_002, Tips_505_003, 0};
u8 *Tips_506[] = {Tips_506_000, Tips_506_001, Tips_506_002, Tips_506_003, 0};
u8 *Tips_507[] = {Tips_507_000, Tips_507_001, Tips_507_002, Tips_507_003, 0};
u8 *Tips_508[] = {Tips_508_000, Tips_508_001, Tips_508_002, Tips_508_003, 0};
u8 *Tips_509[] = {Tips_509_000, Tips_509_001, Tips_509_002, Tips_509_003, 0};
u8 *Tips_510[] = {Tips_510_000, Tips_510_001, Tips_510_002, Tips_510_003, 0};
u8 *Tips_511[] = {Tips_511_000, Tips_511_001, Tips_511_002, Tips_511_003, 0};
u8 *Tips_512[] = {Tips_512_000, Tips_512_001, Tips_512_002, Tips_512_003, 0};
u8 *Tips_513[] = {Tips_513_000, Tips_513_001, Tips_513_002, Tips_513_003, 0};
u8 *Tips_514[] = {Tips_514_000, Tips_514_001, Tips_514_002, Tips_514_003, 0};
u8 *Tips_515[] = {Tips_515_000, Tips_515_001, Tips_515_002, Tips_515_003, 0};
u8 *Tips_516[] = {Tips_516_000, Tips_516_001, Tips_516_002, Tips_516_003, 0};
u8 *Tips_517[] = {Tips_517_000, Tips_517_001, Tips_517_002, Tips_517_003, 0};
u8 *Tips_518[] = {Tips_518_000, Tips_518_001, Tips_518_002, Tips_518_003, 0};
u8 *Tips_519[] = {Tips_519_000, Tips_519_001, Tips_519_002, Tips_519_003, 0};
u8 *Tips_520[] = {Tips_520_000, Tips_520_001, Tips_520_002, 0};
u8 *Tips_521[] = {Tips_521_000, Tips_521_001, Tips_521_002, 0};
u8 *Tips_522[] = {Tips_522_000, Tips_522_001, Tips_522_002, 0};
u8 *Tips_523[] = {Tips_523_000, Tips_523_001, Tips_523_002, 0};
u8 *Tips_524[] = {Tips_524_000, 0};
u8 *Tips_525[] = {Tips_525_000, 0};
u8 *Tips_526[] = {Tips_526_000, 0};
u8 *Tips_527[] = {Tips_527_000, 0};
u8 *Tips_528[] = {Tips_528_000, 0};
u8 *Tips_529[] = {Tips_529_000, 0};
u8 *Tips_530[] = {Tips_530_000, Tips_530_001, 0};
u8 *Tips_531[] = {Tips_531_000, Tips_531_001, 0};
u8 *Tips_532[] = {Tips_532_000, 0};
u8 *Tips_533[] = {Tips_533_000, Tips_533_001, Tips_533_002, Tips_533_003, 0};
u8 *Tips_534[] = {Tips_534_000, Tips_534_001, Tips_534_002, Tips_534_003, 0};
u8 *Tips_535[] = {Tips_535_000, 0};
u8 *Tips_536[] = {Tips_536_000, Tips_536_001, Tips_536_002, Tips_536_003, 0};
u8 *Tips_537[] = {Tips_537_000, Tips_537_001, Tips_537_002, 0};
u8 *Tips_538[] = {Tips_538_000, Tips_538_001, 0};
u8 *Tips_539[] = {Tips_539_000, 0};
u8 *Tips_540[] = {Tips_540_000, Tips_540_001, 0};
u8 *Tips_541[] = {Tips_541_000, 0};
u8 *Tips_542[] = {Tips_542_000, Tips_542_001, 0};
u8 *Tips_543[] = {Tips_543_000, 0};
u8 *Tips_544[] = {Tips_544_000, Tips_544_001, 0};
u8 *Tips_545[] = {Tips_545_000, 0};
u8 *Tips_546[] = {Tips_546_000, Tips_546_001, Tips_546_002, Tips_546_003, Tips_546_004, Tips_546_005, 0};
u8 *Tips_547[] = {Tips_547_000, Tips_547_001, Tips_547_002, Tips_547_003, Tips_547_004, Tips_547_005, 0};
u8 *Tips_548[] = {Tips_548_000, Tips_548_001, Tips_548_002, 0};
u8 *Tips_549[] = {Tips_549_000, Tips_549_001, Tips_549_002, 0};
u8 *Tips_550[] = {Tips_550_000, Tips_550_001, 0};
u8 *Tips_551[] = {Tips_551_000, Tips_551_001, 0};
u8 *Tips_552[] = {Tips_552_000, Tips_552_001, 0};
u8 *Tips_553[] = {Tips_553_000, Tips_553_001, 0};
u8 *Tips_554[] = {Tips_554_000, Tips_554_001, 0};
u8 *Tips_555[] = {Tips_555_000, Tips_555_001, 0};
u8 *Tips_556[] = {Tips_556_000, Tips_556_001, 0};
u8 *Tips_557[] = {Tips_557_000, Tips_557_001, 0};
u8 *Tips_558[] = {Tips_558_000, 0};
u8 *Tips_559[] = {Tips_559_000, Tips_559_001, Tips_559_002, 0};
u8 *Tips_560[] = {Tips_560_000, Tips_560_001, 0};
u8 *Tips_561[] = {Tips_561_000, Tips_561_001, Tips_561_002, 0};
u8 *Tips_562[] = {Tips_562_000, Tips_562_001, 0};
u8 *Tips_563[] = {Tips_563_000, Tips_563_001, Tips_563_002, Tips_563_003, Tips_563_004, 0};
u8 *Tips_564[] = {Tips_564_000, Tips_564_001, 0};
u8 *Tips_565[] = {Tips_565_000, Tips_565_001, Tips_565_002, 0};
u8 *Tips_566[] = {Tips_566_000, Tips_566_001, 0};
u8 *Tips_567[] = {Tips_567_000, Tips_567_001, 0};
u8 *Tips_568[] = {Tips_568_000, Tips_568_001, 0};
u8 *Tips_569[] = {Tips_569_000, Tips_569_001, 0};
u8 *Tips_570[] = {Tips_570_000, Tips_570_001, 0};
u8 *Tips_571[] = {Tips_571_000, 0};
u8 *Tips_572[] = {Tips_572_000, Tips_572_001, 0};
u8 *Tips_573[] = {Tips_573_000, 0};
u8 *Tips_574[] = {Tips_574_000, 0};
u8 *Tips_575[] = {Tips_575_000, 0};
u8 *Tips_576[] = {Tips_576_000, 0};
u8 *Tips_577[] = {Tips_577_000, 0};
u8 *Tips_578[] = {Tips_578_000, 0};
u8 *Tips_579[] = {Tips_579_000, 0};
u8 *Tips_580[] = {Tips_580_000, 0};
u8 *Tips_581[] = {Tips_581_000, 0};
u8 *Tips_582[] = {Tips_582_000, 0};
u8 *Tips_583[] = {Tips_583_000, 0};
u8 *Tips_584[] = {Tips_584_000, 0};
u8 *Tips_585[] = {Tips_585_000, Tips_585_001, Tips_585_002, Tips_585_003, 0};
u8 *Tips_586[] = {Tips_586_000, Tips_586_001, Tips_586_002, Tips_586_003, 0};
u8 *Tips_587[] = {Tips_587_000, Tips_587_001, Tips_587_002, Tips_587_003, 0};
u8 *Tips_588[] = {Tips_588_000, Tips_588_001, Tips_588_002, Tips_588_003, 0};
u8 *Tips_589[] = {Tips_589_000, Tips_589_001, Tips_589_002, Tips_589_003, 0};
u8 *Tips_590[] = {Tips_590_000, Tips_590_001, Tips_590_002, Tips_590_003, 0};
u8 *Tips_591[] = {Tips_591_000, Tips_591_001, 0};
u8 *Tips_592[] = {Tips_592_000, Tips_592_001, 0};
u8 *Tips_593[] = {Tips_593_000, Tips_593_001, Tips_593_002, Tips_593_003, 0};
u8 *Tips_594[] = {Tips_594_000, Tips_594_001, Tips_594_002, Tips_594_003, 0};
u8 *Tips_595[] = {Tips_595_000, Tips_595_001, Tips_595_002, Tips_595_003, 0};
u8 *Tips_596[] = {Tips_596_000, Tips_596_001, Tips_596_002, Tips_596_003, 0};
u8 *Tips_597[] = {Tips_597_000, 0};
u8 *Tips_598[] = {Tips_598_000, Tips_598_001, Tips_598_002, 0};
u8 *Tips_599[] = {Tips_599_000, Tips_599_001, Tips_599_002, 0};
u8 *Tips_600[] = {Tips_600_000, Tips_600_001, Tips_600_002, 0};
u8 *Tips_601[] = {Tips_601_000, Tips_601_001, 0};
u8 *Tips_602[] = {Tips_602_000, Tips_602_001, 0};
u8 *Tips_603[] = {Tips_603_000, 0};
u8 *Tips_604[] = {Tips_604_000, Tips_604_001, Tips_604_002, 0};
u8 *Tips_605[] = {Tips_605_000, Tips_605_001, Tips_605_002, 0};
u8 *Tips_606[] = {Tips_606_000, Tips_606_001, Tips_606_002, 0};
u8 *Tips_607[] = {Tips_607_000, Tips_607_001, 0};
u8 *Tips_608[] = {Tips_608_000, Tips_608_001, 0};
u8 *Tips_609[] = {Tips_609_000, 0};
u8 *Tips_610[] = {Tips_610_000, Tips_610_001, Tips_610_002, 0};
u8 *Tips_611[] = {Tips_611_000, Tips_611_001, Tips_611_002, 0};
u8 *Tips_612[] = {Tips_612_000, Tips_612_001, Tips_612_002, 0};
u8 *Tips_613[] = {Tips_613_000, Tips_613_001, 0};
u8 *Tips_614[] = {Tips_614_000, Tips_614_001, 0};
u8 *Tips_615[] = {Tips_615_000, 0};
u8 *Tips_616[] = {Tips_616_000, Tips_616_001, Tips_616_002, 0};
u8 *Tips_617[] = {Tips_617_000, Tips_617_001, Tips_617_002, 0};
u8 *Tips_618[] = {Tips_618_000, Tips_618_001, 0};
u8 *Tips_619[] = {Tips_619_000, Tips_619_001, 0};
u8 *Tips_620[] = {Tips_620_000, Tips_620_001, 0};
u8 *Tips_621[] = {Tips_621_000, 0};
u8 *Tips_622[] = {Tips_622_000, Tips_622_001, Tips_622_002, 0};
u8 *Tips_623[] = {Tips_623_000, Tips_623_001, Tips_623_002, 0};
u8 *Tips_624[] = {Tips_624_000, Tips_624_001, Tips_624_002, 0};
u8 *Tips_625[] = {Tips_625_000, Tips_625_001, Tips_625_002, 0};
u8 *Tips_626[] = {Tips_626_000, Tips_626_001, Tips_626_002, 0};
u8 *Tips_627[] = {Tips_627_000, 0};
u8 *Tips_628[] = {Tips_628_000, Tips_628_001, Tips_628_002, 0};
u8 *Tips_629[] = {Tips_629_000, Tips_629_001, Tips_629_002, 0};
u8 *Tips_630[] = {Tips_630_000, Tips_630_001, Tips_630_002, 0};
u8 *Tips_631[] = {Tips_631_000, Tips_631_001, Tips_631_002, 0};
u8 *Tips_632[] = {Tips_632_000, Tips_632_001, Tips_632_002, 0};
u8 *Tips_633[] = {Tips_633_000, 0};
u8 *Tips_634[] = {Tips_634_000, Tips_634_001, Tips_634_002, 0};
u8 *Tips_635[] = {Tips_635_000, Tips_635_001, Tips_635_002, 0};
u8 *Tips_636[] = {Tips_636_000, Tips_636_001, Tips_636_002, 0};
u8 *Tips_637[] = {Tips_637_000, Tips_637_001, Tips_637_002, 0};
u8 *Tips_638[] = {Tips_638_000, Tips_638_001, Tips_638_002, 0};
u8 *Tips_639[] = {Tips_639_000, 0};
u8 *Tips_640[] = {Tips_640_000, Tips_640_001, Tips_640_002, 0};
u8 *Tips_641[] = {Tips_641_000, Tips_641_001, Tips_641_002, 0};
u8 *Tips_642[] = {Tips_642_000, Tips_642_001, Tips_642_002, 0};
u8 *Tips_643[] = {Tips_643_000, Tips_643_001, Tips_643_002, 0};
u8 *Tips_644[] = {Tips_644_000, Tips_644_001, Tips_644_002, 0};
u8 *Tips_645[] = {Tips_645_000, Tips_645_001, Tips_645_002, Tips_645_003, Tips_645_004, Tips_645_005, Tips_645_006, 0};
u8 *Tips_646[] = {Tips_646_000, Tips_646_001, Tips_646_002, Tips_646_003, 0};
u8 *Tips_647[] = {Tips_647_000, Tips_647_001, Tips_647_002, Tips_647_003, 0};
u8 *Tips_648[] = {Tips_648_000, Tips_648_001, Tips_648_002, Tips_648_003, Tips_648_004, 0};
u8 *Tips_649[] = {Tips_649_000, Tips_649_001, 0};
u8 *Tips_650[] = {Tips_650_000, Tips_650_001, 0};
u8 *Tips_651[] = {Tips_651_000, Tips_651_001, Tips_651_002, Tips_651_003, Tips_651_004, Tips_651_005, Tips_651_006, 0};
u8 *Tips_652[] = {Tips_652_000, Tips_652_001, Tips_652_002, 0};
u8 *Tips_653[] = {Tips_653_000, Tips_653_001, Tips_653_002, 0};
u8 *Tips_654[] = {Tips_654_000, Tips_654_001, 0};
u8 *Tips_655[] = {Tips_655_000, Tips_655_001, Tips_655_002, Tips_655_003, 0};
u8 *Tips_656[] = {Tips_656_000, Tips_656_001, 0};
u8 *Tips_657[] = {Tips_657_000, Tips_657_001, Tips_657_002, Tips_657_003, Tips_657_004, Tips_657_005, Tips_657_006, Tips_657_007, Tips_657_008, Tips_657_009, Tips_657_010, Tips_657_011, 0};
u8 *Tips_658[] = {Tips_658_000, Tips_658_001, Tips_658_002, 0};
u8 *Tips_659[] = {Tips_659_000, Tips_659_001, Tips_659_002, 0};
u8 *Tips_660[] = {Tips_660_000, Tips_660_001, Tips_660_002, Tips_660_003, 0};
u8 *Tips_661[] = {Tips_661_000, Tips_661_001, Tips_661_002, Tips_661_003, 0};
u8 *Tips_662[] = {Tips_662_000, Tips_662_001, Tips_662_002, 0};
u8 *Tips_663[] = {Tips_663_000, Tips_663_001, Tips_663_002, Tips_663_003, Tips_663_004, Tips_663_005, Tips_663_006, Tips_663_007, Tips_663_008, 0};
u8 *Tips_664[] = {Tips_664_000, Tips_664_001, Tips_664_002, Tips_664_003, Tips_664_004, Tips_664_005, 0};
u8 *Tips_665[] = {Tips_665_000, Tips_665_001, Tips_665_002, Tips_665_003, Tips_665_004, Tips_665_005, 0};
u8 *Tips_666[] = {Tips_666_000, Tips_666_001, Tips_666_002, Tips_666_003, Tips_666_004, Tips_666_005, Tips_666_006, 0};
u8 *Tips_667[] = {Tips_667_000, Tips_667_001, Tips_667_002, Tips_667_003, 0};
u8 *Tips_668[] = {Tips_668_000, Tips_668_001, Tips_668_002, 0};
u8 *Tips_669[] = {Tips_669_000, Tips_669_001, Tips_669_002, Tips_669_003, Tips_669_004, Tips_669_005, Tips_669_006, Tips_669_007, 0};
u8 *Tips_670[] = {Tips_670_000, Tips_670_001, Tips_670_002, Tips_670_003, 0};
u8 *Tips_671[] = {Tips_671_000, Tips_671_001, Tips_671_002, Tips_671_003, 0};
u8 *Tips_672[] = {Tips_672_000, Tips_672_001, Tips_672_002, Tips_672_003, 0};
u8 *Tips_673[] = {Tips_673_000, Tips_673_001, Tips_673_002, Tips_673_003, 0};
u8 *Tips_674[] = {Tips_674_000, Tips_674_001, Tips_674_002, Tips_674_003, 0};
u8 *Tips_675[] = {Tips_675_000, Tips_675_001, Tips_675_002, Tips_675_003, Tips_675_004, Tips_675_005, Tips_675_006, Tips_675_007, Tips_675_008, Tips_675_009, Tips_675_010, Tips_675_011, Tips_675_012, 0};
u8 *Tips_676[] = {Tips_676_000, Tips_676_001, Tips_676_002, Tips_676_003, 0};
u8 *Tips_677[] = {Tips_677_000, Tips_677_001, 0};
u8 *Tips_678[] = {Tips_678_000, Tips_678_001, 0};
u8 *Tips_679[] = {Tips_679_000, Tips_679_001, Tips_679_002, Tips_679_003, 0};
u8 *Tips_680[] = {Tips_680_000, Tips_680_001, Tips_680_002, Tips_680_003, 0};
u8 *Tips_681[] = {Tips_681_000, Tips_681_001, Tips_681_002, Tips_681_003, Tips_681_004, Tips_681_005, Tips_681_006, Tips_681_007, Tips_681_008, Tips_681_009, Tips_681_010, 0};
u8 *Tips_682[] = {Tips_682_000, Tips_682_001, Tips_682_002, Tips_682_003, Tips_682_004, Tips_682_005, 0};
u8 *Tips_683[] = {Tips_683_000, Tips_683_001, Tips_683_002, 0};
u8 *Tips_684[] = {Tips_684_000, Tips_684_001, 0};
u8 *Tips_685[] = {Tips_685_000, Tips_685_001, 0};
u8 *Tips_686[] = {Tips_686_000, Tips_686_001, 0};
u8 *Tips_687[] = {Tips_687_000, Tips_687_001, Tips_687_002, Tips_687_003, Tips_687_004, Tips_687_005, 0};
u8 *Tips_688[] = {Tips_688_000, Tips_688_001, Tips_688_002, Tips_688_003, 0};
u8 *Tips_689[] = {Tips_689_000, Tips_689_001, Tips_689_002, Tips_689_003, 0};
u8 *Tips_690[] = {Tips_690_000, Tips_690_001, Tips_690_002, Tips_690_003, 0};
u8 *Tips_691[] = {Tips_691_000, Tips_691_001, 0};
u8 *Tips_692[] = {Tips_692_000, Tips_692_001, 0};
u8 *Tips_693[] = {Tips_693_000, Tips_693_001, Tips_693_002, Tips_693_003, Tips_693_004, Tips_693_005, Tips_693_006, Tips_693_007, 0};
u8 *Tips_694[] = {Tips_694_000, Tips_694_001, Tips_694_002, Tips_694_003, 0};
u8 *Tips_695[] = {Tips_695_000, Tips_695_001, 0};
u8 *Tips_696[] = {Tips_696_000, Tips_696_001, Tips_696_002, Tips_696_003, Tips_696_004, Tips_696_005, 0};
u8 *Tips_697[] = {Tips_697_000, Tips_697_001, 0};
u8 *Tips_698[] = {Tips_698_000, Tips_698_001, 0};
u8 *Tips_699[] = {Tips_699_000, 0};
u8 *Tips_700[] = {Tips_700_000, Tips_700_001, 0};
u8 *Tips_701[] = {Tips_701_000, Tips_701_001, Tips_701_002, Tips_701_003, 0};
u8 *Tips_702[] = {Tips_702_000, Tips_702_001, Tips_702_002, Tips_702_003, 0};
u8 *Tips_703[] = {Tips_703_000, Tips_703_001, Tips_703_002, Tips_703_003, 0};
u8 *Tips_704[] = {Tips_704_000, Tips_704_001, Tips_704_002, Tips_704_003, 0};
u8 *Tips_705[] = {Tips_705_000, Tips_705_001, Tips_705_002, Tips_705_003, 0};

// **MessageOfTips #706
// 0x0849BB6C - 0x0849C673
u8 **MessageOfTips[] = 
{
    Tips_000, Tips_001, Tips_002, Tips_003, 
    Tips_004, Tips_005, Tips_006, Tips_007, 
    Tips_008, Tips_009, Tips_010, Tips_011, 
    Tips_012, Tips_013, Tips_014, Tips_015, 
    Tips_016, Tips_017, Tips_018, Tips_019, 
    Tips_020, Tips_021, Tips_022, Tips_023, 
    Tips_024, Tips_025, Tips_026, Tips_027, 
    Tips_028, Tips_029, Tips_030, Tips_031, 
    Tips_032, Tips_033, Tips_034, Tips_035, 
    Tips_036, Tips_037, Tips_038, Tips_039, 
    Tips_040, Tips_041, Tips_042, Tips_043, 
    Tips_044, Tips_045, Tips_046, Tips_047, 
    Tips_048, Tips_049, Tips_050, Tips_051, 
    Tips_052, Tips_053, Tips_054, Tips_055, 
    Tips_056, Tips_057, Tips_058, Tips_059, 
    Tips_060, Tips_061, Tips_062, Tips_063, 
    Tips_064, Tips_065, Tips_066, Tips_067, 
    Tips_068, Tips_069, Tips_070, Tips_071, 
    Tips_072, Tips_073, Tips_074, Tips_075, 
    Tips_076, Tips_077, Tips_078, Tips_079, 
    Tips_080, Tips_081, Tips_082, Tips_083, 
    Tips_084, Tips_085, Tips_086, Tips_087, 
    Tips_088, Tips_089, Tips_090, Tips_091, 
    Tips_092, Tips_093, Tips_094, Tips_095, 
    Tips_096, Tips_097, Tips_098, Tips_099, 
    Tips_100, Tips_101, Tips_102, Tips_103, 
    Tips_104, Tips_105, Tips_106, Tips_107, 
    Tips_108, Tips_109, Tips_110, Tips_111, 
    Tips_112, Tips_113, Tips_114, Tips_115, 
    Tips_116, Tips_117, Tips_118, Tips_119, 
    Tips_120, Tips_121, Tips_122, Tips_123, 
    Tips_124, Tips_125, Tips_126, Tips_127, 
    Tips_128, Tips_129, Tips_130, Tips_131, 
    Tips_132, Tips_133, Tips_134, Tips_135, 
    Tips_136, Tips_137, Tips_138, Tips_139, 
    Tips_140, Tips_141, Tips_142, Tips_143, 
    Tips_144, Tips_145, Tips_146, Tips_147, 
    Tips_148, Tips_149, Tips_150, Tips_151, 
    Tips_152, Tips_153, Tips_154, Tips_155, 
    Tips_156, Tips_157, Tips_158, Tips_159, 
    Tips_160, Tips_161, Tips_162, Tips_163, 
    Tips_164, Tips_165, Tips_166, Tips_167, 
    Tips_168, Tips_169, Tips_170, Tips_171, 
    Tips_172, Tips_173, Tips_174, Tips_175, 
    Tips_176, Tips_177, Tips_178, Tips_179, 
    Tips_180, Tips_181, Tips_182, Tips_183, 
    Tips_184, Tips_185, Tips_186, Tips_187, 
    Tips_188, Tips_189, Tips_190, Tips_191, 
    Tips_192, Tips_193, Tips_194, Tips_195, 
    Tips_196, Tips_197, Tips_198, Tips_199, 
    Tips_200, Tips_201, Tips_202, Tips_203, 
    Tips_204, Tips_205, Tips_206, Tips_207, 
    Tips_208, Tips_209, Tips_210, Tips_211, 
    Tips_212, Tips_213, Tips_214, Tips_215, 
    Tips_216, Tips_217, Tips_218, Tips_219, 
    Tips_220, Tips_221, Tips_222, Tips_223, 
    Tips_224, Tips_225, Tips_226, Tips_227, 
    Tips_228, Tips_229, Tips_230, Tips_231, 
    Tips_232, Tips_233, Tips_234, Tips_235, 
    Tips_236, Tips_237, Tips_238, Tips_239, 
    Tips_240, Tips_241, Tips_242, Tips_243, 
    Tips_244, Tips_245, Tips_246, Tips_247, 
    Tips_248, Tips_249, Tips_250, Tips_251, 
    Tips_252, Tips_253, Tips_254, Tips_255, 
    Tips_256, Tips_257, Tips_258, Tips_259, 
    Tips_260, Tips_261, Tips_262, Tips_263, 
    Tips_264, Tips_265, Tips_266, Tips_267, 
    Tips_268, Tips_269, Tips_270, Tips_271, 
    Tips_272, Tips_273, Tips_274, Tips_275, 
    Tips_276, Tips_277, Tips_278, Tips_279, 
    Tips_280, Tips_281, Tips_282, Tips_283, 
    Tips_284, Tips_285, Tips_286, Tips_287, 
    Tips_288, Tips_289, Tips_290, Tips_291, 
    Tips_292, Tips_293, Tips_294, Tips_295, 
    Tips_296, Tips_297, Tips_298, Tips_299, 
    Tips_300, Tips_301, Tips_302, Tips_303, 
    Tips_304, Tips_305, Tips_306, Tips_307, 
    Tips_308, Tips_309, Tips_310, Tips_311, 
    Tips_312, Tips_313, Tips_314, Tips_315, 
    Tips_316, Tips_317, Tips_318, Tips_319, 
    Tips_320, Tips_321, Tips_322, Tips_323, 
    Tips_324, Tips_325, Tips_326, Tips_327, 
    Tips_328, Tips_329, Tips_330, Tips_331, 
    Tips_332, Tips_333, Tips_334, Tips_335, 
    Tips_336, Tips_337, Tips_338, Tips_339, 
    Tips_340, Tips_341, Tips_342, Tips_343, 
    Tips_344, Tips_345, Tips_346, Tips_347, 
    Tips_348, Tips_349, Tips_350, Tips_351, 
    Tips_352, Tips_353, Tips_354, Tips_355, 
    Tips_356, Tips_357, Tips_358, Tips_359, 
    Tips_360, Tips_361, Tips_362, Tips_363, 
    Tips_364, Tips_365, Tips_366, Tips_367, 
    Tips_368, Tips_369, Tips_370, Tips_371, 
    Tips_372, Tips_373, Tips_374, Tips_375, 
    Tips_376, Tips_377, Tips_378, Tips_379, 
    Tips_380, Tips_381, Tips_382, Tips_383, 
    Tips_384, Tips_385, Tips_386, Tips_387, 
    Tips_388, Tips_389, Tips_390, Tips_391, 
    Tips_392, Tips_393, Tips_394, Tips_395, 
    Tips_396, Tips_397, Tips_398, Tips_399, 
    Tips_400, Tips_401, Tips_402, Tips_403, 
    Tips_404, Tips_405, Tips_406, Tips_407, 
    Tips_408, Tips_409, Tips_410, Tips_411, 
    Tips_412, Tips_413, Tips_414, Tips_415, 
    Tips_416, Tips_417, Tips_418, Tips_419, 
    Tips_420, Tips_421, Tips_422, Tips_423, 
    Tips_424, Tips_425, Tips_426, Tips_427, 
    Tips_428, Tips_429, Tips_430, Tips_431, 
    Tips_432, Tips_433, Tips_434, Tips_435, 
    Tips_436, Tips_437, Tips_438, Tips_439, 
    Tips_440, Tips_441, Tips_442, Tips_443, 
    Tips_444, Tips_445, Tips_446, Tips_447, 
    Tips_448, Tips_449, Tips_450, Tips_451, 
    Tips_452, Tips_453, Tips_454, Tips_455, 
    Tips_456, Tips_457, Tips_458, Tips_459, 
    Tips_460, Tips_461, Tips_462, Tips_463, 
    Tips_464, Tips_465, Tips_466, Tips_467, 
    Tips_468, Tips_469, Tips_470, Tips_471, 
    Tips_472, Tips_473, Tips_474, Tips_475, 
    Tips_476, Tips_477, Tips_478, Tips_479, 
    Tips_480, Tips_481, Tips_482, Tips_483, 
    Tips_484, Tips_485, Tips_486, Tips_487, 
    Tips_488, Tips_489, Tips_490, Tips_491, 
    Tips_492, Tips_493, Tips_494, Tips_495, 
    Tips_496, Tips_497, Tips_498, Tips_499, 
    Tips_500, Tips_501, Tips_502, Tips_503, 
    Tips_504, Tips_505, Tips_506, Tips_507, 
    Tips_508, Tips_509, Tips_510, Tips_511, 
    Tips_512, Tips_513, Tips_514, Tips_515, 
    Tips_516, Tips_517, Tips_518, Tips_519, 
    Tips_520, Tips_521, Tips_522, Tips_523, 
    Tips_524, Tips_525, Tips_526, Tips_527, 
    Tips_528, Tips_529, Tips_530, Tips_531, 
    Tips_532, Tips_533, Tips_534, Tips_535, 
    Tips_536, Tips_537, Tips_538, Tips_539, 
    Tips_540, Tips_541, Tips_542, Tips_543, 
    Tips_544, Tips_545, Tips_546, Tips_547, 
    Tips_548, Tips_549, Tips_550, Tips_551, 
    Tips_552, Tips_553, Tips_554, Tips_555, 
    Tips_556, Tips_557, Tips_558, Tips_559, 
    Tips_560, Tips_561, Tips_562, Tips_563, 
    Tips_564, Tips_565, Tips_566, Tips_567, 
    Tips_568, Tips_569, Tips_570, Tips_571, 
    Tips_572, Tips_573, Tips_574, Tips_575, 
    Tips_576, Tips_577, Tips_578, Tips_579, 
    Tips_580, Tips_581, Tips_582, Tips_583, 
    Tips_584, Tips_585, Tips_586, Tips_587, 
    Tips_588, Tips_589, Tips_590, Tips_591, 
    Tips_592, Tips_593, Tips_594, Tips_595, 
    Tips_596, Tips_597, Tips_598, Tips_599, 
    Tips_600, Tips_601, Tips_602, Tips_603, 
    Tips_604, Tips_605, Tips_606, Tips_607, 
    Tips_608, Tips_609, Tips_610, Tips_611, 
    Tips_612, Tips_613, Tips_614, Tips_615, 
    Tips_616, Tips_617, Tips_618, Tips_619, 
    Tips_620, Tips_621, Tips_622, Tips_623, 
    Tips_624, Tips_625, Tips_626, Tips_627, 
    Tips_628, Tips_629, Tips_630, Tips_631, 
    Tips_632, Tips_633, Tips_634, Tips_635, 
    Tips_636, Tips_637, Tips_638, Tips_639, 
    Tips_640, Tips_641, Tips_642, Tips_643, 
    Tips_644, Tips_645, Tips_646, Tips_647, 
    Tips_648, Tips_649, Tips_650, Tips_651, 
    Tips_652, Tips_653, Tips_654, Tips_655, 
    Tips_656, Tips_657, Tips_658, Tips_659, 
    Tips_660, Tips_661, Tips_662, Tips_663, 
    Tips_664, Tips_665, Tips_666, Tips_667, 
    Tips_668, Tips_669, Tips_670, Tips_671, 
    Tips_672, Tips_673, Tips_674, Tips_675, 
    Tips_676, Tips_677, Tips_678, Tips_679, 
    Tips_680, Tips_681, Tips_682, Tips_683, 
    Tips_684, Tips_685, Tips_686, Tips_687, 
    Tips_688, Tips_689, Tips_690, Tips_691, 
    Tips_692, Tips_693, Tips_694, Tips_695, 
    Tips_696, Tips_697, Tips_698, Tips_699, 
    Tips_700, Tips_701, Tips_702, Tips_703, 
    Tips_704, Tips_705
};

// *GetItemNote #119
// 0x0849C674 - 0x0849CC07
u8 *GetItemNote_000[] = {GetItemNote_000_000, GetItemNote_000_001, 0};
u8 *GetItemNote_001[] = {GetItemNote_001_000, GetItemNote_001_001, 0};
u8 *GetItemNote_002[] = {GetItemNote_002_000, GetItemNote_002_001, 0};
u8 *GetItemNote_003[] = {GetItemNote_003_000, GetItemNote_003_001, 0};
u8 *GetItemNote_004[] = {GetItemNote_004_000, GetItemNote_004_001, 0};
u8 *GetItemNote_005[] = {GetItemNote_005_000, GetItemNote_005_001, 0};
u8 *GetItemNote_006[] = {GetItemNote_006_000, GetItemNote_006_001, 0};
u8 *GetItemNote_007[] = {GetItemNote_007_000, GetItemNote_007_001, 0};
u8 *GetItemNote_008[] = {GetItemNote_008_000, GetItemNote_008_001, 0};
u8 *GetItemNote_009[] = {GetItemNote_009_000, GetItemNote_009_001, 0};
u8 *GetItemNote_010[] = {GetItemNote_010_000, GetItemNote_010_001, 0};
u8 *GetItemNote_011[] = {GetItemNote_011_000, GetItemNote_011_001, 0};
u8 *GetItemNote_012[] = {GetItemNote_012_000, GetItemNote_012_001, 0};
u8 *GetItemNote_013[] = {GetItemNote_013_000, GetItemNote_013_001, 0};
u8 *GetItemNote_014[] = {GetItemNote_014_000, GetItemNote_014_001, 0};
u8 *GetItemNote_015[] = {GetItemNote_015_000, GetItemNote_015_001, 0};
u8 *GetItemNote_016[] = {GetItemNote_016_000, GetItemNote_016_001, 0};
u8 *GetItemNote_017[] = {GetItemNote_017_000, GetItemNote_017_001, 0};
u8 *GetItemNote_018[] = {GetItemNote_018_000, GetItemNote_018_001, 0};
u8 *GetItemNote_019[] = {GetItemNote_019_000, GetItemNote_019_001, 0};
u8 *GetItemNote_020[] = {GetItemNote_020_000, GetItemNote_020_001, 0};
u8 *GetItemNote_021[] = {GetItemNote_021_000, GetItemNote_021_001, 0};
u8 *GetItemNote_022[] = {GetItemNote_022_000, GetItemNote_022_001, 0};
u8 *GetItemNote_023[] = {GetItemNote_023_000, GetItemNote_023_001, 0};
u8 *GetItemNote_024[] = {GetItemNote_024_000, GetItemNote_024_001, 0};
u8 *GetItemNote_025[] = {GetItemNote_025_000, GetItemNote_025_001, 0};
u8 *GetItemNote_026[] = {GetItemNote_026_000, GetItemNote_026_001, 0};
u8 *GetItemNote_027[] = {GetItemNote_027_000, GetItemNote_027_001, 0};
u8 *GetItemNote_028[] = {GetItemNote_028_000, GetItemNote_028_001, 0};
u8 *GetItemNote_029[] = {GetItemNote_029_000, GetItemNote_029_001, 0};
u8 *GetItemNote_030[] = {GetItemNote_030_000, GetItemNote_030_001, 0};
u8 *GetItemNote_031[] = {GetItemNote_031_000, GetItemNote_031_001, 0};
u8 *GetItemNote_032[] = {GetItemNote_032_000, GetItemNote_032_001, 0};
u8 *GetItemNote_033[] = {GetItemNote_033_000, GetItemNote_033_001, 0};
u8 *GetItemNote_034[] = {GetItemNote_034_000, GetItemNote_034_001, 0};
u8 *GetItemNote_035[] = {GetItemNote_035_000, GetItemNote_035_001, 0};
u8 *GetItemNote_036[] = {GetItemNote_036_000, GetItemNote_036_001, 0};
u8 *GetItemNote_037[] = {GetItemNote_037_000, GetItemNote_037_001, 0};
u8 *GetItemNote_038[] = {GetItemNote_038_000, GetItemNote_038_001, 0};
u8 *GetItemNote_039[] = {GetItemNote_039_000, GetItemNote_039_001, 0};
u8 *GetItemNote_040[] = {GetItemNote_040_000, GetItemNote_040_001, 0};
u8 *GetItemNote_041[] = {GetItemNote_041_000, GetItemNote_041_001, 0};
u8 *GetItemNote_042[] = {GetItemNote_042_000, GetItemNote_042_001, 0};
u8 *GetItemNote_043[] = {GetItemNote_043_000, GetItemNote_043_001, 0};
u8 *GetItemNote_044[] = {GetItemNote_044_000, GetItemNote_044_001, 0};
u8 *GetItemNote_045[] = {GetItemNote_045_000, GetItemNote_045_001, 0};
u8 *GetItemNote_046[] = {GetItemNote_046_000, GetItemNote_046_001, 0};
u8 *GetItemNote_047[] = {GetItemNote_047_000, GetItemNote_047_001, 0};
u8 *GetItemNote_048[] = {GetItemNote_048_000, GetItemNote_048_001, 0};
u8 *GetItemNote_049[] = {GetItemNote_049_000, GetItemNote_049_001, 0};
u8 *GetItemNote_050[] = {GetItemNote_050_000, GetItemNote_050_001, 0};
u8 *GetItemNote_051[] = {GetItemNote_051_000, GetItemNote_051_001, 0};
u8 *GetItemNote_052[] = {GetItemNote_052_000, GetItemNote_052_001, 0};
u8 *GetItemNote_053[] = {GetItemNote_053_000, GetItemNote_053_001, 0};
u8 *GetItemNote_054[] = {GetItemNote_054_000, GetItemNote_054_001, 0};
u8 *GetItemNote_055[] = {GetItemNote_055_000, GetItemNote_055_001, 0};
u8 *GetItemNote_056[] = {GetItemNote_056_000, GetItemNote_056_001, 0};
u8 *GetItemNote_057[] = {GetItemNote_057_000, GetItemNote_057_001, 0};
u8 *GetItemNote_058[] = {GetItemNote_058_000, GetItemNote_058_001, 0};
u8 *GetItemNote_059[] = {GetItemNote_059_000, GetItemNote_059_001, 0};
u8 *GetItemNote_060[] = {GetItemNote_060_000, GetItemNote_060_001, 0};
u8 *GetItemNote_061[] = {GetItemNote_061_000, GetItemNote_061_001, 0};
u8 *GetItemNote_062[] = {GetItemNote_062_000, GetItemNote_062_001, 0};
u8 *GetItemNote_063[] = {GetItemNote_063_000, GetItemNote_063_001, 0};
u8 *GetItemNote_064[] = {GetItemNote_064_000, GetItemNote_064_001, 0};
u8 *GetItemNote_065[] = {GetItemNote_065_000, GetItemNote_065_001, 0};
u8 *GetItemNote_066[] = {GetItemNote_066_000, GetItemNote_066_001, 0};
u8 *GetItemNote_067[] = {GetItemNote_067_000, GetItemNote_067_001, 0};
u8 *GetItemNote_068[] = {GetItemNote_068_000, GetItemNote_068_001, 0};
u8 *GetItemNote_069[] = {GetItemNote_069_000, GetItemNote_069_001, 0};
u8 *GetItemNote_070[] = {GetItemNote_070_000, GetItemNote_070_001, 0};
u8 *GetItemNote_071[] = {GetItemNote_071_000, GetItemNote_071_001, 0};
u8 *GetItemNote_072[] = {GetItemNote_072_000, GetItemNote_072_001, 0};
u8 *GetItemNote_073[] = {GetItemNote_073_000, GetItemNote_073_001, 0};
u8 *GetItemNote_074[] = {GetItemNote_074_000, GetItemNote_074_001, 0};
u8 *GetItemNote_075[] = {GetItemNote_075_000, GetItemNote_075_001, 0};
u8 *GetItemNote_076[] = {GetItemNote_076_000, GetItemNote_076_001, 0};
u8 *GetItemNote_077[] = {GetItemNote_077_000, GetItemNote_077_001, 0};
u8 *GetItemNote_078[] = {GetItemNote_078_000, GetItemNote_078_001, 0};
u8 *GetItemNote_079[] = {GetItemNote_079_000, GetItemNote_079_001, 0};
u8 *GetItemNote_080[] = {GetItemNote_080_000, GetItemNote_080_001, 0};
u8 *GetItemNote_081[] = {GetItemNote_081_000, GetItemNote_081_001, 0};
u8 *GetItemNote_082[] = {GetItemNote_082_000, GetItemNote_082_001, 0};
u8 *GetItemNote_083[] = {GetItemNote_083_000, GetItemNote_083_001, 0};
u8 *GetItemNote_084[] = {GetItemNote_084_000, GetItemNote_084_001, 0};
u8 *GetItemNote_085[] = {GetItemNote_085_000, GetItemNote_085_001, 0};
u8 *GetItemNote_086[] = {GetItemNote_086_000, GetItemNote_086_001, 0};
u8 *GetItemNote_087[] = {GetItemNote_087_000, GetItemNote_087_001, 0};
u8 *GetItemNote_088[] = {GetItemNote_088_000, GetItemNote_088_001, 0};
u8 *GetItemNote_089[] = {GetItemNote_089_000, GetItemNote_089_001, 0};
u8 *GetItemNote_090[] = {GetItemNote_090_000, GetItemNote_090_001, 0};
u8 *GetItemNote_091[] = {GetItemNote_091_000, GetItemNote_091_001, 0};
u8 *GetItemNote_092[] = {GetItemNote_092_000, GetItemNote_092_001, 0};
u8 *GetItemNote_093[] = {GetItemNote_093_000, GetItemNote_093_001, 0};
u8 *GetItemNote_094[] = {GetItemNote_094_000, GetItemNote_094_001, 0};
u8 *GetItemNote_095[] = {GetItemNote_095_000, GetItemNote_095_001, 0};
u8 *GetItemNote_096[] = {GetItemNote_096_000, GetItemNote_096_001, 0};
u8 *GetItemNote_097[] = {GetItemNote_097_000, GetItemNote_097_001, 0};
u8 *GetItemNote_098[] = {GetItemNote_098_000, GetItemNote_098_001, 0};
u8 *GetItemNote_099[] = {GetItemNote_099_000, GetItemNote_099_001, 0};
u8 *GetItemNote_100[] = {GetItemNote_100_000, GetItemNote_100_001, 0};
u8 *GetItemNote_101[] = {GetItemNote_101_000, GetItemNote_101_001, 0};
u8 *GetItemNote_102[] = {GetItemNote_102_000, GetItemNote_102_001, 0};
u8 *GetItemNote_103[] = {GetItemNote_103_000, GetItemNote_103_001, 0};
u8 *GetItemNote_104[] = {GetItemNote_104_000, GetItemNote_104_001, 0};
u8 *GetItemNote_105[] = {GetItemNote_105_000, GetItemNote_105_001, 0};
u8 *GetItemNote_106[] = {GetItemNote_106_000, GetItemNote_106_001, 0};
u8 *GetItemNote_107[] = {GetItemNote_107_000, GetItemNote_107_001, 0};
u8 *GetItemNote_108[] = {GetItemNote_108_000, GetItemNote_108_001, 0};
u8 *GetItemNote_109[] = {GetItemNote_109_000, GetItemNote_109_001, 0};
u8 *GetItemNote_110[] = {GetItemNote_110_000, GetItemNote_110_001, 0};
u8 *GetItemNote_111[] = {GetItemNote_111_000, GetItemNote_111_001, 0};
u8 *GetItemNote_112[] = {GetItemNote_112_000, GetItemNote_112_001, 0};
u8 *GetItemNote_113[] = {GetItemNote_113_000, GetItemNote_113_001, 0};
u8 *GetItemNote_114[] = {GetItemNote_114_000, GetItemNote_114_001, 0};
u8 *GetItemNote_115[] = {GetItemNote_115_000, GetItemNote_115_001, 0};
u8 *GetItemNote_116[] = {GetItemNote_116_000, GetItemNote_116_001, 0};
u8 *GetItemNote_117[] = {GetItemNote_117_000, GetItemNote_117_001, 0};
u8 *GetItemNote_118[] = {GetItemNote_118_000, GetItemNote_118_001, 0};

// **MessageOfGetItemNote #119
// 0x0849CC08 - 0x0849CDE3
u8 **MessageOfGetItemNote[] =
{
    GetItemNote_000, GetItemNote_001, GetItemNote_002, GetItemNote_003, 
    GetItemNote_004, GetItemNote_005, GetItemNote_006, GetItemNote_007, 
    GetItemNote_008, GetItemNote_009, GetItemNote_010, GetItemNote_011, 
    GetItemNote_012, GetItemNote_013, GetItemNote_014, GetItemNote_015, 
    GetItemNote_016, GetItemNote_017, GetItemNote_018, GetItemNote_019, 
    GetItemNote_020, GetItemNote_021, GetItemNote_022, GetItemNote_023, 
    GetItemNote_024, GetItemNote_025, GetItemNote_026, GetItemNote_027, 
    GetItemNote_028, GetItemNote_029, GetItemNote_030, GetItemNote_031, 
    GetItemNote_032, GetItemNote_033, GetItemNote_034, GetItemNote_035, 
    GetItemNote_036, GetItemNote_037, GetItemNote_038, GetItemNote_039, 
    GetItemNote_040, GetItemNote_041, GetItemNote_042, GetItemNote_043, 
    GetItemNote_044, GetItemNote_045, GetItemNote_046, GetItemNote_047, 
    GetItemNote_048, GetItemNote_049, GetItemNote_050, GetItemNote_051, 
    GetItemNote_052, GetItemNote_053, GetItemNote_054, GetItemNote_055, 
    GetItemNote_056, GetItemNote_057, GetItemNote_058, GetItemNote_059, 
    GetItemNote_060, GetItemNote_061, GetItemNote_062, GetItemNote_063, 
    GetItemNote_064, GetItemNote_065, GetItemNote_066, GetItemNote_067, 
    GetItemNote_068, GetItemNote_069, GetItemNote_070, GetItemNote_071, 
    GetItemNote_072, GetItemNote_073, GetItemNote_074, GetItemNote_075, 
    GetItemNote_076, GetItemNote_077, GetItemNote_078, GetItemNote_079, 
    GetItemNote_080, GetItemNote_081, GetItemNote_082, GetItemNote_083, 
    GetItemNote_084, GetItemNote_085, GetItemNote_086, GetItemNote_087, 
    GetItemNote_088, GetItemNote_089, GetItemNote_090, GetItemNote_091, 
    GetItemNote_092, GetItemNote_093, GetItemNote_094, GetItemNote_095, 
    GetItemNote_096, GetItemNote_097, GetItemNote_098, GetItemNote_099, 
    GetItemNote_100, GetItemNote_101, GetItemNote_102, GetItemNote_103, 
    GetItemNote_104, GetItemNote_105, GetItemNote_106, GetItemNote_107, 
    GetItemNote_108, GetItemNote_109, GetItemNote_110, GetItemNote_111, 
    GetItemNote_112, GetItemNote_113, GetItemNote_114, GetItemNote_115, 
    GetItemNote_116, GetItemNote_117, GetItemNote_118
};

// *MoviePlot #630
// 0x0849CDE4 - 0x0849F96F
u8 *MoviePlot_000[] = {Tips_000_000, MoviePlot_000_001, MoviePlot_000_002, 0};
u8 *MoviePlot_001[] = {Tips_001_000, MoviePlot_001_001, MoviePlot_001_002, 0};
u8 *MoviePlot_002[] = {Tips_002_000, 0};
u8 *MoviePlot_003[] = {Tips_003_000, 0};
u8 *MoviePlot_004[] = {Tips_004_000, 0};
u8 *MoviePlot_005[] = {Tips_005_000, 0};
u8 *MoviePlot_006[] = {Tips_006_000, MoviePlot_006_001, MoviePlot_006_002, MoviePlot_006_003, MoviePlot_006_004, MoviePlot_006_005, MoviePlot_006_006, MoviePlot_006_007, 0};
u8 *MoviePlot_007[] = {Tips_007_000, MoviePlot_007_001, MoviePlot_007_002, MoviePlot_007_003, 0};
u8 *MoviePlot_008[] = {Tips_008_000, MoviePlot_008_001, 0};
u8 *MoviePlot_009[] = {Tips_009_000, MoviePlot_009_001, MoviePlot_009_002, MoviePlot_009_003, 0};
u8 *MoviePlot_010[] = {Tips_010_000, MoviePlot_010_001, MoviePlot_010_002, MoviePlot_010_003, 0};
u8 *MoviePlot_011[] = {Tips_011_000, MoviePlot_011_001, 0};
u8 *MoviePlot_012[] = {Tips_012_000, MoviePlot_012_001, MoviePlot_012_002, MoviePlot_012_003, MoviePlot_012_004, MoviePlot_012_005, MoviePlot_012_006, MoviePlot_012_007, MoviePlot_012_008, 0};
u8 *MoviePlot_013[] = {Tips_013_000, MoviePlot_013_001, 0};
u8 *MoviePlot_014[] = {Tips_014_000, MoviePlot_014_001, MoviePlot_014_002, 0};
u8 *MoviePlot_015[] = {Tips_015_000, MoviePlot_015_001, 0};
u8 *MoviePlot_016[] = {Tips_016_000, MoviePlot_016_001, MoviePlot_016_002, MoviePlot_016_003, MoviePlot_016_004, MoviePlot_016_005, MoviePlot_016_006, MoviePlot_016_007, 0};
u8 *MoviePlot_017[] = {Tips_017_000, MoviePlot_017_001, MoviePlot_017_002, MoviePlot_017_003, 0};
u8 *MoviePlot_018[] = {Tips_018_000, MoviePlot_018_001, MoviePlot_018_002, 0};
u8 *MoviePlot_019[] = {Tips_019_000, MoviePlot_019_001, MoviePlot_019_002, MoviePlot_019_003, MoviePlot_019_004, MoviePlot_019_005, MoviePlot_019_006, MoviePlot_019_007, MoviePlot_019_008, MoviePlot_019_009, MoviePlot_019_010, MoviePlot_019_011, MoviePlot_019_012, MoviePlot_019_013, MoviePlot_019_014, MoviePlot_019_015, MoviePlot_019_016, MoviePlot_019_017, MoviePlot_019_018, 0};
u8 *MoviePlot_020[] = {Tips_020_000, 0};
u8 *MoviePlot_021[] = {Tips_021_000, MoviePlot_021_001, 0};
u8 *MoviePlot_022[] = {Tips_022_000, MoviePlot_022_001, MoviePlot_022_002, MoviePlot_022_003, MoviePlot_022_004, MoviePlot_022_005, 0};
u8 *MoviePlot_023[] = {Tips_023_000, 0};
u8 *MoviePlot_024[] = {Tips_024_000, MoviePlot_024_001, MoviePlot_024_002, MoviePlot_024_003, MoviePlot_024_004, MoviePlot_024_005, 0};
u8 *MoviePlot_025[] = {Tips_025_000, MoviePlot_025_001, MoviePlot_025_002, MoviePlot_025_003, 0};
u8 *MoviePlot_026[] = {Tips_026_000, MoviePlot_026_001, MoviePlot_026_002, MoviePlot_026_003, MoviePlot_026_004, MoviePlot_026_005, MoviePlot_026_006, 0};
u8 *MoviePlot_027[] = {Tips_027_000, MoviePlot_027_001, MoviePlot_027_002, 0};
u8 *MoviePlot_028[] = {Tips_028_000, MoviePlot_028_001, MoviePlot_028_002, 0};
u8 *MoviePlot_029[] = {Tips_029_000, 0};
u8 *MoviePlot_030[] = {Tips_030_000, MoviePlot_030_001, 0};
u8 *MoviePlot_031[] = {Tips_031_000, MoviePlot_031_001, 0};
u8 *MoviePlot_032[] = {Tips_032_000, 0};
u8 *MoviePlot_033[] = {Tips_033_000, 0};
u8 *MoviePlot_034[] = {Tips_034_000, MoviePlot_034_001, MoviePlot_034_002, MoviePlot_034_003, MoviePlot_034_004, MoviePlot_034_005, 0};
u8 *MoviePlot_035[] = {Tips_035_000, MoviePlot_035_001, MoviePlot_035_002, MoviePlot_035_003, MoviePlot_035_004, MoviePlot_035_005, 0};
u8 *MoviePlot_036[] = {Tips_036_000, MoviePlot_036_001, MoviePlot_036_002, MoviePlot_036_003, 0};
u8 *MoviePlot_037[] = {Tips_037_000, MoviePlot_037_001, MoviePlot_037_002, MoviePlot_037_003, MoviePlot_037_004, MoviePlot_037_005, 0};
u8 *MoviePlot_038[] = {Tips_038_000, MoviePlot_038_001, 0};
u8 *MoviePlot_039[] = {Tips_039_000, 0};
u8 *MoviePlot_040[] = {Tips_040_000, MoviePlot_040_001, 0};
u8 *MoviePlot_041[] = {Tips_041_000, MoviePlot_041_001, 0};
u8 *MoviePlot_042[] = {Tips_042_000, MoviePlot_042_001, 0};
u8 *MoviePlot_043[] = {Tips_043_000, MoviePlot_043_001, MoviePlot_043_002, MoviePlot_043_003, MoviePlot_043_004, MoviePlot_043_005, 0};
u8 *MoviePlot_044[] = {Tips_044_000, MoviePlot_044_001, MoviePlot_044_002, MoviePlot_044_003, 0};
u8 *MoviePlot_045[] = {Tips_045_000, MoviePlot_045_001, MoviePlot_045_002, MoviePlot_045_003, MoviePlot_045_004, MoviePlot_045_005, 0};
u8 *MoviePlot_046[] = {Tips_046_000, MoviePlot_046_001, 0};
u8 *MoviePlot_047[] = {Tips_047_000, MoviePlot_047_001, 0};
u8 *MoviePlot_048[] = {Tips_048_000, MoviePlot_048_001, MoviePlot_048_002, MoviePlot_048_003, MoviePlot_048_004, 0};
u8 *MoviePlot_049[] = {Tips_049_000, MoviePlot_049_001, 0};
u8 *MoviePlot_050[] = {Tips_050_000, 0};
u8 *MoviePlot_051[] = {Tips_051_000, MoviePlot_051_001, 0};
u8 *MoviePlot_052[] = {Tips_052_000, MoviePlot_052_001, MoviePlot_052_002, MoviePlot_052_003, 0};
u8 *MoviePlot_053[] = {Tips_053_000, MoviePlot_053_001, 0};
u8 *MoviePlot_054[] = {Tips_054_000, MoviePlot_054_001, MoviePlot_054_002, 0};
u8 *MoviePlot_055[] = {Tips_055_000, MoviePlot_055_001, 0};
u8 *MoviePlot_056[] = {Tips_056_000, MoviePlot_056_001, 0};
u8 *MoviePlot_057[] = {Tips_057_000, MoviePlot_057_001, 0};
u8 *MoviePlot_058[] = {Tips_058_000, 0};
u8 *MoviePlot_059[] = {Tips_059_000, MoviePlot_059_001, 0};
u8 *MoviePlot_060[] = {Tips_060_000, MoviePlot_060_001, 0};
u8 *MoviePlot_061[] = {Tips_061_000, MoviePlot_061_001, MoviePlot_061_002, MoviePlot_061_003, MoviePlot_061_004, MoviePlot_061_005, 0};
u8 *MoviePlot_062[] = {Tips_062_000, MoviePlot_062_001, MoviePlot_062_002, MoviePlot_062_003, MoviePlot_062_004, MoviePlot_062_005, 0};
u8 *MoviePlot_063[] = {Tips_063_000, MoviePlot_063_001, MoviePlot_063_002, MoviePlot_063_003, 0};
u8 *MoviePlot_064[] = {Tips_064_000, MoviePlot_064_001, 0};
u8 *MoviePlot_065[] = {Tips_065_000, MoviePlot_065_001, MoviePlot_065_002, MoviePlot_065_003, 0};
u8 *MoviePlot_066[] = {Tips_066_000, MoviePlot_066_001, MoviePlot_066_002, MoviePlot_066_003, 0};
u8 *MoviePlot_067[] = {Tips_067_000, MoviePlot_067_001, 0};
u8 *MoviePlot_068[] = {Tips_068_000, MoviePlot_068_001, 0};
u8 *MoviePlot_069[] = {Tips_069_000, MoviePlot_069_001, 0};
u8 *MoviePlot_070[] = {Tips_070_000, MoviePlot_070_001, MoviePlot_070_002, MoviePlot_070_003, 0};
u8 *MoviePlot_071[] = {Tips_071_000, MoviePlot_071_001, MoviePlot_071_002, MoviePlot_071_003, 0};
u8 *MoviePlot_072[] = {Tips_072_000, MoviePlot_072_001, MoviePlot_072_002, MoviePlot_072_003, 0};
u8 *MoviePlot_073[] = {Tips_073_000, MoviePlot_073_001, MoviePlot_073_002, MoviePlot_073_003, MoviePlot_073_004, MoviePlot_073_005, 0};
u8 *MoviePlot_074[] = {Tips_074_000, 0};
u8 *MoviePlot_075[] = {Tips_075_000, MoviePlot_075_001, MoviePlot_075_002, 0};
u8 *MoviePlot_076[] = {Tips_076_000, 0};
u8 *MoviePlot_077[] = {Tips_077_000, 0};
u8 *MoviePlot_078[] = {Tips_078_000, MoviePlot_078_001, MoviePlot_078_002, 0};
u8 *MoviePlot_079[] = {Tips_079_000, MoviePlot_079_001, MoviePlot_079_002, MoviePlot_079_003, 0};
u8 *MoviePlot_080[] = {Tips_080_000, MoviePlot_080_001, 0};
u8 *MoviePlot_081[] = {Tips_081_000, MoviePlot_081_001, MoviePlot_081_002, MoviePlot_081_003, 0};
u8 *MoviePlot_082[] = {Tips_082_000, 0};
u8 *MoviePlot_083[] = {Tips_083_000, MoviePlot_083_001, MoviePlot_083_002, MoviePlot_083_003, 0};
u8 *MoviePlot_084[] = {Tips_084_000, MoviePlot_084_001, MoviePlot_084_002, MoviePlot_084_003, MoviePlot_084_004, MoviePlot_084_005, 0};
u8 *MoviePlot_085[] = {Tips_085_000, MoviePlot_085_001, MoviePlot_085_002, MoviePlot_085_003, 0};
u8 *MoviePlot_086[] = {Tips_086_000, 0};
u8 *MoviePlot_087[] = {Tips_087_000, 0};
u8 *MoviePlot_088[] = {Tips_088_000, MoviePlot_088_001, 0};
u8 *MoviePlot_089[] = {Tips_089_000, MoviePlot_089_001, 0};
u8 *MoviePlot_090[] = {Tips_090_000, 0};
u8 *MoviePlot_091[] = {Tips_091_000, MoviePlot_091_001, MoviePlot_091_002, MoviePlot_091_003, 0};
u8 *MoviePlot_092[] = {Tips_092_000, 0};
u8 *MoviePlot_093[] = {Tips_093_000, MoviePlot_093_001, 0};
u8 *MoviePlot_094[] = {Tips_094_000, MoviePlot_094_001, 0};
u8 *MoviePlot_095[] = {Tips_095_000, 0};
u8 *MoviePlot_096[] = {Tips_096_000, MoviePlot_096_001, 0};
u8 *MoviePlot_097[] = {Tips_097_000, MoviePlot_097_001, 0};
u8 *MoviePlot_098[] = {Tips_098_000, 0};
u8 *MoviePlot_099[] = {Tips_099_000, MoviePlot_099_001, MoviePlot_099_002, MoviePlot_099_003, MoviePlot_099_004, MoviePlot_099_005, 0};
u8 *MoviePlot_100[] = {Tips_100_000, MoviePlot_100_001, 0};
u8 *MoviePlot_101[] = {Tips_101_000, 0};
u8 *MoviePlot_102[] = {Tips_102_000, 0};
u8 *MoviePlot_103[] = {Tips_103_000, 0};
u8 *MoviePlot_104[] = {Tips_104_000, MoviePlot_104_001, 0};
u8 *MoviePlot_105[] = {Tips_105_000, 0};
u8 *MoviePlot_106[] = {Tips_106_000, MoviePlot_106_001, 0};
u8 *MoviePlot_107[] = {Tips_107_000, 0};
u8 *MoviePlot_108[] = {Tips_108_000, MoviePlot_108_001, MoviePlot_108_002, MoviePlot_108_003, 0};
u8 *MoviePlot_109[] = {Tips_109_000, MoviePlot_109_001, 0};
u8 *MoviePlot_110[] = {Tips_110_000, 0};
u8 *MoviePlot_111[] = {Tips_111_000, MoviePlot_111_001, 0};
u8 *MoviePlot_112[] = {Tips_112_000, 0};
u8 *MoviePlot_113[] = {Tips_113_000, MoviePlot_113_001, MoviePlot_113_002, MoviePlot_113_003, MoviePlot_113_004, MoviePlot_113_005, MoviePlot_113_006, MoviePlot_113_007, MoviePlot_113_008, MoviePlot_113_009, MoviePlot_113_010, MoviePlot_113_011, 0};
u8 *MoviePlot_114[] = {Tips_114_000, MoviePlot_114_001, MoviePlot_114_002, MoviePlot_114_003, MoviePlot_114_004, MoviePlot_114_005, 0};
u8 *MoviePlot_115[] = {Tips_115_000, MoviePlot_115_001, MoviePlot_115_002, MoviePlot_115_003, MoviePlot_115_004, 0};
u8 *MoviePlot_116[] = {Tips_116_000, MoviePlot_116_001, MoviePlot_116_002, MoviePlot_116_003, MoviePlot_116_004, MoviePlot_116_005, MoviePlot_116_006, MoviePlot_116_007, MoviePlot_116_008, MoviePlot_116_009, MoviePlot_116_010, MoviePlot_116_011, 0};
u8 *MoviePlot_117[] = {Tips_117_000, 0};
u8 *MoviePlot_118[] = {Tips_118_000, 0};
u8 *MoviePlot_119[] = {Tips_119_000, MoviePlot_119_001, MoviePlot_119_002, 0};
u8 *MoviePlot_120[] = {Tips_120_000, MoviePlot_120_001, 0};
u8 *MoviePlot_121[] = {Tips_121_000, MoviePlot_121_001, MoviePlot_121_002, MoviePlot_121_003, 0};
u8 *MoviePlot_122[] = {Tips_122_000, MoviePlot_122_001, MoviePlot_122_002, MoviePlot_122_003, 0};
u8 *MoviePlot_123[] = {Tips_123_000, 0};
u8 *MoviePlot_124[] = {Tips_124_000, MoviePlot_124_001, 0};
u8 *MoviePlot_125[] = {Tips_125_000, 0};
u8 *MoviePlot_126[] = {Tips_126_000, MoviePlot_126_001, 0};
u8 *MoviePlot_127[] = {Tips_127_000, 0};
u8 *MoviePlot_128[] = {Tips_128_000, MoviePlot_128_001, 0};
u8 *MoviePlot_129[] = {Tips_129_000, 0};
u8 *MoviePlot_130[] = {Tips_130_000, MoviePlot_130_001, MoviePlot_130_002, MoviePlot_130_003, MoviePlot_130_004, MoviePlot_130_005, MoviePlot_130_006, MoviePlot_130_007, MoviePlot_130_008, MoviePlot_130_009, MoviePlot_130_010, MoviePlot_130_011, MoviePlot_130_012, MoviePlot_130_013, MoviePlot_130_014, 0};
u8 *MoviePlot_131[] = {Tips_131_000, 0};
u8 *MoviePlot_132[] = {Tips_132_000, MoviePlot_132_001, 0};
u8 *MoviePlot_133[] = {Tips_133_000, 0};
u8 *MoviePlot_134[] = {Tips_134_000, MoviePlot_134_001, MoviePlot_134_002, MoviePlot_134_003, 0};
u8 *MoviePlot_135[] = {Tips_135_000, MoviePlot_135_001, 0};
u8 *MoviePlot_136[] = {Tips_136_000, MoviePlot_136_001, MoviePlot_136_002, MoviePlot_136_003, MoviePlot_136_004, MoviePlot_136_005, 0};
u8 *MoviePlot_137[] = {Tips_137_000, 0};
u8 *MoviePlot_138[] = {Tips_138_000, 0};
u8 *MoviePlot_139[] = {Tips_139_000, 0};
u8 *MoviePlot_140[] = {Tips_140_000, 0};
u8 *MoviePlot_141[] = {Tips_141_000, MoviePlot_141_001, MoviePlot_141_002, 0};
u8 *MoviePlot_142[] = {Tips_142_000, 0};
u8 *MoviePlot_143[] = {Tips_143_000, MoviePlot_143_001, 0};
u8 *MoviePlot_144[] = {Tips_144_000, MoviePlot_144_001, MoviePlot_144_002, MoviePlot_144_003, 0};
u8 *MoviePlot_145[] = {Tips_145_000, MoviePlot_145_001, MoviePlot_145_002, MoviePlot_145_003, MoviePlot_145_004, 0};
u8 *MoviePlot_146[] = {Tips_146_000, MoviePlot_146_001, MoviePlot_146_002, 0};
u8 *MoviePlot_147[] = {Tips_147_000, MoviePlot_147_001, MoviePlot_147_002, MoviePlot_147_003, 0};
u8 *MoviePlot_148[] = {Tips_148_000, MoviePlot_148_001, MoviePlot_148_002, MoviePlot_148_003, 0};
u8 *MoviePlot_149[] = {Tips_149_000, MoviePlot_149_001, MoviePlot_149_002, MoviePlot_149_003, MoviePlot_149_004, MoviePlot_149_005, 0};
u8 *MoviePlot_150[] = {Tips_150_000, MoviePlot_150_001, 0};
u8 *MoviePlot_151[] = {Tips_151_000, 0};
u8 *MoviePlot_152[] = {Tips_152_000, 0};
u8 *MoviePlot_153[] = {Tips_153_000, MoviePlot_153_001, 0};
u8 *MoviePlot_154[] = {Tips_154_000, 0};
u8 *MoviePlot_155[] = {Tips_155_000, MoviePlot_155_001, MoviePlot_155_002, MoviePlot_155_003, MoviePlot_155_004, MoviePlot_155_005, 0};
u8 *MoviePlot_156[] = {Tips_156_000, MoviePlot_156_001, MoviePlot_156_002, 0};
u8 *MoviePlot_157[] = {Tips_157_000, 0};
u8 *MoviePlot_158[] = {Tips_158_000, MoviePlot_158_001, 0};
u8 *MoviePlot_159[] = {Tips_159_000, MoviePlot_159_001, MoviePlot_159_002, MoviePlot_159_003, 0};
u8 *MoviePlot_160[] = {Tips_160_000, MoviePlot_160_001, MoviePlot_160_002, MoviePlot_160_003, 0};
u8 *MoviePlot_161[] = {Tips_161_000, MoviePlot_161_001, MoviePlot_161_002, MoviePlot_161_003, 0};
u8 *MoviePlot_162[] = {Tips_162_000, MoviePlot_162_001, MoviePlot_162_002, MoviePlot_162_003, MoviePlot_162_004, MoviePlot_162_005, 0};
u8 *MoviePlot_163[] = {Tips_163_000, MoviePlot_163_001, MoviePlot_163_002, MoviePlot_163_003, 0};
u8 *MoviePlot_164[] = {Tips_164_000, MoviePlot_164_001, MoviePlot_164_002, MoviePlot_164_003, 0};
u8 *MoviePlot_165[] = {Tips_165_000, MoviePlot_165_001, 0};
u8 *MoviePlot_166[] = {Tips_166_000, MoviePlot_166_001, 0};
u8 *MoviePlot_167[] = {Tips_167_000, MoviePlot_167_001, MoviePlot_167_002, MoviePlot_167_003, MoviePlot_167_004, MoviePlot_167_005, 0};
u8 *MoviePlot_168[] = {Tips_168_000, MoviePlot_168_001, MoviePlot_168_002, MoviePlot_168_003, MoviePlot_168_004, MoviePlot_168_005, MoviePlot_168_006, MoviePlot_168_007, MoviePlot_168_008, MoviePlot_168_009, MoviePlot_168_010, MoviePlot_168_011, MoviePlot_168_012, MoviePlot_168_013, 0};
u8 *MoviePlot_169[] = {Tips_169_000, MoviePlot_169_001, MoviePlot_169_002, MoviePlot_169_003, 0};
u8 *MoviePlot_170[] = {Tips_170_000, MoviePlot_170_001, MoviePlot_170_002, MoviePlot_170_003, 0};
u8 *MoviePlot_171[] = {Tips_171_000, MoviePlot_171_001, MoviePlot_171_002, MoviePlot_171_003, 0};
u8 *MoviePlot_172[] = {Tips_172_000, 0};
u8 *MoviePlot_173[] = {Tips_173_000, MoviePlot_173_001, 0};
u8 *MoviePlot_174[] = {Tips_174_000, MoviePlot_174_001, MoviePlot_174_002, MoviePlot_174_003, 0};
u8 *MoviePlot_175[] = {Tips_175_000, MoviePlot_175_001, 0};
u8 *MoviePlot_176[] = {Tips_176_000, MoviePlot_176_001, MoviePlot_176_002, MoviePlot_176_003, 0};
u8 *MoviePlot_177[] = {Tips_177_000, MoviePlot_177_001, MoviePlot_177_002, 0};
u8 *MoviePlot_178[] = {Tips_178_000, MoviePlot_178_001, MoviePlot_178_002, MoviePlot_178_003, 0};
u8 *MoviePlot_179[] = {Tips_179_000, MoviePlot_179_001, MoviePlot_179_002, MoviePlot_179_003, 0};
u8 *MoviePlot_180[] = {Tips_180_000, MoviePlot_180_001, MoviePlot_180_002, MoviePlot_180_003, MoviePlot_180_004, MoviePlot_180_005, 0};
u8 *MoviePlot_181[] = {Tips_181_000, MoviePlot_181_001, 0};
u8 *MoviePlot_182[] = {Tips_182_000, MoviePlot_182_001, 0};
u8 *MoviePlot_183[] = {Tips_183_000, MoviePlot_183_001, 0};
u8 *MoviePlot_184[] = {Tips_184_000, MoviePlot_184_001, MoviePlot_184_002, MoviePlot_184_003, MoviePlot_184_004, MoviePlot_184_005, 0};
u8 *MoviePlot_185[] = {Tips_185_000, MoviePlot_185_001, MoviePlot_185_002, MoviePlot_185_003, 0};
u8 *MoviePlot_186[] = {Tips_186_000, MoviePlot_186_001, MoviePlot_186_002, MoviePlot_186_003, MoviePlot_186_004, MoviePlot_186_005, 0};
u8 *MoviePlot_187[] = {Tips_187_000, MoviePlot_187_001, MoviePlot_187_002, MoviePlot_187_003, MoviePlot_187_004, MoviePlot_187_005, MoviePlot_187_006, MoviePlot_187_007, 0};
u8 *MoviePlot_188[] = {Tips_188_000, MoviePlot_188_001, MoviePlot_188_002, MoviePlot_188_003, 0};
u8 *MoviePlot_189[] = {Tips_189_000, MoviePlot_189_001, MoviePlot_189_002, MoviePlot_189_003, 0};
u8 *MoviePlot_190[] = {Tips_190_000, MoviePlot_190_001, MoviePlot_190_002, MoviePlot_190_003, MoviePlot_190_004, MoviePlot_190_005, 0};
u8 *MoviePlot_191[] = {Tips_191_000, MoviePlot_191_001, MoviePlot_191_002, MoviePlot_191_003, 0};
u8 *MoviePlot_192[] = {Tips_192_000, MoviePlot_192_001, MoviePlot_192_002, MoviePlot_192_003, MoviePlot_192_004, MoviePlot_192_005, 0};
u8 *MoviePlot_193[] = {Tips_193_000, MoviePlot_193_001, MoviePlot_193_002, MoviePlot_193_003, MoviePlot_193_004, MoviePlot_193_005, MoviePlot_193_006, 0};
u8 *MoviePlot_194[] = {Tips_194_000, MoviePlot_194_001, MoviePlot_194_002, MoviePlot_194_003, 0};
u8 *MoviePlot_195[] = {Tips_195_000, MoviePlot_195_001, MoviePlot_195_002, MoviePlot_195_003, 0};
u8 *MoviePlot_196[] = {Tips_196_000, MoviePlot_196_001, MoviePlot_196_002, MoviePlot_196_003, 0};
u8 *MoviePlot_197[] = {Tips_197_000, MoviePlot_197_001, 0};
u8 *MoviePlot_198[] = {Tips_198_000, MoviePlot_198_001, MoviePlot_198_002, MoviePlot_198_003, 0};
u8 *MoviePlot_199[] = {Tips_199_000, 0};
u8 *MoviePlot_200[] = {Tips_200_000, 0};
u8 *MoviePlot_201[] = {Tips_201_000, 0};
u8 *MoviePlot_202[] = {Tips_202_000, MoviePlot_202_001, 0};
u8 *MoviePlot_203[] = {Tips_203_000, MoviePlot_203_001, 0};
u8 *MoviePlot_204[] = {Tips_204_000, MoviePlot_204_001, 0};
u8 *MoviePlot_205[] = {Tips_205_000, MoviePlot_205_001, MoviePlot_205_002, MoviePlot_205_003, MoviePlot_205_004, MoviePlot_205_005, MoviePlot_205_006, MoviePlot_205_007, 0};
u8 *MoviePlot_206[] = {Tips_206_000, 0};
u8 *MoviePlot_207[] = {Tips_207_000, 0};
u8 *MoviePlot_208[] = {Tips_208_000, MoviePlot_208_001, MoviePlot_208_002, MoviePlot_208_003, MoviePlot_208_004, MoviePlot_208_005, MoviePlot_208_006, MoviePlot_208_007, MoviePlot_208_008, MoviePlot_208_009, MoviePlot_208_010, MoviePlot_208_011, MoviePlot_208_012, MoviePlot_208_013, 0};
u8 *MoviePlot_209[] = {Tips_209_000, 0};
u8 *MoviePlot_210[] = {Tips_210_000, 0};
u8 *MoviePlot_211[] = {Tips_211_000, MoviePlot_211_001, MoviePlot_211_002, MoviePlot_211_003, 0};
u8 *MoviePlot_212[] = {Tips_212_000, MoviePlot_212_001, MoviePlot_212_002, MoviePlot_212_003, MoviePlot_212_004, MoviePlot_212_005, 0};
u8 *MoviePlot_213[] = {Tips_213_000, MoviePlot_213_001, MoviePlot_213_002, MoviePlot_213_003, 0};
u8 *MoviePlot_214[] = {Tips_214_000, MoviePlot_214_001, 0};
u8 *MoviePlot_215[] = {Tips_215_000, MoviePlot_215_001, 0};
u8 *MoviePlot_216[] = {Tips_216_000, MoviePlot_216_001, 0};
u8 *MoviePlot_217[] = {Tips_217_000, MoviePlot_217_001, 0};
u8 *MoviePlot_218[] = {Tips_218_000, MoviePlot_218_001, MoviePlot_218_002, MoviePlot_218_003, MoviePlot_218_004, MoviePlot_218_005, 0};
u8 *MoviePlot_219[] = {Tips_219_000, 0};
u8 *MoviePlot_220[] = {Tips_220_000, 0};
u8 *MoviePlot_221[] = {Tips_221_000, 0};
u8 *MoviePlot_222[] = {Tips_222_000, MoviePlot_222_001, MoviePlot_222_002, 0};
u8 *MoviePlot_223[] = {Tips_223_000, MoviePlot_223_001, MoviePlot_223_002, MoviePlot_223_003, 0};
u8 *MoviePlot_224[] = {Tips_224_000, MoviePlot_224_001, MoviePlot_224_002, MoviePlot_224_003, 0};
u8 *MoviePlot_225[] = {Tips_225_000, MoviePlot_225_001, MoviePlot_225_002, MoviePlot_225_003, 0};
u8 *MoviePlot_226[] = {Tips_226_000, MoviePlot_226_001, 0};
u8 *MoviePlot_227[] = {Tips_227_000, MoviePlot_227_001, MoviePlot_227_002, MoviePlot_227_003, 0};
u8 *MoviePlot_228[] = {Tips_228_000, MoviePlot_228_001, MoviePlot_228_002, MoviePlot_228_003, 0};
u8 *MoviePlot_229[] = {Tips_229_000, MoviePlot_229_001, MoviePlot_229_002, MoviePlot_229_003, 0};
u8 *MoviePlot_230[] = {Tips_230_000, MoviePlot_230_001, 0};
u8 *MoviePlot_231[] = {Tips_231_000, 0};
u8 *MoviePlot_232[] = {Tips_232_000, MoviePlot_232_001, MoviePlot_232_002, MoviePlot_232_003, MoviePlot_232_004, MoviePlot_232_005, 0};
u8 *MoviePlot_233[] = {Tips_233_000, MoviePlot_233_001, MoviePlot_233_002, MoviePlot_233_003, 0};
u8 *MoviePlot_234[] = {Tips_234_000, MoviePlot_234_001, MoviePlot_234_002, MoviePlot_234_003, MoviePlot_234_004, MoviePlot_234_005, 0};
u8 *MoviePlot_235[] = {Tips_235_000, 0};
u8 *MoviePlot_236[] = {Tips_236_000, MoviePlot_236_001, 0};
u8 *MoviePlot_237[] = {Tips_237_000, 0};
u8 *MoviePlot_238[] = {Tips_238_000, MoviePlot_238_001, MoviePlot_238_002, MoviePlot_238_003, MoviePlot_238_004, 0};
u8 *MoviePlot_239[] = {Tips_239_000, MoviePlot_239_001, 0};
u8 *MoviePlot_240[] = {Tips_240_000, MoviePlot_240_001, MoviePlot_240_002, MoviePlot_240_003, 0};
u8 *MoviePlot_241[] = {Tips_241_000, MoviePlot_241_001, 0};
u8 *MoviePlot_242[] = {Tips_242_000, 0};
u8 *MoviePlot_243[] = {Tips_243_000, MoviePlot_243_001, MoviePlot_243_002, MoviePlot_243_003, MoviePlot_243_004, MoviePlot_243_005, 0};
u8 *MoviePlot_244[] = {Tips_244_000, MoviePlot_244_001, 0};
u8 *MoviePlot_245[] = {Tips_245_000, MoviePlot_245_001, MoviePlot_245_002, 0};
u8 *MoviePlot_246[] = {Tips_246_000, MoviePlot_246_001, MoviePlot_246_002, 0};
u8 *MoviePlot_247[] = {Tips_247_000, MoviePlot_247_001, 0};
u8 *MoviePlot_248[] = {Tips_248_000, MoviePlot_248_001, 0};
u8 *MoviePlot_249[] = {Tips_249_000, MoviePlot_249_001, 0};
u8 *MoviePlot_250[] = {Tips_250_000, MoviePlot_250_001, 0};
u8 *MoviePlot_251[] = {Tips_251_000, MoviePlot_251_001, 0};
u8 *MoviePlot_252[] = {Tips_252_000, MoviePlot_252_001, 0};
u8 *MoviePlot_253[] = {Tips_253_000, MoviePlot_253_001, 0};
u8 *MoviePlot_254[] = {Tips_254_000, MoviePlot_254_001, 0};
u8 *MoviePlot_255[] = {Tips_255_000, MoviePlot_255_001, MoviePlot_255_002, MoviePlot_255_003, 0};
u8 *MoviePlot_256[] = {Tips_256_000, MoviePlot_256_001, MoviePlot_256_002, MoviePlot_256_003, 0};
u8 *MoviePlot_257[] = {Tips_257_000, MoviePlot_257_001, MoviePlot_257_002, MoviePlot_257_003, 0};
u8 *MoviePlot_258[] = {Tips_258_000, MoviePlot_258_001, MoviePlot_258_002, MoviePlot_258_003, MoviePlot_258_004, MoviePlot_258_005, MoviePlot_258_006, MoviePlot_258_007, 0};
u8 *MoviePlot_259[] = {Tips_259_000, MoviePlot_259_001, MoviePlot_259_002, MoviePlot_259_003, MoviePlot_259_004, MoviePlot_259_005, 0};
u8 *MoviePlot_260[] = {Tips_260_000, 0};
u8 *MoviePlot_261[] = {Tips_261_000, MoviePlot_261_001, MoviePlot_261_002, MoviePlot_261_003, 0};
u8 *MoviePlot_262[] = {Tips_262_000, 0};
u8 *MoviePlot_263[] = {Tips_263_000, MoviePlot_263_001, 0};
u8 *MoviePlot_264[] = {Tips_264_000, MoviePlot_264_001, MoviePlot_264_002, MoviePlot_264_003, 0};
u8 *MoviePlot_265[] = {Tips_265_000, MoviePlot_265_001, 0};
u8 *MoviePlot_266[] = {Tips_266_000, MoviePlot_266_001, MoviePlot_266_002, MoviePlot_266_003, 0};
u8 *MoviePlot_267[] = {Tips_267_000, 0};
u8 *MoviePlot_268[] = {Tips_268_000, MoviePlot_268_001, 0};
u8 *MoviePlot_269[] = {Tips_269_000, MoviePlot_269_001, 0};
u8 *MoviePlot_270[] = {Tips_270_000, MoviePlot_270_001, MoviePlot_270_002, MoviePlot_270_003, 0};
u8 *MoviePlot_271[] = {Tips_271_000, MoviePlot_271_001, MoviePlot_271_002, 0};
u8 *MoviePlot_272[] = {Tips_272_000, MoviePlot_272_001, 0};
u8 *MoviePlot_273[] = {Tips_273_000, 0};
u8 *MoviePlot_274[] = {Tips_274_000, 0};
u8 *MoviePlot_275[] = {Tips_275_000, 0};
u8 *MoviePlot_276[] = {Tips_276_000, MoviePlot_276_001, MoviePlot_276_002, MoviePlot_276_003, MoviePlot_276_004, MoviePlot_276_005, MoviePlot_276_006, MoviePlot_276_007, 0};
u8 *MoviePlot_277[] = {Tips_277_000, MoviePlot_277_001, 0};
u8 *MoviePlot_278[] = {Tips_278_000, MoviePlot_278_001, MoviePlot_278_002, MoviePlot_278_003, 0};
u8 *MoviePlot_279[] = {Tips_279_000, MoviePlot_279_001, 0};
u8 *MoviePlot_280[] = {Tips_280_000, 0};
u8 *MoviePlot_281[] = {Tips_281_000, MoviePlot_281_001, 0};
u8 *MoviePlot_282[] = {Tips_282_000, MoviePlot_282_001, 0};
u8 *MoviePlot_283[] = {Tips_283_000, 0};
u8 *MoviePlot_284[] = {Tips_284_000, 0};
u8 *MoviePlot_285[] = {Tips_285_000, 0};
u8 *MoviePlot_286[] = {Tips_286_000, MoviePlot_286_001, 0};
u8 *MoviePlot_287[] = {Tips_287_000, MoviePlot_287_001, 0};
u8 *MoviePlot_288[] = {Tips_288_000, MoviePlot_288_001, MoviePlot_288_002, MoviePlot_288_003, MoviePlot_288_004, 0};
u8 *MoviePlot_289[] = {Tips_289_000, MoviePlot_289_001, MoviePlot_289_002, MoviePlot_289_003, 0};
u8 *MoviePlot_290[] = {Tips_290_000, MoviePlot_290_001, MoviePlot_290_002, MoviePlot_290_003, 0};
u8 *MoviePlot_291[] = {Tips_291_000, MoviePlot_291_001, 0};
u8 *MoviePlot_292[] = {Tips_292_000, 0};
u8 *MoviePlot_293[] = {Tips_293_000, MoviePlot_293_001, MoviePlot_293_002, MoviePlot_293_003, 0};
u8 *MoviePlot_294[] = {Tips_294_000, MoviePlot_294_001, 0};
u8 *MoviePlot_295[] = {Tips_295_000, MoviePlot_295_001, MoviePlot_295_002, MoviePlot_295_003, 0};
u8 *MoviePlot_296[] = {Tips_296_000, MoviePlot_296_001, MoviePlot_296_002, MoviePlot_296_003, 0};
u8 *MoviePlot_297[] = {Tips_297_000, MoviePlot_297_001, MoviePlot_297_002, MoviePlot_297_003, 0};
u8 *MoviePlot_298[] = {Tips_298_000, MoviePlot_298_001, 0};
u8 *MoviePlot_299[] = {Tips_299_000, MoviePlot_299_001, 0};
u8 *MoviePlot_300[] = {Tips_300_000, MoviePlot_300_001, MoviePlot_300_002, MoviePlot_300_003, 0};
u8 *MoviePlot_301[] = {Tips_301_000, 0};
u8 *MoviePlot_302[] = {Tips_302_000, MoviePlot_302_001, 0};
u8 *MoviePlot_303[] = {Tips_303_000, MoviePlot_303_001, 0};
u8 *MoviePlot_304[] = {Tips_304_000, MoviePlot_304_001, MoviePlot_304_002, MoviePlot_304_003, 0};
u8 *MoviePlot_305[] = {Tips_305_000, MoviePlot_305_001, 0};
u8 *MoviePlot_306[] = {Tips_306_000, MoviePlot_306_001, MoviePlot_306_002, MoviePlot_306_003, MoviePlot_306_004, MoviePlot_306_005, 0};
u8 *MoviePlot_307[] = {Tips_307_000, 0};
u8 *MoviePlot_308[] = {Tips_308_000, MoviePlot_308_001, MoviePlot_308_002, MoviePlot_308_003, 0};
u8 *MoviePlot_309[] = {Tips_309_000, MoviePlot_309_001, 0};
u8 *MoviePlot_310[] = {Tips_310_000, 0};
u8 *MoviePlot_311[] = {Tips_311_000, MoviePlot_311_001, 0};
u8 *MoviePlot_312[] = {Tips_312_000, MoviePlot_312_001, MoviePlot_312_002, 0};
u8 *MoviePlot_313[] = {Tips_313_000, MoviePlot_313_001, MoviePlot_313_002, MoviePlot_313_003, 0};
u8 *MoviePlot_314[] = {Tips_314_000, 0};
u8 *MoviePlot_315[] = {Tips_315_000, 0};
u8 *MoviePlot_316[] = {Tips_316_000, MoviePlot_316_001, MoviePlot_316_002, MoviePlot_316_003, MoviePlot_316_004, MoviePlot_316_005, MoviePlot_316_006, MoviePlot_316_007, MoviePlot_316_008, MoviePlot_316_009, 0};
u8 *MoviePlot_317[] = {Tips_317_000, MoviePlot_317_001, MoviePlot_317_002, MoviePlot_317_003, MoviePlot_317_004, MoviePlot_317_005, MoviePlot_317_006, MoviePlot_317_007, MoviePlot_317_008, MoviePlot_317_009, MoviePlot_317_010, MoviePlot_317_011, MoviePlot_317_012, MoviePlot_317_013, MoviePlot_317_014, MoviePlot_317_015, MoviePlot_317_016, MoviePlot_317_017, MoviePlot_317_018, MoviePlot_317_019, MoviePlot_317_020, MoviePlot_317_021, 0};
u8 *MoviePlot_318[] = {Tips_318_000, MoviePlot_318_001, MoviePlot_318_002, MoviePlot_318_003, MoviePlot_318_004, MoviePlot_318_005, 0};
u8 *MoviePlot_319[] = {Tips_319_000, MoviePlot_319_001, 0};
u8 *MoviePlot_320[] = {Tips_320_000, MoviePlot_320_001, MoviePlot_320_002, MoviePlot_320_003, 0};
u8 *MoviePlot_321[] = {Tips_321_000, MoviePlot_321_001, 0};
u8 *MoviePlot_322[] = {Tips_322_000, 0};
u8 *MoviePlot_323[] = {Tips_323_000, 0};
u8 *MoviePlot_324[] = {Tips_324_000, MoviePlot_324_001, 0};
u8 *MoviePlot_325[] = {Tips_325_000, 0};
u8 *MoviePlot_326[] = {Tips_326_000, MoviePlot_326_001, 0};
u8 *MoviePlot_327[] = {Tips_327_000, MoviePlot_327_001, 0};
u8 *MoviePlot_328[] = {Tips_328_000, MoviePlot_328_001, MoviePlot_328_002, 0};
u8 *MoviePlot_329[] = {Tips_329_000, 0};
u8 *MoviePlot_330[] = {Tips_330_000, MoviePlot_330_001, 0};
u8 *MoviePlot_331[] = {Tips_331_000, MoviePlot_331_001, 0};
u8 *MoviePlot_332[] = {Tips_332_000, 0};
u8 *MoviePlot_333[] = {Tips_333_000, MoviePlot_333_001, 0};
u8 *MoviePlot_334[] = {Tips_334_000, MoviePlot_334_001, MoviePlot_334_002, MoviePlot_334_003, MoviePlot_334_004, 0};
u8 *MoviePlot_335[] = {Tips_335_000, 0};
u8 *MoviePlot_336[] = {Tips_336_000, MoviePlot_336_001, 0};
u8 *MoviePlot_337[] = {Tips_337_000, 0};
u8 *MoviePlot_338[] = {Tips_338_000, MoviePlot_338_001, MoviePlot_338_002, MoviePlot_338_003, MoviePlot_338_004, MoviePlot_338_005, MoviePlot_338_006, 0};
u8 *MoviePlot_339[] = {Tips_339_000, MoviePlot_339_001, MoviePlot_339_002, MoviePlot_339_003, MoviePlot_339_004, MoviePlot_339_005, MoviePlot_339_006, MoviePlot_339_007, MoviePlot_339_008, MoviePlot_339_009, MoviePlot_339_010, MoviePlot_339_011, 0};
u8 *MoviePlot_340[] = {Tips_340_000, 0};
u8 *MoviePlot_341[] = {Tips_341_000, MoviePlot_341_001, 0};
u8 *MoviePlot_342[] = {Tips_342_000, 0};
u8 *MoviePlot_343[] = {Tips_343_000, 0};
u8 *MoviePlot_344[] = {Tips_344_000, 0};
u8 *MoviePlot_345[] = {Tips_345_000, 0};
u8 *MoviePlot_346[] = {Tips_346_000, 0};
u8 *MoviePlot_347[] = {Tips_347_000, MoviePlot_347_001, 0};
u8 *MoviePlot_348[] = {Tips_348_000, MoviePlot_348_001, MoviePlot_348_002, MoviePlot_348_003, 0};
u8 *MoviePlot_349[] = {Tips_349_000, 0};
u8 *MoviePlot_350[] = {Tips_350_000, MoviePlot_350_001, 0};
u8 *MoviePlot_351[] = {Tips_351_000, 0};
u8 *MoviePlot_352[] = {Tips_352_000, MoviePlot_352_001, MoviePlot_352_002, MoviePlot_352_003, 0};
u8 *MoviePlot_353[] = {Tips_353_000, MoviePlot_353_001, MoviePlot_353_002, MoviePlot_353_003, MoviePlot_353_004, MoviePlot_353_005, MoviePlot_353_006, MoviePlot_353_007, 0};
u8 *MoviePlot_354[] = {Tips_354_000, MoviePlot_354_001, MoviePlot_354_002, MoviePlot_354_003, MoviePlot_354_004, MoviePlot_354_005, 0};
u8 *MoviePlot_355[] = {Tips_355_000, 0};
u8 *MoviePlot_356[] = {Tips_356_000, MoviePlot_356_001, 0};
u8 *MoviePlot_357[] = {Tips_357_000, MoviePlot_357_001, MoviePlot_357_002, MoviePlot_357_003, MoviePlot_357_004, MoviePlot_357_005, 0};
u8 *MoviePlot_358[] = {Tips_358_000, MoviePlot_358_001, MoviePlot_358_002, MoviePlot_358_003, MoviePlot_358_004, MoviePlot_358_005, MoviePlot_358_006, 0};
u8 *MoviePlot_359[] = {Tips_359_000, MoviePlot_359_001, MoviePlot_359_002, MoviePlot_359_003, 0};
u8 *MoviePlot_360[] = {Tips_360_000, MoviePlot_360_001, MoviePlot_360_002, MoviePlot_360_003, 0};
u8 *MoviePlot_361[] = {Tips_361_000, 0};
u8 *MoviePlot_362[] = {Tips_362_000, 0};
u8 *MoviePlot_363[] = {Tips_363_000, MoviePlot_363_001, 0};
u8 *MoviePlot_364[] = {Tips_364_000, MoviePlot_364_001, MoviePlot_364_002, MoviePlot_364_003, MoviePlot_364_004, MoviePlot_364_005, MoviePlot_364_006, MoviePlot_364_007, 0};
u8 *MoviePlot_365[] = {Tips_365_000, MoviePlot_365_001, MoviePlot_365_002, MoviePlot_365_003, MoviePlot_365_004, 0};
u8 *MoviePlot_366[] = {Tips_366_000, 0};
u8 *MoviePlot_367[] = {Tips_367_000, 0};
u8 *MoviePlot_368[] = {Tips_368_000, MoviePlot_368_001, 0};
u8 *MoviePlot_369[] = {Tips_369_000, MoviePlot_369_001, MoviePlot_369_002, MoviePlot_369_003, MoviePlot_369_004, MoviePlot_369_005, MoviePlot_369_006, MoviePlot_369_007, MoviePlot_369_008, MoviePlot_369_009, 0};
u8 *MoviePlot_370[] = {Tips_370_000, 0};
u8 *MoviePlot_371[] = {Tips_371_000, MoviePlot_371_001, MoviePlot_371_002, MoviePlot_371_003, MoviePlot_371_004, MoviePlot_371_005, 0};
u8 *MoviePlot_372[] = {Tips_372_000, MoviePlot_372_001, 0};
u8 *MoviePlot_373[] = {Tips_373_000, 0};
u8 *MoviePlot_374[] = {Tips_374_000, MoviePlot_374_001, MoviePlot_374_002, MoviePlot_374_003, MoviePlot_374_004, MoviePlot_374_005, MoviePlot_374_006, MoviePlot_374_007, 0};
u8 *MoviePlot_375[] = {Tips_375_000, MoviePlot_375_001, 0};
u8 *MoviePlot_376[] = {Tips_376_000, MoviePlot_376_001, MoviePlot_376_002, MoviePlot_376_003, 0};
u8 *MoviePlot_377[] = {Tips_377_000, 0};
u8 *MoviePlot_378[] = {Tips_378_000, MoviePlot_378_001, MoviePlot_378_002, 0};
u8 *MoviePlot_379[] = {Tips_379_000, MoviePlot_379_001, 0};
u8 *MoviePlot_380[] = {Tips_380_000, MoviePlot_380_001, MoviePlot_380_002, MoviePlot_380_003, MoviePlot_380_004, MoviePlot_380_005, 0};
u8 *MoviePlot_381[] = {Tips_381_000, MoviePlot_381_001, 0};
u8 *MoviePlot_382[] = {Tips_382_000, 0};
u8 *MoviePlot_383[] = {Tips_383_000, MoviePlot_383_001, MoviePlot_383_002, MoviePlot_383_003, MoviePlot_383_004, MoviePlot_383_005, 0};
u8 *MoviePlot_384[] = {Tips_384_000, 0};
u8 *MoviePlot_385[] = {Tips_385_000, MoviePlot_385_001, 0};
u8 *MoviePlot_386[] = {Tips_386_000, MoviePlot_386_001, MoviePlot_386_002, MoviePlot_386_003, MoviePlot_386_004, MoviePlot_386_005, 0};
u8 *MoviePlot_387[] = {Tips_387_000, MoviePlot_387_001, MoviePlot_387_002, MoviePlot_387_003, 0};
u8 *MoviePlot_388[] = {Tips_388_000, MoviePlot_388_001, MoviePlot_388_002, MoviePlot_388_003, 0};
u8 *MoviePlot_389[] = {Tips_389_000, MoviePlot_389_001, MoviePlot_389_002, MoviePlot_389_003, MoviePlot_389_004, 0};
u8 *MoviePlot_390[] = {Tips_390_000, 0};
u8 *MoviePlot_391[] = {Tips_391_000, MoviePlot_391_001, 0};
u8 *MoviePlot_392[] = {Tips_392_000, MoviePlot_392_001, 0};
u8 *MoviePlot_393[] = {Tips_393_000, 0};
u8 *MoviePlot_394[] = {Tips_394_000, 0};
u8 *MoviePlot_395[] = {Tips_395_000, MoviePlot_395_001, MoviePlot_395_002, MoviePlot_395_003, MoviePlot_395_004, MoviePlot_395_005, MoviePlot_395_006, 0};
u8 *MoviePlot_396[] = {Tips_396_000, 0};
u8 *MoviePlot_397[] = {Tips_397_000, MoviePlot_397_001, 0};
u8 *MoviePlot_398[] = {Tips_398_000, MoviePlot_398_001, 0};
u8 *MoviePlot_399[] = {Tips_399_000, MoviePlot_399_001, MoviePlot_399_002, 0};
u8 *MoviePlot_400[] = {Tips_400_000, MoviePlot_400_001, 0};
u8 *MoviePlot_401[] = {Tips_401_000, MoviePlot_401_001, MoviePlot_401_002, 0};
u8 *MoviePlot_402[] = {Tips_402_000, MoviePlot_402_001, MoviePlot_402_002, MoviePlot_402_003, MoviePlot_402_004, MoviePlot_402_005, 0};
u8 *MoviePlot_403[] = {Tips_403_000, MoviePlot_403_001, 0};
u8 *MoviePlot_404[] = {Tips_404_000, MoviePlot_404_001, 0};
u8 *MoviePlot_405[] = {Tips_405_000, MoviePlot_405_001, 0};
u8 *MoviePlot_406[] = {Tips_406_000, MoviePlot_406_001, 0};
u8 *MoviePlot_407[] = {Tips_407_000, MoviePlot_407_001, 0};
u8 *MoviePlot_408[] = {Tips_408_000, MoviePlot_408_001, MoviePlot_408_002, MoviePlot_408_003, MoviePlot_408_004, 0};
u8 *MoviePlot_409[] = {Tips_409_000, MoviePlot_409_001, 0};
u8 *MoviePlot_410[] = {Tips_410_000, 0};
u8 *MoviePlot_411[] = {Tips_411_000, 0};
u8 *MoviePlot_412[] = {Tips_412_000, MoviePlot_412_001, 0};
u8 *MoviePlot_413[] = {Tips_413_000, MoviePlot_413_001, 0};
u8 *MoviePlot_414[] = {Tips_414_000, 0};
u8 *MoviePlot_415[] = {Tips_415_000, 0};
u8 *MoviePlot_416[] = {Tips_416_000, MoviePlot_416_001, 0};
u8 *MoviePlot_417[] = {Tips_417_000, MoviePlot_417_001, 0};
u8 *MoviePlot_418[] = {Tips_418_000, MoviePlot_418_001, MoviePlot_418_002, 0};
u8 *MoviePlot_419[] = {Tips_419_000, MoviePlot_419_001, 0};
u8 *MoviePlot_420[] = {Tips_420_000, MoviePlot_420_001, 0};
u8 *MoviePlot_421[] = {Tips_421_000, MoviePlot_421_001, MoviePlot_421_002, MoviePlot_421_003, MoviePlot_421_004, MoviePlot_421_005, 0};
u8 *MoviePlot_422[] = {Tips_422_000, MoviePlot_422_001, 0};
u8 *MoviePlot_423[] = {Tips_423_000, 0};
u8 *MoviePlot_424[] = {Tips_424_000, MoviePlot_424_001, MoviePlot_424_002, MoviePlot_424_003, 0};
u8 *MoviePlot_425[] = {Tips_425_000, 0};
u8 *MoviePlot_426[] = {Tips_426_000, MoviePlot_426_001, MoviePlot_426_002, MoviePlot_426_003, MoviePlot_426_004, MoviePlot_426_005, MoviePlot_426_006, MoviePlot_426_007, MoviePlot_426_008, MoviePlot_426_009, MoviePlot_426_010, MoviePlot_426_011, 0};
u8 *MoviePlot_427[] = {Tips_427_000, 0};
u8 *MoviePlot_428[] = {Tips_428_000, MoviePlot_428_001, 0};
u8 *MoviePlot_429[] = {Tips_429_000, MoviePlot_429_001, MoviePlot_429_002, MoviePlot_429_003, MoviePlot_429_004, MoviePlot_429_005, MoviePlot_429_006, MoviePlot_429_007, MoviePlot_429_008, MoviePlot_429_009, MoviePlot_429_010, 0};
u8 *MoviePlot_430[] = {Tips_430_000, 0};
u8 *MoviePlot_431[] = {Tips_431_000, MoviePlot_431_001, 0};
u8 *MoviePlot_432[] = {Tips_432_000, MoviePlot_432_001, MoviePlot_432_002, MoviePlot_432_003, MoviePlot_432_004, MoviePlot_432_005, MoviePlot_432_006, MoviePlot_432_007, MoviePlot_432_008, MoviePlot_432_009, MoviePlot_432_010, MoviePlot_432_011, MoviePlot_432_012, MoviePlot_432_013, 0};
u8 *MoviePlot_433[] = {Tips_433_000, MoviePlot_433_001, MoviePlot_433_002, MoviePlot_433_003, 0};
u8 *MoviePlot_434[] = {Tips_434_000, MoviePlot_434_001, MoviePlot_434_002, 0};
u8 *MoviePlot_435[] = {Tips_435_000, MoviePlot_435_001, MoviePlot_435_002, 0};
u8 *MoviePlot_436[] = {Tips_436_000, MoviePlot_436_001, MoviePlot_436_002, MoviePlot_436_003, MoviePlot_436_004, MoviePlot_436_005, MoviePlot_436_006, MoviePlot_436_007, MoviePlot_436_008, MoviePlot_436_009, MoviePlot_436_010, MoviePlot_436_011, MoviePlot_436_012, MoviePlot_436_013, MoviePlot_436_014, MoviePlot_436_015, MoviePlot_436_016, MoviePlot_436_017, MoviePlot_436_018, MoviePlot_436_019, 0};
u8 *MoviePlot_437[] = {Tips_437_000, MoviePlot_437_001, 0};
u8 *MoviePlot_438[] = {Tips_438_000, MoviePlot_438_001, MoviePlot_438_002, MoviePlot_438_003, 0};
u8 *MoviePlot_439[] = {Tips_439_000, 0};
u8 *MoviePlot_440[] = {Tips_440_000, MoviePlot_440_001, MoviePlot_440_002, MoviePlot_440_003, 0};
u8 *MoviePlot_441[] = {Tips_441_000, MoviePlot_441_001, 0};
u8 *MoviePlot_442[] = {Tips_442_000, MoviePlot_442_001, MoviePlot_442_002, MoviePlot_442_003, MoviePlot_442_004, MoviePlot_442_005, MoviePlot_442_006, MoviePlot_442_007, 0};
u8 *MoviePlot_443[] = {Tips_443_000, 0};
u8 *MoviePlot_444[] = {Tips_444_000, 0};
u8 *MoviePlot_445[] = {Tips_445_000, MoviePlot_445_001, MoviePlot_445_002, MoviePlot_445_003, MoviePlot_445_004, MoviePlot_445_005, MoviePlot_445_006, MoviePlot_445_007, MoviePlot_445_008, MoviePlot_445_009, MoviePlot_445_010, MoviePlot_445_011, 0};
u8 *MoviePlot_446[] = {Tips_446_000, MoviePlot_446_001, MoviePlot_446_002, MoviePlot_446_003, MoviePlot_446_004, 0};
u8 *MoviePlot_447[] = {Tips_447_000, MoviePlot_447_001, 0};
u8 *MoviePlot_448[] = {Tips_448_000, MoviePlot_448_001, 0};
u8 *MoviePlot_449[] = {Tips_449_000, MoviePlot_449_001, MoviePlot_449_002, MoviePlot_449_003, MoviePlot_449_004, MoviePlot_449_005, MoviePlot_449_006, MoviePlot_449_007, 0};
u8 *MoviePlot_450[] = {Tips_450_000, MoviePlot_450_001, 0};
u8 *MoviePlot_451[] = {Tips_451_000, MoviePlot_451_001, MoviePlot_451_002, 0};
u8 *MoviePlot_452[] = {Tips_452_000, MoviePlot_452_001, 0};
u8 *MoviePlot_453[] = {Tips_453_000, 0};
u8 *MoviePlot_454[] = {Tips_454_000, 0};
u8 *MoviePlot_455[] = {Tips_455_000, MoviePlot_455_001, MoviePlot_455_002, MoviePlot_455_003, 0};
u8 *MoviePlot_456[] = {Tips_456_000, MoviePlot_456_001, 0};
u8 *MoviePlot_457[] = {Tips_457_000, 0};
u8 *MoviePlot_458[] = {Tips_458_000, MoviePlot_458_001, MoviePlot_458_002, MoviePlot_458_003, MoviePlot_458_004, 0};
u8 *MoviePlot_459[] = {Tips_459_000, 0};
u8 *MoviePlot_460[] = {Tips_460_000, MoviePlot_460_001, MoviePlot_460_002, MoviePlot_460_003, MoviePlot_460_004, MoviePlot_460_005, 0};
u8 *MoviePlot_461[] = {Tips_461_000, MoviePlot_461_001, MoviePlot_461_002, MoviePlot_461_003, 0};
u8 *MoviePlot_462[] = {Tips_462_000, MoviePlot_462_001, MoviePlot_462_002, MoviePlot_462_003, MoviePlot_462_004, MoviePlot_462_005, MoviePlot_462_006, MoviePlot_462_007, 0};
u8 *MoviePlot_463[] = {Tips_463_000, MoviePlot_463_001, MoviePlot_463_002, MoviePlot_463_003, 0};
u8 *MoviePlot_464[] = {Tips_464_000, MoviePlot_464_001, MoviePlot_464_002, MoviePlot_464_003, MoviePlot_464_004, MoviePlot_464_005, 0};
u8 *MoviePlot_465[] = {Tips_465_000, MoviePlot_465_001, MoviePlot_465_002, MoviePlot_465_003, 0};
u8 *MoviePlot_466[] = {Tips_466_000, MoviePlot_466_001, MoviePlot_466_002, MoviePlot_466_003, 0};
u8 *MoviePlot_467[] = {Tips_467_000, MoviePlot_467_001, MoviePlot_467_002, MoviePlot_467_003, 0};
u8 *MoviePlot_468[] = {Tips_468_000, MoviePlot_468_001, 0};
u8 *MoviePlot_469[] = {Tips_469_000, MoviePlot_469_001, MoviePlot_469_002, MoviePlot_469_003, MoviePlot_469_004, MoviePlot_469_005, MoviePlot_469_006, MoviePlot_469_007, MoviePlot_469_008, MoviePlot_469_009, MoviePlot_469_010, MoviePlot_469_011, 0};
u8 *MoviePlot_470[] = {Tips_470_000, MoviePlot_470_001, 0};
u8 *MoviePlot_471[] = {Tips_471_000, 0};
u8 *MoviePlot_472[] = {Tips_472_000, MoviePlot_472_001, MoviePlot_472_002, MoviePlot_472_003, 0};
u8 *MoviePlot_473[] = {Tips_473_000, MoviePlot_473_001, 0};
u8 *MoviePlot_474[] = {Tips_474_000, MoviePlot_474_001, 0};
u8 *MoviePlot_475[] = {Tips_475_000, MoviePlot_475_001, MoviePlot_475_002, MoviePlot_475_003, 0};
u8 *MoviePlot_476[] = {Tips_476_000, 0};
u8 *MoviePlot_477[] = {Tips_477_000, MoviePlot_477_001, 0};
u8 *MoviePlot_478[] = {Tips_478_000, 0};
u8 *MoviePlot_479[] = {Tips_479_000, MoviePlot_479_001, MoviePlot_479_002, MoviePlot_479_003, 0};
u8 *MoviePlot_480[] = {Tips_480_000, MoviePlot_480_001, MoviePlot_480_002, MoviePlot_480_003, MoviePlot_480_004, MoviePlot_480_005, 0};
u8 *MoviePlot_481[] = {Tips_481_000, 0};
u8 *MoviePlot_482[] = {Tips_482_000, MoviePlot_482_001, MoviePlot_482_002, MoviePlot_482_003, 0};
u8 *MoviePlot_483[] = {Tips_483_000, MoviePlot_483_001, MoviePlot_483_002, MoviePlot_483_003, 0};
u8 *MoviePlot_484[] = {Tips_484_000, 0};
u8 *MoviePlot_485[] = {Tips_485_000, 0};
u8 *MoviePlot_486[] = {Tips_486_000, MoviePlot_486_001, MoviePlot_486_002, MoviePlot_486_003, 0};
u8 *MoviePlot_487[] = {Tips_487_000, MoviePlot_487_001, MoviePlot_487_002, MoviePlot_487_003, MoviePlot_487_004, MoviePlot_487_005, MoviePlot_487_006, 0};
u8 *MoviePlot_488[] = {Tips_488_000, MoviePlot_488_001, 0};
u8 *MoviePlot_489[] = {Tips_489_000, MoviePlot_489_001, MoviePlot_489_002, MoviePlot_489_003, MoviePlot_489_004, MoviePlot_489_005, MoviePlot_489_006, MoviePlot_489_007, MoviePlot_489_008, MoviePlot_489_009, MoviePlot_489_010, MoviePlot_489_011, 0};
u8 *MoviePlot_490[] = {Tips_490_000, MoviePlot_490_001, 0};
u8 *MoviePlot_491[] = {Tips_491_000, MoviePlot_491_001, MoviePlot_491_002, MoviePlot_491_003, MoviePlot_491_004, MoviePlot_491_005, 0};
u8 *MoviePlot_492[] = {Tips_492_000, MoviePlot_492_001, MoviePlot_492_002, MoviePlot_492_003, 0};
u8 *MoviePlot_493[] = {Tips_493_000, MoviePlot_493_001, 0};
u8 *MoviePlot_494[] = {Tips_494_000, 0};
u8 *MoviePlot_495[] = {Tips_495_000, 0};
u8 *MoviePlot_496[] = {Tips_496_000, 0};
u8 *MoviePlot_497[] = {Tips_497_000, MoviePlot_497_001, MoviePlot_497_002, MoviePlot_497_003, 0};
u8 *MoviePlot_498[] = {Tips_498_000, MoviePlot_498_001, 0};
u8 *MoviePlot_499[] = {Tips_499_000, MoviePlot_499_001, MoviePlot_499_002, MoviePlot_499_003, 0};
u8 *MoviePlot_500[] = {Tips_500_000, MoviePlot_500_001, MoviePlot_500_002, MoviePlot_500_003, MoviePlot_500_004, 0};
u8 *MoviePlot_501[] = {Tips_501_000, 0};
u8 *MoviePlot_502[] = {Tips_502_000, MoviePlot_502_001, 0};
u8 *MoviePlot_503[] = {Tips_503_000, 0};
u8 *MoviePlot_504[] = {Tips_504_000, 0};
u8 *MoviePlot_505[] = {Tips_505_000, 0};
u8 *MoviePlot_506[] = {Tips_506_000, MoviePlot_506_001, MoviePlot_506_002, MoviePlot_506_003, 0};
u8 *MoviePlot_507[] = {Tips_507_000, MoviePlot_507_001, 0};
u8 *MoviePlot_508[] = {Tips_508_000, 0};
u8 *MoviePlot_509[] = {Tips_509_000, 0};
u8 *MoviePlot_510[] = {Tips_510_000, MoviePlot_510_001, 0};
u8 *MoviePlot_511[] = {Tips_511_000, 0};
u8 *MoviePlot_512[] = {Tips_512_000, MoviePlot_512_001, 0};
u8 *MoviePlot_513[] = {Tips_513_000, 0};
u8 *MoviePlot_514[] = {Tips_514_000, 0};
u8 *MoviePlot_515[] = {Tips_515_000, 0};
u8 *MoviePlot_516[] = {Tips_516_000, MoviePlot_516_001, MoviePlot_516_002, MoviePlot_516_003, MoviePlot_516_004, 0};
u8 *MoviePlot_517[] = {Tips_517_000, 0};
u8 *MoviePlot_518[] = {Tips_518_000, MoviePlot_518_001, MoviePlot_518_002, MoviePlot_518_003, MoviePlot_518_004, MoviePlot_518_005, MoviePlot_518_006, MoviePlot_518_007, MoviePlot_518_008, MoviePlot_518_009, MoviePlot_518_010, MoviePlot_518_011, MoviePlot_518_012, MoviePlot_518_013, 0};
u8 *MoviePlot_519[] = {Tips_519_000, MoviePlot_519_001, 0};
u8 *MoviePlot_520[] = {Tips_520_000, MoviePlot_520_001, 0};
u8 *MoviePlot_521[] = {Tips_521_000, MoviePlot_521_001, 0};
u8 *MoviePlot_522[] = {Tips_522_000, MoviePlot_522_001, 0};
u8 *MoviePlot_523[] = {Tips_523_000, MoviePlot_523_001, MoviePlot_523_002, MoviePlot_523_003, MoviePlot_523_004, MoviePlot_523_005, MoviePlot_523_006, MoviePlot_523_007, MoviePlot_523_008, MoviePlot_523_009, 0};
u8 *MoviePlot_524[] = {Tips_524_000, MoviePlot_524_001, MoviePlot_524_002, MoviePlot_524_003, MoviePlot_524_004, MoviePlot_524_005, 0};
u8 *MoviePlot_525[] = {Tips_525_000, MoviePlot_525_001, 0};
u8 *MoviePlot_526[] = {Tips_526_000, MoviePlot_526_001, MoviePlot_526_002, MoviePlot_526_003, MoviePlot_526_004, MoviePlot_526_005, MoviePlot_526_006, MoviePlot_526_007, MoviePlot_526_008, MoviePlot_526_009, MoviePlot_526_010, MoviePlot_526_011, MoviePlot_526_012, MoviePlot_526_013, MoviePlot_526_014, MoviePlot_526_015, MoviePlot_526_016, MoviePlot_526_017, MoviePlot_526_018, MoviePlot_526_019, MoviePlot_526_020, MoviePlot_526_021, MoviePlot_526_022, MoviePlot_526_023, MoviePlot_526_024, MoviePlot_526_025, MoviePlot_526_026, MoviePlot_526_027, MoviePlot_526_028, MoviePlot_526_029, 0};
u8 *MoviePlot_527[] = {Tips_527_000, MoviePlot_527_001, MoviePlot_527_002, MoviePlot_527_003, MoviePlot_527_004, MoviePlot_527_005, MoviePlot_527_006, MoviePlot_527_007, 0};
u8 *MoviePlot_528[] = {Tips_528_000, 0};
u8 *MoviePlot_529[] = {Tips_529_000, MoviePlot_529_001, 0};
u8 *MoviePlot_530[] = {Tips_530_000, MoviePlot_530_001, MoviePlot_530_002, 0};
u8 *MoviePlot_531[] = {Tips_531_000, MoviePlot_531_001, 0};
u8 *MoviePlot_532[] = {Tips_532_000, MoviePlot_532_001, MoviePlot_532_002, 0};
u8 *MoviePlot_533[] = {Tips_533_000, MoviePlot_533_001, MoviePlot_533_002, MoviePlot_533_003, 0};
u8 *MoviePlot_534[] = {Tips_534_000, MoviePlot_534_001, 0};
u8 *MoviePlot_535[] = {Tips_535_000, MoviePlot_535_001, MoviePlot_535_002, MoviePlot_535_003, MoviePlot_535_004, MoviePlot_535_005, MoviePlot_535_006, MoviePlot_535_007, 0};
u8 *MoviePlot_536[] = {Tips_536_000, MoviePlot_536_001, MoviePlot_536_002, 0};
u8 *MoviePlot_537[] = {Tips_537_000, MoviePlot_537_001, 0};
u8 *MoviePlot_538[] = {Tips_538_000, MoviePlot_538_001, 0};
u8 *MoviePlot_539[] = {Tips_539_000, MoviePlot_539_001, MoviePlot_539_002, MoviePlot_539_003, MoviePlot_539_004, MoviePlot_539_005, MoviePlot_539_006, MoviePlot_539_007, 0};
u8 *MoviePlot_540[] = {Tips_540_000, MoviePlot_540_001, MoviePlot_540_002, MoviePlot_540_003, MoviePlot_540_004, MoviePlot_540_005, MoviePlot_540_006, MoviePlot_540_007, MoviePlot_540_008, MoviePlot_540_009, MoviePlot_540_010, MoviePlot_540_011, MoviePlot_540_012, MoviePlot_540_013, MoviePlot_540_014, 0};
u8 *MoviePlot_541[] = {Tips_541_000, MoviePlot_541_001, 0};
u8 *MoviePlot_542[] = {Tips_542_000, MoviePlot_542_001, MoviePlot_542_002, MoviePlot_542_003, 0};
u8 *MoviePlot_543[] = {Tips_543_000, 0};
u8 *MoviePlot_544[] = {Tips_544_000, MoviePlot_544_001, 0};
u8 *MoviePlot_545[] = {Tips_545_000, MoviePlot_545_001, 0};
u8 *MoviePlot_546[] = {Tips_546_000, MoviePlot_546_001, MoviePlot_546_002, MoviePlot_546_003, 0};
u8 *MoviePlot_547[] = {Tips_547_000, MoviePlot_547_001, MoviePlot_547_002, MoviePlot_547_003, 0};
u8 *MoviePlot_548[] = {Tips_548_000, MoviePlot_548_001, 0};
u8 *MoviePlot_549[] = {Tips_549_000, MoviePlot_549_001, MoviePlot_549_002, MoviePlot_549_003, MoviePlot_549_004, MoviePlot_549_005, 0};
u8 *MoviePlot_550[] = {Tips_550_000, MoviePlot_550_001, MoviePlot_550_002, MoviePlot_550_003, MoviePlot_550_004, MoviePlot_550_005, MoviePlot_550_006, MoviePlot_550_007, MoviePlot_550_008, MoviePlot_550_009, MoviePlot_550_010, MoviePlot_550_011, MoviePlot_550_012, MoviePlot_550_013, MoviePlot_550_014, MoviePlot_550_015, MoviePlot_550_016, 0};
u8 *MoviePlot_551[] = {Tips_551_000, MoviePlot_551_001, MoviePlot_551_002, MoviePlot_551_003, MoviePlot_551_004, MoviePlot_551_005, MoviePlot_551_006, MoviePlot_551_007, MoviePlot_551_008, MoviePlot_551_009, 0};
u8 *MoviePlot_552[] = {Tips_552_000, MoviePlot_552_001, 0};
u8 *MoviePlot_553[] = {Tips_553_000, 0};
u8 *MoviePlot_554[] = {Tips_554_000, MoviePlot_554_001, 0};
u8 *MoviePlot_555[] = {Tips_555_000, MoviePlot_555_001, MoviePlot_555_002, MoviePlot_555_003, MoviePlot_555_004, 0};
u8 *MoviePlot_556[] = {Tips_556_000, MoviePlot_556_001, MoviePlot_556_002, MoviePlot_556_003, MoviePlot_556_004, MoviePlot_556_005, MoviePlot_556_006, MoviePlot_556_007, MoviePlot_556_008, MoviePlot_556_009, 0};
u8 *MoviePlot_557[] = {Tips_557_000, MoviePlot_557_001, MoviePlot_557_002, MoviePlot_557_003, MoviePlot_557_004, MoviePlot_557_005, MoviePlot_557_006, MoviePlot_557_007, 0};
u8 *MoviePlot_558[] = {Tips_558_000, 0};
u8 *MoviePlot_559[] = {Tips_559_000, 0};
u8 *MoviePlot_560[] = {Tips_560_000, MoviePlot_560_001, 0};
u8 *MoviePlot_561[] = {Tips_561_000, MoviePlot_561_001, MoviePlot_561_002, 0};
u8 *MoviePlot_562[] = {Tips_562_000, MoviePlot_562_001, MoviePlot_562_002, 0};
u8 *MoviePlot_563[] = {Tips_563_000, 0};
u8 *MoviePlot_564[] = {Tips_564_000, MoviePlot_564_001, MoviePlot_564_002, MoviePlot_564_003, MoviePlot_564_004, MoviePlot_564_005, MoviePlot_564_006, MoviePlot_564_007, MoviePlot_564_008, MoviePlot_564_009, MoviePlot_564_010, MoviePlot_564_011, 0};
u8 *MoviePlot_565[] = {Tips_565_000, MoviePlot_565_001, 0};
u8 *MoviePlot_566[] = {Tips_566_000, MoviePlot_566_001, 0};
u8 *MoviePlot_567[] = {Tips_567_000, MoviePlot_567_001, 0};
u8 *MoviePlot_568[] = {Tips_568_000, MoviePlot_568_001, 0};
u8 *MoviePlot_569[] = {Tips_569_000, MoviePlot_569_001, MoviePlot_569_002, MoviePlot_569_003, 0};
u8 *MoviePlot_570[] = {Tips_570_000, MoviePlot_570_001, 0};
u8 *MoviePlot_571[] = {Tips_571_000, MoviePlot_571_001, MoviePlot_571_002, MoviePlot_571_003, 0};
u8 *MoviePlot_572[] = {Tips_572_000, MoviePlot_572_001, MoviePlot_572_002, 0};
u8 *MoviePlot_573[] = {Tips_573_000, MoviePlot_573_001, 0};
u8 *MoviePlot_574[] = {Tips_574_000, 0};
u8 *MoviePlot_575[] = {Tips_575_000, MoviePlot_575_001, MoviePlot_575_002, MoviePlot_575_003, 0};
u8 *MoviePlot_576[] = {Tips_576_000, MoviePlot_576_001, 0};
u8 *MoviePlot_577[] = {Tips_577_000, MoviePlot_577_001, 0};
u8 *MoviePlot_578[] = {Tips_578_000, MoviePlot_578_001, MoviePlot_578_002, MoviePlot_578_003, 0};
u8 *MoviePlot_579[] = {Tips_579_000, MoviePlot_579_001, MoviePlot_579_002, MoviePlot_579_003, MoviePlot_579_004, MoviePlot_579_005, MoviePlot_579_006, MoviePlot_579_007, MoviePlot_579_008, MoviePlot_579_009, 0};
u8 *MoviePlot_580[] = {Tips_580_000, MoviePlot_580_001, 0};
u8 *MoviePlot_581[] = {Tips_581_000, MoviePlot_581_001, 0};
u8 *MoviePlot_582[] = {Tips_582_000, MoviePlot_582_001, MoviePlot_582_002, MoviePlot_582_003, 0};
u8 *MoviePlot_583[] = {Tips_583_000, MoviePlot_583_001, 0};
u8 *MoviePlot_584[] = {Tips_584_000, MoviePlot_584_001, MoviePlot_584_002, MoviePlot_584_003, MoviePlot_584_004, MoviePlot_584_005, MoviePlot_584_006, MoviePlot_584_007, MoviePlot_584_008, MoviePlot_584_009, MoviePlot_584_010, MoviePlot_584_011, 0};
u8 *MoviePlot_585[] = {Tips_585_000, MoviePlot_585_001, 0};
u8 *MoviePlot_586[] = {Tips_586_000, MoviePlot_586_001, 0};
u8 *MoviePlot_587[] = {Tips_587_000, MoviePlot_587_001, 0};
u8 *MoviePlot_588[] = {Tips_588_000, MoviePlot_588_001, 0};
u8 *MoviePlot_589[] = {Tips_589_000, MoviePlot_589_001, 0};
u8 *MoviePlot_590[] = {Tips_590_000, MoviePlot_590_001, 0};
u8 *MoviePlot_591[] = {Tips_591_000, MoviePlot_591_001, MoviePlot_591_002, MoviePlot_591_003, MoviePlot_591_004, MoviePlot_591_005, MoviePlot_591_006, MoviePlot_591_007, 0};
u8 *MoviePlot_592[] = {Tips_592_000, MoviePlot_592_001, MoviePlot_592_002, MoviePlot_592_003, 0};
u8 *MoviePlot_593[] = {Tips_593_000, 0};
u8 *MoviePlot_594[] = {Tips_594_000, MoviePlot_594_001, 0};
u8 *MoviePlot_595[] = {Tips_595_000, 0};
u8 *MoviePlot_596[] = {Tips_596_000, MoviePlot_596_001, MoviePlot_596_002, MoviePlot_596_003, 0};
u8 *MoviePlot_597[] = {Tips_597_000, 0};
u8 *MoviePlot_598[] = {Tips_598_000, MoviePlot_598_001, 0};
u8 *MoviePlot_599[] = {Tips_599_000, 0};
u8 *MoviePlot_600[] = {Tips_600_000, MoviePlot_600_001, MoviePlot_600_002, MoviePlot_600_003, MoviePlot_600_004, MoviePlot_600_005, 0};
u8 *MoviePlot_601[] = {Tips_601_000, MoviePlot_601_001, MoviePlot_601_002, MoviePlot_601_003, 0};
u8 *MoviePlot_602[] = {Tips_602_000, 0};
u8 *MoviePlot_603[] = {Tips_603_000, MoviePlot_603_001, MoviePlot_603_002, 0};
u8 *MoviePlot_604[] = {Tips_604_000, MoviePlot_604_001, MoviePlot_604_002, 0};
u8 *MoviePlot_605[] = {Tips_605_000, MoviePlot_605_001, MoviePlot_605_002, MoviePlot_605_003, 0};
u8 *MoviePlot_606[] = {Tips_606_000, MoviePlot_606_001, MoviePlot_606_002, MoviePlot_606_003, MoviePlot_606_004, MoviePlot_606_005, 0};
u8 *MoviePlot_607[] = {Tips_607_000, MoviePlot_607_001, MoviePlot_607_002, MoviePlot_607_003, MoviePlot_607_004, 0};
u8 *MoviePlot_608[] = {Tips_608_000, MoviePlot_608_001, MoviePlot_608_002, MoviePlot_608_003, MoviePlot_608_004, MoviePlot_608_005, MoviePlot_608_006, MoviePlot_608_007, MoviePlot_608_008, MoviePlot_608_009, MoviePlot_608_010, MoviePlot_608_011, 0};
u8 *MoviePlot_609[] = {Tips_609_000, MoviePlot_609_001, MoviePlot_609_002, MoviePlot_609_003, MoviePlot_609_004, MoviePlot_609_005, 0};
u8 *MoviePlot_610[] = {Tips_610_000, MoviePlot_610_001, MoviePlot_610_002, MoviePlot_610_003, MoviePlot_610_004, MoviePlot_610_005, 0};
u8 *MoviePlot_611[] = {Tips_611_000, MoviePlot_611_001, MoviePlot_611_002, MoviePlot_611_003, MoviePlot_611_004, MoviePlot_611_005, 0};
u8 *MoviePlot_612[] = {Tips_612_000, MoviePlot_612_001, MoviePlot_612_002, MoviePlot_612_003, MoviePlot_612_004, MoviePlot_612_005, 0};
u8 *MoviePlot_613[] = {Tips_613_000, MoviePlot_613_001, MoviePlot_613_002, MoviePlot_613_003, MoviePlot_613_004, MoviePlot_613_005, MoviePlot_613_006, MoviePlot_613_007, MoviePlot_613_008, MoviePlot_613_009, MoviePlot_613_010, MoviePlot_613_011, MoviePlot_613_012, MoviePlot_613_013, 0};
u8 *MoviePlot_614[] = {Tips_614_000, MoviePlot_614_001, MoviePlot_614_002, MoviePlot_614_003, MoviePlot_614_004, MoviePlot_614_005, 0};
u8 *MoviePlot_615[] = {Tips_615_000, MoviePlot_615_001, MoviePlot_615_002, MoviePlot_615_003, MoviePlot_615_004, MoviePlot_615_005, 0};
u8 *MoviePlot_616[] = {Tips_616_000, MoviePlot_616_001, MoviePlot_616_002, MoviePlot_616_003, MoviePlot_616_004, MoviePlot_616_005, MoviePlot_616_006, MoviePlot_616_007, MoviePlot_616_008, MoviePlot_616_009, MoviePlot_616_010, MoviePlot_616_011, 0};
u8 *MoviePlot_617[] = {Tips_617_000, MoviePlot_617_001, MoviePlot_617_002, MoviePlot_617_003, 0};
u8 *MoviePlot_618[] = {Tips_618_000, MoviePlot_618_001, MoviePlot_618_002, MoviePlot_618_003, MoviePlot_618_004, MoviePlot_618_005, 0};
u8 *MoviePlot_619[] = {Tips_619_000, MoviePlot_619_001, MoviePlot_619_002, MoviePlot_619_003, MoviePlot_619_004, MoviePlot_619_005, MoviePlot_619_006, MoviePlot_619_007, MoviePlot_619_008, MoviePlot_619_009, MoviePlot_619_010, MoviePlot_619_011, 0};
u8 *MoviePlot_620[] = {Tips_620_000, MoviePlot_620_001, MoviePlot_620_002, 0};
u8 *MoviePlot_621[] = {Tips_621_000, MoviePlot_621_001, MoviePlot_621_002, MoviePlot_621_003, MoviePlot_621_004, MoviePlot_621_005, 0};
u8 *MoviePlot_622[] = {Tips_622_000, MoviePlot_622_001, MoviePlot_622_002, MoviePlot_622_003, 0};
u8 *MoviePlot_623[] = {Tips_623_000, MoviePlot_623_001, MoviePlot_623_002, MoviePlot_623_003, MoviePlot_623_004, MoviePlot_623_005, 0};
u8 *MoviePlot_624[] = {Tips_624_000, MoviePlot_624_001, MoviePlot_624_002, MoviePlot_624_003, MoviePlot_624_004, MoviePlot_624_005, MoviePlot_624_006, MoviePlot_624_007, 0};
u8 *MoviePlot_625[] = {Tips_625_000, MoviePlot_625_001, MoviePlot_625_002, MoviePlot_625_003, MoviePlot_625_004, MoviePlot_625_005, 0};
u8 *MoviePlot_626[] = {Tips_626_000, MoviePlot_626_001, MoviePlot_626_002, MoviePlot_626_003, 0};
u8 *MoviePlot_627[] = {Tips_627_000, 0};
u8 *MoviePlot_628[] = {Tips_628_000, MoviePlot_628_001, 0};
u8 *MoviePlot_629[] = {Tips_629_000, MoviePlot_629_001, 0};

// **MessageOfMoviePlot #630
// 0x0849F970 - 0x084A0347
u8 **MessageOfMoviePlot[] = 
{
    MoviePlot_000, MoviePlot_001, MoviePlot_002, MoviePlot_003, 
    MoviePlot_004, MoviePlot_005, MoviePlot_006, MoviePlot_007, 
    MoviePlot_008, MoviePlot_009, MoviePlot_010, MoviePlot_011, 
    MoviePlot_012, MoviePlot_013, MoviePlot_014, MoviePlot_015, 
    MoviePlot_016, MoviePlot_017, MoviePlot_018, MoviePlot_019, 
    MoviePlot_020, MoviePlot_021, MoviePlot_022, MoviePlot_023, 
    MoviePlot_024, MoviePlot_025, MoviePlot_026, MoviePlot_027, 
    MoviePlot_028, MoviePlot_029, MoviePlot_030, MoviePlot_031, 
    MoviePlot_032, MoviePlot_033, MoviePlot_034, MoviePlot_035, 
    MoviePlot_036, MoviePlot_037, MoviePlot_038, MoviePlot_039, 
    MoviePlot_040, MoviePlot_041, MoviePlot_042, MoviePlot_043, 
    MoviePlot_044, MoviePlot_045, MoviePlot_046, MoviePlot_047, 
    MoviePlot_048, MoviePlot_049, MoviePlot_050, MoviePlot_051, 
    MoviePlot_052, MoviePlot_053, MoviePlot_054, MoviePlot_055, 
    MoviePlot_056, MoviePlot_057, MoviePlot_058, MoviePlot_059, 
    MoviePlot_060, MoviePlot_061, MoviePlot_062, MoviePlot_063, 
    MoviePlot_064, MoviePlot_065, MoviePlot_066, MoviePlot_067, 
    MoviePlot_068, MoviePlot_069, MoviePlot_070, MoviePlot_071, 
    MoviePlot_072, MoviePlot_073, MoviePlot_074, MoviePlot_075, 
    MoviePlot_076, MoviePlot_077, MoviePlot_078, MoviePlot_079, 
    MoviePlot_080, MoviePlot_081, MoviePlot_082, MoviePlot_083, 
    MoviePlot_084, MoviePlot_085, MoviePlot_086, MoviePlot_087, 
    MoviePlot_088, MoviePlot_089, MoviePlot_090, MoviePlot_091, 
    MoviePlot_092, MoviePlot_093, MoviePlot_094, MoviePlot_095, 
    MoviePlot_096, MoviePlot_097, MoviePlot_098, MoviePlot_099, 
    MoviePlot_100, MoviePlot_101, MoviePlot_102, MoviePlot_103, 
    MoviePlot_104, MoviePlot_105, MoviePlot_106, MoviePlot_107, 
    MoviePlot_108, MoviePlot_109, MoviePlot_110, MoviePlot_111, 
    MoviePlot_112, MoviePlot_113, MoviePlot_114, MoviePlot_115, 
    MoviePlot_116, MoviePlot_117, MoviePlot_118, MoviePlot_119, 
    MoviePlot_120, MoviePlot_121, MoviePlot_122, MoviePlot_123, 
    MoviePlot_124, MoviePlot_125, MoviePlot_126, MoviePlot_127, 
    MoviePlot_128, MoviePlot_129, MoviePlot_130, MoviePlot_131, 
    MoviePlot_132, MoviePlot_133, MoviePlot_134, MoviePlot_135, 
    MoviePlot_136, MoviePlot_137, MoviePlot_138, MoviePlot_139, 
    MoviePlot_140, MoviePlot_141, MoviePlot_142, MoviePlot_143, 
    MoviePlot_144, MoviePlot_145, MoviePlot_146, MoviePlot_147, 
    MoviePlot_148, MoviePlot_149, MoviePlot_150, MoviePlot_151, 
    MoviePlot_152, MoviePlot_153, MoviePlot_154, MoviePlot_155, 
    MoviePlot_156, MoviePlot_157, MoviePlot_158, MoviePlot_159, 
    MoviePlot_160, MoviePlot_161, MoviePlot_162, MoviePlot_163, 
    MoviePlot_164, MoviePlot_165, MoviePlot_166, MoviePlot_167, 
    MoviePlot_168, MoviePlot_169, MoviePlot_170, MoviePlot_171, 
    MoviePlot_172, MoviePlot_173, MoviePlot_174, MoviePlot_175, 
    MoviePlot_176, MoviePlot_177, MoviePlot_178, MoviePlot_179, 
    MoviePlot_180, MoviePlot_181, MoviePlot_182, MoviePlot_183, 
    MoviePlot_184, MoviePlot_185, MoviePlot_186, MoviePlot_187, 
    MoviePlot_188, MoviePlot_189, MoviePlot_190, MoviePlot_191, 
    MoviePlot_192, MoviePlot_193, MoviePlot_194, MoviePlot_195, 
    MoviePlot_196, MoviePlot_197, MoviePlot_198, MoviePlot_199, 
    MoviePlot_200, MoviePlot_201, MoviePlot_202, MoviePlot_203, 
    MoviePlot_204, MoviePlot_205, MoviePlot_206, MoviePlot_207, 
    MoviePlot_208, MoviePlot_209, MoviePlot_210, MoviePlot_211, 
    MoviePlot_212, MoviePlot_213, MoviePlot_214, MoviePlot_215, 
    MoviePlot_216, MoviePlot_217, MoviePlot_218, MoviePlot_219, 
    MoviePlot_220, MoviePlot_221, MoviePlot_222, MoviePlot_223, 
    MoviePlot_224, MoviePlot_225, MoviePlot_226, MoviePlot_227, 
    MoviePlot_228, MoviePlot_229, MoviePlot_230, MoviePlot_231, 
    MoviePlot_232, MoviePlot_233, MoviePlot_234, MoviePlot_235, 
    MoviePlot_236, MoviePlot_237, MoviePlot_238, MoviePlot_239, 
    MoviePlot_240, MoviePlot_241, MoviePlot_242, MoviePlot_243, 
    MoviePlot_244, MoviePlot_245, MoviePlot_246, MoviePlot_247, 
    MoviePlot_248, MoviePlot_249, MoviePlot_250, MoviePlot_251, 
    MoviePlot_252, MoviePlot_253, MoviePlot_254, MoviePlot_255, 
    MoviePlot_256, MoviePlot_257, MoviePlot_258, MoviePlot_259, 
    MoviePlot_260, MoviePlot_261, MoviePlot_262, MoviePlot_263, 
    MoviePlot_264, MoviePlot_265, MoviePlot_266, MoviePlot_267, 
    MoviePlot_268, MoviePlot_269, MoviePlot_270, MoviePlot_271, 
    MoviePlot_272, MoviePlot_273, MoviePlot_274, MoviePlot_275, 
    MoviePlot_276, MoviePlot_277, MoviePlot_278, MoviePlot_279, 
    MoviePlot_280, MoviePlot_281, MoviePlot_282, MoviePlot_283, 
    MoviePlot_284, MoviePlot_285, MoviePlot_286, MoviePlot_287, 
    MoviePlot_288, MoviePlot_289, MoviePlot_290, MoviePlot_291, 
    MoviePlot_292, MoviePlot_293, MoviePlot_294, MoviePlot_295, 
    MoviePlot_296, MoviePlot_297, MoviePlot_298, MoviePlot_299, 
    MoviePlot_300, MoviePlot_301, MoviePlot_302, MoviePlot_303, 
    MoviePlot_304, MoviePlot_305, MoviePlot_306, MoviePlot_307, 
    MoviePlot_308, MoviePlot_309, MoviePlot_310, MoviePlot_311, 
    MoviePlot_312, MoviePlot_313, MoviePlot_314, MoviePlot_315, 
    MoviePlot_316, MoviePlot_317, MoviePlot_318, MoviePlot_319, 
    MoviePlot_320, MoviePlot_321, MoviePlot_322, MoviePlot_323, 
    MoviePlot_324, MoviePlot_325, MoviePlot_326, MoviePlot_327, 
    MoviePlot_328, MoviePlot_329, MoviePlot_330, MoviePlot_331, 
    MoviePlot_332, MoviePlot_333, MoviePlot_334, MoviePlot_335, 
    MoviePlot_336, MoviePlot_337, MoviePlot_338, MoviePlot_339, 
    MoviePlot_340, MoviePlot_341, MoviePlot_342, MoviePlot_343, 
    MoviePlot_344, MoviePlot_345, MoviePlot_346, MoviePlot_347, 
    MoviePlot_348, MoviePlot_349, MoviePlot_350, MoviePlot_351, 
    MoviePlot_352, MoviePlot_353, MoviePlot_354, MoviePlot_355, 
    MoviePlot_356, MoviePlot_357, MoviePlot_358, MoviePlot_359, 
    MoviePlot_360, MoviePlot_361, MoviePlot_362, MoviePlot_363, 
    MoviePlot_364, MoviePlot_365, MoviePlot_366, MoviePlot_367, 
    MoviePlot_368, MoviePlot_369, MoviePlot_370, MoviePlot_371, 
    MoviePlot_372, MoviePlot_373, MoviePlot_374, MoviePlot_375, 
    MoviePlot_376, MoviePlot_377, MoviePlot_378, MoviePlot_379, 
    MoviePlot_380, MoviePlot_381, MoviePlot_382, MoviePlot_383, 
    MoviePlot_384, MoviePlot_385, MoviePlot_386, MoviePlot_387, 
    MoviePlot_388, MoviePlot_389, MoviePlot_390, MoviePlot_391, 
    MoviePlot_392, MoviePlot_393, MoviePlot_394, MoviePlot_395, 
    MoviePlot_396, MoviePlot_397, MoviePlot_398, MoviePlot_399, 
    MoviePlot_400, MoviePlot_401, MoviePlot_402, MoviePlot_403, 
    MoviePlot_404, MoviePlot_405, MoviePlot_406, MoviePlot_407, 
    MoviePlot_408, MoviePlot_409, MoviePlot_410, MoviePlot_411, 
    MoviePlot_412, MoviePlot_413, MoviePlot_414, MoviePlot_415, 
    MoviePlot_416, MoviePlot_417, MoviePlot_418, MoviePlot_419, 
    MoviePlot_420, MoviePlot_421, MoviePlot_422, MoviePlot_423, 
    MoviePlot_424, MoviePlot_425, MoviePlot_426, MoviePlot_427, 
    MoviePlot_428, MoviePlot_429, MoviePlot_430, MoviePlot_431, 
    MoviePlot_432, MoviePlot_433, MoviePlot_434, MoviePlot_435, 
    MoviePlot_436, MoviePlot_437, MoviePlot_438, MoviePlot_439, 
    MoviePlot_440, MoviePlot_441, MoviePlot_442, MoviePlot_443, 
    MoviePlot_444, MoviePlot_445, MoviePlot_446, MoviePlot_447, 
    MoviePlot_448, MoviePlot_449, MoviePlot_450, MoviePlot_451, 
    MoviePlot_452, MoviePlot_453, MoviePlot_454, MoviePlot_455, 
    MoviePlot_456, MoviePlot_457, MoviePlot_458, MoviePlot_459, 
    MoviePlot_460, MoviePlot_461, MoviePlot_462, MoviePlot_463, 
    MoviePlot_464, MoviePlot_465, MoviePlot_466, MoviePlot_467, 
    MoviePlot_468, MoviePlot_469, MoviePlot_470, MoviePlot_471, 
    MoviePlot_472, MoviePlot_473, MoviePlot_474, MoviePlot_475, 
    MoviePlot_476, MoviePlot_477, MoviePlot_478, MoviePlot_479, 
    MoviePlot_480, MoviePlot_481, MoviePlot_482, MoviePlot_483, 
    MoviePlot_484, MoviePlot_485, MoviePlot_486, MoviePlot_487, 
    MoviePlot_488, MoviePlot_489, MoviePlot_490, MoviePlot_491, 
    MoviePlot_492, MoviePlot_493, MoviePlot_494, MoviePlot_495, 
    MoviePlot_496, MoviePlot_497, MoviePlot_498, MoviePlot_499, 
    MoviePlot_500, MoviePlot_501, MoviePlot_502, MoviePlot_503, 
    MoviePlot_504, MoviePlot_505, MoviePlot_506, MoviePlot_507, 
    MoviePlot_508, MoviePlot_509, MoviePlot_510, MoviePlot_511, 
    MoviePlot_512, MoviePlot_513, MoviePlot_514, MoviePlot_515, 
    MoviePlot_516, MoviePlot_517, MoviePlot_518, MoviePlot_519, 
    MoviePlot_520, MoviePlot_521, MoviePlot_522, MoviePlot_523, 
    MoviePlot_524, MoviePlot_525, MoviePlot_526, MoviePlot_527, 
    MoviePlot_528, MoviePlot_529, MoviePlot_530, MoviePlot_531, 
    MoviePlot_532, MoviePlot_533, MoviePlot_534, MoviePlot_535, 
    MoviePlot_536, MoviePlot_537, MoviePlot_538, MoviePlot_539, 
    MoviePlot_540, MoviePlot_541, MoviePlot_542, MoviePlot_543, 
    MoviePlot_544, MoviePlot_545, MoviePlot_546, MoviePlot_547, 
    MoviePlot_548, MoviePlot_549, MoviePlot_550, MoviePlot_551, 
    MoviePlot_552, MoviePlot_553, MoviePlot_554, MoviePlot_555, 
    MoviePlot_556, MoviePlot_557, MoviePlot_558, MoviePlot_559, 
    MoviePlot_560, MoviePlot_561, MoviePlot_562, MoviePlot_563, 
    MoviePlot_564, MoviePlot_565, MoviePlot_566, MoviePlot_567, 
    MoviePlot_568, MoviePlot_569, MoviePlot_570, MoviePlot_571, 
    MoviePlot_572, MoviePlot_573, MoviePlot_574, MoviePlot_575, 
    MoviePlot_576, MoviePlot_577, MoviePlot_578, MoviePlot_579, 
    MoviePlot_580, MoviePlot_581, MoviePlot_582, MoviePlot_583, 
    MoviePlot_584, MoviePlot_585, MoviePlot_586, MoviePlot_587, 
    MoviePlot_588, MoviePlot_589, MoviePlot_590, MoviePlot_591, 
    MoviePlot_592, MoviePlot_593, MoviePlot_594, MoviePlot_595, 
    MoviePlot_596, MoviePlot_597, MoviePlot_598, MoviePlot_599, 
    MoviePlot_600, MoviePlot_601, MoviePlot_602, MoviePlot_603, 
    MoviePlot_604, MoviePlot_605, MoviePlot_606, MoviePlot_607, 
    MoviePlot_608, MoviePlot_609, MoviePlot_610, MoviePlot_611, 
    MoviePlot_612, MoviePlot_613, MoviePlot_614, MoviePlot_615, 
    MoviePlot_616, MoviePlot_617, MoviePlot_618, MoviePlot_619, 
    MoviePlot_620, MoviePlot_621, MoviePlot_622, MoviePlot_623, 
    MoviePlot_624, MoviePlot_625, MoviePlot_626, MoviePlot_627, 
    MoviePlot_628, MoviePlot_629
};
