#include "libgba\gba_types.h"
#include "strings\NameList.h"
#include "strings\GetItemNote.h"

//NameList      text    0x080B1B88 - 0x080B1D61
//Tips          text    0x080B1D64 - 0x080BC675
//GetItemNote   text    0x080BC678 - 0x080BDE9D
//MoviePlot     text    0x080BDEA0 - 0x080CC7D7

//*Menu                     
//*MessageOfMenu            0x0848EF18 - 0x0848F1CB

//*MessageOfNameList        0x084990C8 - 0x08499157
//*Tips                     0x08499158 - 0x0849BB6B
//**MessageOfTips           0x0849BB6C - 0x0849C673
//*GetItemNote              0x0849C674 - 0x0849CC07
//**MessageOfGetItemNote    0x0849CC08 - 0x0849CDE3
//*MoviePlot                0x0849CDE4 - 0x0849F96F
//**MessageOfMoviePlot      0x0849F970 - 0x084A0347



// MessageOfNameList
// 0x084990C8 - 0x08499157
// text 0x080B1B88-0x080B1D61
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

//Tips

//MoviePlot

//StoreOfItemDialog #705
//0x08499158 - 0x0849BB6B
//u8 *ItemDialog1[] = {Text1,Text2};
//u8 *ItemDialog2[] = {Text1,Text2};

// 0x0849BB6C - 0x0849C673
//u8 **MessageOfGetItemNote[] =
//{
//    ItemDialog1,ItemDialog2,
//};

// MessageOfGetItemNote #119
// 0x0849C674 - 0x0849CC07
// text 0x080BC678-0x080BDE9D
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

//old 0x0849CC08 - 0x0849CDE3
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
    GetItemNote_116, GetItemNote_117, GetItemNote_118, 0 
};
