/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLRenderPipelineDescriptor : NSObject <NSCopying> {
    struct MTLRenderPipelineDescriptorPrivate { 
        MTLRenderPipelineColorAttachmentDescriptorArray *attachments; 
        unsigned int rtBlendDescHash[8]; 
        unsigned int depthAttachmentPixelFormat; 
        unsigned int stencilAttachmentPixelFormat; 
        unsigned int sampleCount; 
        unsigned int sampleMask; 
        union { 
            unsigned int sampleCoverageHash; 
            float sampleCoverage; 
        } ; 
        union { 
            unsigned int miscHash; 
            struct { 
                unsigned int alphaToCoverageEnabled : 1; 
                unsigned int alphaToOneEnabled : 1; 
                unsigned int rasterizationEnabled : 1; 
                unsigned int pad : 29; 
            } ; 
        } ; 
        NSString *label; 
        unsigned int labelHash; 
        unsigned int vertexFunctionHash; 
        unsigned int fragmentFunctionHash; 
        unsigned int vertexDescriptorHash; 
        <MTLFunction> *vertexFunction; 
        <MTLFunction> *fragmentFunction; 
        MTLVertexDescriptor *vertexDescriptor; 
    } _private;
}

@property (getter=isAlphaToCoverageEnabled, nonatomic) BOOL alphaToCoverageEnabled;
@property (getter=isAlphaToOneEnabled, nonatomic) BOOL alphaToOneEnabled;
@property (readonly) MTLRenderPipelineColorAttachmentDescriptorArray *colorAttachments;
@property (nonatomic) unsigned int depthAttachmentPixelFormat;
@property (nonatomic, retain) <MTLFunction> *fragmentFunction;
@property (nonatomic, copy) NSString *label;
@property (getter=isRasterizationEnabled, nonatomic) BOOL rasterizationEnabled;
@property (nonatomic) unsigned int sampleCount;
@property (nonatomic) unsigned int stencilAttachmentPixelFormat;
@property (nonatomic, copy) MTLVertexDescriptor *vertexDescriptor;
@property (nonatomic, retain) <MTLFunction> *vertexFunction;

- (id).cxx_construct;
- (const struct MTLRenderPipelineDescriptorPrivate { id x1; /* Warning: Unrecognized filer type: '8' using 'void*' */ void*x2; unsigned int x3; void*x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; union { unsigned int x_9_1_1; float x_9_1_2; } x9; union { unsigned int x_10_1_1; struct { unsigned int x_2_2_1 : 1; unsigned int x_2_2_2 : 1; unsigned int x_2_2_3 : 1; unsigned int x_2_2_4 : 29; } x_10_1_2; } x10; id x11; unsigned int x12; unsigned int x13; unsigned int x14; id x15; id x16; void*x17; void*x18; void*x19; void*x20; void*x21; void*x22; void*x23; void*x24; oneway void*x25; void*x26; void*x27; void*x28; void*x29; void*x30; void*x31; void*x32; void*x33; void*x34; long doublex35; long doublex36; void*x37; float x38; void*x39; const const void*x40; double x41; inout void*x42; void*x43; void*x44; void*x45; int x46; long x47; unsigned int x48/* : ? */; out void*x49; bycopy void*x50; void*x51; const void*x52; void*x53; int x54; out in void*x55; void*x56; void*x57; void*x58; void*x59; void*x60; void*x61; void*x62; oneway void*x63; void*x64; void*x65; void*x66; void*x67; void*x68; void*x69; void*x70; void*x71; void*x72; long doublex73; long doublex74; void*x75; float x76; void*x77; const const void*x78; double x79; inout void*x80; void*x81; void*x82; void*x83; int x84; long x85; unsigned int x86/* : ? */; out void*x87; bycopy void*x88; void*x89; const void*x90; void*x91; int x92; out in void*x93; void*x94; void*x95; void*x96; void*x97; void*x98; void*x99; void*x100; void*x101; void*x102; void*x103; void*x104; void*x105; void*x106; void*x107; void*x108; void*x109; void*x110; void*x111; void*x112; void*x113; void*x114; void*x115; void*x116; void*x117; void*x118; void*x119; void*x120; void*x121; void*x122; void*x123; void*x124; void*x125; void*x126; void*x127; void*x128; void*x129; void*x130; void*x131; void*x132; void*x133; void*x134; void*x135; void*x136; void*x137; void*x138; void*x139; void*x140; void*x141; void*x142; union x143; void*x144; void*x145; void*x146; id x147; void*x148; void*x149; void*x150; void*x151; void*x152; void*x153; void*x154; void*x155; void*x156; void*x157; void*x158; void*x159; void*x160; void*x161; void*x162; oneway void*x163; void*x164; void*x165; void*x166; void*x167; void*x168; void*x169; void*x170; unsigned short x171; void*x172; short x173; void*x174; void*x175; void*x176; void*x177; unsigned long x178; int x179; unsigned int x180/* : ? */; const void*x181; const void*x182; void*x183; void*x184; const int x185; void x186; void*x187; void*x188; void*x189; void*x190; const void*x191; void*x192; void*x193; void*x194; out const void*x195; short x196; void*x197; void*x198; out void*x199; void*x200; void*x201; int x202; void*x203; long doublex204; void*x205; void*x206; void*x207; out in void*x208; float x209; const void*x210; void*x211; void*x212; void*x213; out const void*x214; void*x215; void*x216; out void*x217; void*x218; void*x219; int x220; void*x221; long doublex222; void*x223; void*x224; void*x225; out in void*x226; void*x227; void*x228; void*x229; void*x230; void*x231; void*x232; void*x233; void*x234; void*x235; void*x236; void*x237; void*x238; void*x239; void*x240; void*x241; void*x242; void*x243; void*x244; void*x245; void*x246; void*x247; void*x248; void*x249; void*x250; void*x251; void*x252; void*x253; void*x254; void*x255; void*x256; void*x257; void*x258; void*x259; void*x260; void*x261; void*x262; void*x263; void*x264; void*x265; void*x266; void*x267; void*x268; void*x269; void*x270; void*x271; void*x272; void*x273; void*x274; void*x275; void*x276; void*x277; void*x278; void*x279; void*x280; void*x281; void*x282; void*x283; void*x284; void*x285; void*x286; void*x287; void*x288; void*x289; void*x290; void*x291; void*x292; void*x293; void*x294; void*x295; void*x296; void*x297; void*x298; void*x299; void*x300; void*x301; void*x302; void*x303; void*x304; void*x305; void*x306; void*x307; void*x308; void*x309; out void*x310; void*x311; void*x312; void*x313; void*x314; void*x315; void*x316; void*x317; void*x318; void*x319; void*x320; void*x321; void*x322; void*x323; void*x324; void*x325; void*x326; void*x327; void*x328; void*x329; void*x330; void*x331; void*x332; void*x333; void*x334; void*x335; void*x336; void*x337; void*x338; void*x339; void*x340; void*x341; void*x342; void*x343; id x344; void*x345; void*x346; void*x347; void*x348; void*x349; void*x350; void*x351; void*x352; void*x353; void*x354; void*x355; void*x356; void*x357; void*x358; void*x359; void*x360; void*x361; void*x362; void*x363; void*x364; void*x365; void*x366; void*x367; void*x368; void*x369; void*x370; void*x371; void*x372; void*x373; void*x374; void*x375; void*x376; short x377; void*x378; out void*x379; void*x380; int x381; void*x382; void*x383; void*x384; int x385; out in void*x386; unsigned char x387; out out const double x388; int x389; in void*x390; void*x391; void*x392; SEL x393; void*x394; int x395; void*x396; void*x397; void*x398; void*x399; void*x400; void*x401; void*x402; void*x403; int x404; out in SEL x405; void*x406; void*x407; void*x408; void*x409; void*x410; void*x411; void*x412; void*x413; void*x414; void*x415; void*x416; void*x417; void*x418; void*x419; void*x420; oneway void*x421; void*x422; void*x423; void*x424; void*x425; void*x426; char *x427; void*x428; void*x429; unsigned int x430; unsigned int x431; in void*x432; void*x433; void*x434; oneway int x435; void*x436; void*x437; unsigned short x438; void*x439; void*x440; void*x441; long x442; void*x443; BOOL x444; void*x445; void*x446; void*x447; in void*x448; long doublex449; const void*x450; void*x451; void*x452; out long doublex453; int x454; short x455; void*x456; int x457; short x458; short x459; void*x460; void*x461; void*x462; oneway void*x463; void*x464; void*x465; void*x466; void*x467; void*x468; char *x469; void*x470; void*x471; unsigned int x472; unsigned int x473; in void*x474; void*x475; void*x476; oneway int x477; void*x478; void*x479; unsigned short x480; void*x481; void*x482; void*x483; long x484; void*x485; BOOL x486; void*x487; void*x488; void*x489; in void*x490; long doublex491; const void*x492; void*x493; void*x494; out long doublex495; int x496; short x497; void*x498; int x499; short x500; short x501; void*x502; void*x503; void*x504; void*x505; void*x506; void*x507; void*x508; void*x509; void*x510; void*x511; void*x512; void*x513; void*x514; void*x515; void*x516; void*x517; void*x518; void*x519; void*x520; void*x521; void*x522; void*x523; void*x524; void*x525; void*x526; void*x527; void*x528; void*x529; void*x530; void*x531; void*x532; void*x533; void*x534; void*x535; void*x536; void*x537; void*x538; void*x539; void*x540; void*x541; void*x542; void*x543; void*x544; void*x545; void*x546; void*x547; void*x548; void*x549; void*x550; void*x551; void*x552; SEL x553; void*x554; void*x555; void*x556; void*x557; void*x558; void*x559; unsigned long long x560; void*x561; void*x562; long x563; long doublex564; void*x565; unsigned short x566; BOOL x567; void*x568; void*x569; double x570; void*x571; long x572; void*x573; void*x574; void*x575; short x576; void*x577; out in short x578; void*x579; unsigned int x580; void*x581; void*x582; void*x583; void*x584; void*x585; void*x586; void*x587; void*x588; void*x589; void*x590; void*x591; void*x592; void*x593; void*x594; void*x595; void*x596; void*x597; void*x598; void*x599; void*x600; void*x601; void*x602; void*x603; void*x604; void*x605; void*x606; unsigned short x607; void*x608; short x609; void*x610; void*x611; void*x612; void*x613; unsigned long x614; int x615; unsigned int x616/* : ? */; const void*x617; const void*x618; void*x619; void*x620; const int x621; void x622; void*x623; void*x624; void*x625; void*x626; const void*x627; void*x628; void*x629; void*x630; out const void*x631; short x632; void*x633; unsigned char x634; void*x635; long x636; long doublex637; void*x638; void*x639; float x640; const void*x641; void*x642; void*x643; void*x644; out const void*x645; void*x646; unsigned char x647; void*x648; long x649; long doublex650; void*x651; void*x652; void*x653; void*x654; void*x655; void*x656; void*x657; void*x658; void*x659; void*x660; void*x661; void*x662; void*x663; void*x664; void*x665; void*x666; oneway void*x667; void*x668; void*x669; void*x670; void*x671; void*x672; void*x673; unsigned short x674; void*x675; void*x676; unsigned int x677; unsigned long x678; out BOOL x679; void*x680; void*x681; void*x682; oneway int x683; void*x684; void*x685; void*x686; long x687; void*x688; void*x689; void*x690; in void*x691; void*x692; void*x693; void*x694; void*x695; void*x696; void*x697; void*x698; void*x699; void*x700; void*x701; void*x702; void*x703; long doublex704; void*x705; void*x706; void*x707; void*x708; void*x709; void*x710; void*x711; void*x712; void*x713; void*x714; void*x715; void*x716; void*x717; void*x718; void*x719; void*x720; void*x721; void*x722; void*x723; void*x724; void*x725; void*x726; void*x727; void*x728; void*x729; Class x730; void*x731; void*x732; void*x733; void*x734; void*x735; void*x736; void*x737; void*x738; void*x739; void*x740; void*x741; void*x742; void*x743; void*x744; void*x745; void*x746; void*x747; void*x748; void*x749; void*x750; void*x751; void*x752; void*x753; void*x754; void*x755; void*x756; void*x757; void*x758; void*x759; void*x760; void*x761; char *x762; void*x763; void*x764; void*x765; void*x766; unsigned int x767; void*x768; void*x769; unsigned int x770/* : ? */; unsigned char x771; long x772; int x773; void*x774; unsigned int x775; BOOL x776; out in void*x777; void*x778; void*x779; void*x780; void*x781; void*x782; void*x783; void*x784; void*x785; void*x786; void*x787; void*x788; void*x789; void*x790; void*x791; float x792; void*x793; void*x794; void*x795; void*x796; void*x797; void*x798; void*x799; void*x800; void*x801; void*x802; void*x803; void*x804; void*x805; void*x806; void*x807; void*x808; void*x809; void*x810; void*x811; void*x812; void*x813; void*x814; void*x815; void*x816; void*x817; void*x818; void*x819; oneway void*x820; void*x821; void*x822; void*x823; void*x824; void*x825; void*x826; void*x827; void*x828; void*x829; double x830; int x831; out void*x832; out void*x833; void*x834; void*x835; void*x836; void*x837; void*x838; void*x839; void*x840; void*x841; void*x842; void*x843; void*x844; void*x845; void*x846; void*x847; void*x848; void*x849; void*x850; void*x851; void*x852; void*x853; void*x854; void*x855; void*x856; unsigned int x857; void*x858; void*x859; unsigned int x860/* : ? */; bycopy void*x861; void*x862; void*x863; const out void*x864; void*x865; void*x866; void*x867; void*x868; void*x869; void*x870; void*x871; void*x872; void*x873; void*x874; void*x875; void*x876; void*x877; void*x878; long long x879; void*x880; void*x881; void*x882; void*x883; void*x884; void*x885; void*x886; void*x887; void*x888; void*x889; void*x890; void*x891; id x892; Class x893; void*x894; void*x895; void*x896; void*x897; void*x898; void*x899; void*x900; void*x901; void*x902; void*x903; void*x904; void*x905; void*x906; void*x907; void*x908; void*x909; void*x910; void*x911; void*x912; void*x913; void*x914; void*x915; void*x916; void*x917; void*x918; void*x919; void*x920; void*x921; void*x922; void*x923; void*x924; void*x925; void*x926; void*x927; void*x928; void*x929; void*x930; void*x931; void*x932; void*x933; void*x934; void*x935; void*x936; void*x937; void*x938; void*x939; void*x940; void*x941; void*x942; void*x943; void*x944; void*x945; void*x946; void*x947; void*x948; void*x949; void*x950; void*x951; void*x952; void*x953; void*x954; void*x955; void*x956; void**x957; void*x958; void*x959; void*x960; void*x961; void*x962; void*x963; void*x964; void*x965; void*x966; void*x967; void*x968; void*x969; void*x970; void*x971; void*x972; void*x973; void*x974; void*x975; void*x976; void*x977; void*x978; void*x979; void*x980; void*x981; void*x982; void*x983; void*x984; void*x985; void*x986; SEL x987; void*x988; void*x989; void*x990; void*x991; void*x992; void*x993; void*x994; void*x995; unsigned short x996; void*x997; short x998; void*x999; void*x1000; void*x1001; void*x1002; unsigned long x1003; int x1004; unsigned int x1005/* : ? */; const void*x1006; const void*x1007; void*x1008; void*x1009; const int x1010; void x1011; void*x1012; void*x1013; void*x1014; void*x1015; const void*x1016; void*x1017; void*x1018; void*x1019; out const void*x1020; short x1021; void*x1022; unsigned char x1023; out const void*x1024; long doublex1025; void*x1026; void*x1027; void*x1028; long doublex1029; void*x1030; void*x1031; void*x1032; void*x1033; out double x1034; void*x1035; long x1036; void*x1037; float x1038; const void*x1039; void*x1040; void*x1041; void*x1042; out const void*x1043; void*x1044; unsigned char x1045; out const void*x1046; long doublex1047; void*x1048; void*x1049; void*x1050; long doublex1051; void*x1052; void*x1053; void*x1054; void*x1055; out double x1056; void*x1057; long x1058; void*x1059; void*x1060; void*x1061; void*x1062; void*x1063; void*x1064; void*x1065; void*x1066; void*x1067; oneway void*x1068; void*x1069; void*x1070; void*x1071; void*x1072; void*x1073; void*x1074; inout unsigned short x1075; unsigned char x1076; out in short x1077; void*x1078; void*x1079; in void*x1080; oneway void*x1081; long x1082; void*x1083; void*x1084; void*x1085; void*x1086; void*x1087; const void*x1088; short x1089; short x1090; int x1091; out in void*x1092; void*x1093; void*x1094; void*x1095; void*x1096; void*x1097; void*x1098; void*x1099; void*x1100; void*x1101; void*x1102; void*x1103; void*x1104; void*x1105; void*x1106; void*x1107; void*x1108; void*x1109; void*x1110; void*x1111; void*x1112; void*x1113; union x1114; void*x1115; void*x1116; void*x1117; void*x1118; out void*x1119; out void x1120; void*x1121; const void*x1122; void*x1123; unsigned int x1124/* : ? */; void*x1125; double x1126; double x1127; int x1128; in void*x1129; oneway int x1130; void*x1131; void*x1132; void*x1133; void*x1134; void*x1135; void*x1136; void*x1137; void*x1138; void*x1139; void*x1140; void*x1141; void*x1142; void*x1143; void*x1144; void*x1145; void*x1146; void*x1147; void*x1148; void*x1149; void*x1150; void*x1151; void*x1152; void*x1153; void*x1154; void*x1155; void*x1156; char *x1157; void*x1158; unsigned short x1159; void*x1160; void*x1161; void*x1162; unsigned short x1163; void*x1164; long x1165; void*x1166; BOOL x1167; void*x1168; int x1169; out in void*x1170; void*x1171; void*x1172; void*x1173; void*x1174; void*x1175; void*x1176; void*x1177; void*x1178; void*x1179; void*x1180; void*x1181; void*x1182; void*x1183; void*x1184; void*x1185; void*x1186; Class x1187; void*x1188; unsigned int x1189; void*x1190; void*x1191; void*x1192; unsigned int x1193/* : ? */; out void*x1194; const double x1195; unsigned char x1196; void*x1197; in double x1198; int x1199; double x1200; void*x1201; void*x1202; void*x1203; void*x1204; out void*x1205; oneway int x1206; void*x1207; void*x1208; unsigned char x1209; out in void*x1210; const out long x1211; long x1212; void*x1213; const void*x1214; void*x1215; void*x1216; void*x1217; void*x1218; void*x1219; void*x1220; void*x1221; void*x1222; void*x1223; void*x1224; void*x1225; void*x1226; void*x1227; void*x1228; void*x1229; void*x1230; double x1231; unsigned int x1232/* : ? */; void*x1233; BOOL x1234; void*x1235; void*x1236; in void*x1237; void*x1238; void*x1239; void*x1240; void*x1241; void*x1242; in void*x1243; void*x1244; void*x1245; void*x1246; void*x1247; void*x1248; void*x1249; void*x1250; void*x1251; void*x1252; void*x1253; unsigned long long x1254; void*x1255; void*x1256; unsigned long x1257; bycopy void*x1258; out void*x1259; void*x1260; void*x1261; int x1262; void*x1263; void*x1264; void*x1265; short x1266; void*x1267; long x1268; void*x1269; void*x1270; void*x1271; void*x1272; void*x1273; void*x1274; void*x1275; void*x1276; void*x1277; void*x1278; void*x1279; void*x1280; void*x1281; void*x1282; void*x1283; void*x1284; void*x1285; void*x1286; unsigned long long x1287; long doublex1288; void*x1289; void*x1290; void*x1291; out out void*x1292; in out void*x1293; void*x1294; void*x1295; void*x1296; void*x1297; void*x1298; void*x1299; void*x1300; void*x1301; void*x1302; void*x1303; void*x1304; void*x1305; void*x1306; void*x1307; void*x1308; void*x1309; void*x1310; void*x1311; void*x1312; void*x1313; unsigned long x1314; oneway void*x1315; void*x1316; int x1317; BOOL x1318; long x1319; void*x1320; void*x1321; void*x1322; void*x1323; double x1324; int x1325; in void*x1326; void*x1327; void*x1328; void*x1329; void*x1330; void*x1331; void*x1332; void*x1333; void*x1334; void*x1335; void*x1336; void*x1337; void*x1338; void*x1339; void*x1340; void*x1341; void*x1342; void*x1343; void*x1344; unsigned char x1345; long x1346; out void*x1347; double x1348; void*x1349; void*x1350; out void*x1351; out unsigned short x1352; void*x1353; out const void*x1354; void*x1355; void*x1356; unsigned long x1357; void*x1358; void x1359; void*x1360; long x1361; unsigned char x1362; void*x1363; long x1364; long x1365; void*x1366; void*x1367; void*x1368; void*x1369; void*x1370; void*x1371; void*x1372; void*x1373; void*x1374; void*x1375; void*x1376; void*x1377; void*x1378; void*x1379; void*x1380; void*x1381; void*x1382; void*x1383; unsigned long long x1384; void*x1385; void*x1386; void*x1387; unsigned short x1388; long x1389; int x1390; double x1391; void*x1392; short x1393; void*x1394; out void*x1395; void*x1396; long x1397; void*x1398; void*x1399; void*x1400; in void*x1401; void*x1402; void*x1403; void*x1404; void*x1405; void*x1406; void*x1407; void*x1408; void*x1409; void*x1410; void*x1411; void*x1412; void*x1413; void*x1414; void*x1415; void*x1416; unsigned int x1417; void*x1418; const void*x1419; double x1420; int x1421; void*x1422; in void*x1423; void*x1424; void*x1425; void*x1426; void*x1427; void*x1428; void*x1429; void*x1430; void*x1431; void*x1432; void*x1433; void*x1434; void*x1435; void*x1436; void*x1437; void*x1438; void*x1439; void*x1440; void*x1441; void*x1442; void*x1443; void*x1444; void*x1445; void*x1446; void*x1447; void*x1448; void*x1449; void*x1450; double x1451; unsigned int x1452/* : ? */; void*x1453; BOOL x1454; void*x1455; void*x1456; in void*x1457; void*x1458; void*x1459; void*x1460; void*x1461; void*x1462; in void*x1463; void*x1464; void*x1465; void*x1466; short x1467; void*x1468; void*x1469; void*x1470; void*x1471; void*x1472; void*x1473; void*x1474; void*x1475; void*x1476; void*x1477; void*x1478; void*x1479; void*x1480; void*x1481; void*x1482; void*x1483; void*x1484; void*x1485; void*x1486; void*x1487; void*x1488; void*x1489; void*x1490; void*x1491; void*x1492; void*x1493; bycopy void*x1494; long doublex1495; void*x1496; in void*x1497; int x1498; void*x1499; void*x1500; void*x1501; void*x1502; void*x1503; void*x1504; void*x1505; void*x1506; void*x1507; void*x1508; void*x1509; void*x1510; void*x1511; void*x1512; void*x1513; void*x1514; void*x1515; void*x1516; void*x1517; void*x1518; void*x1519; void*x1520; void*x1521; unsigned long long x1522; long doublex1523; void*x1524; void*x1525; unsigned char x1526; out long x1527; void*x1528; void*x1529; in void*x1530; void*x1531; void*x1532; void*x1533; void*x1534; void*x1535; void*x1536; void*x1537; void*x1538; void*x1539; void*x1540; void*x1541; void*x1542; void*x1543; void*x1544; void*x1545; void*x1546; void*x1547; void*x1548; void*x1549; void*x1550; void*x1551; long doublex1552; void*x1553; void*x1554; in void*x1555; void*x1556; void*x1557; void*x1558; void*x1559; void*x1560; void*x1561; void*x1562; void*x1563; void*x1564; void*x1565; void*x1566; void*x1567; void*x1568; void*x1569; const short x1570; int x1571; short x1572; void*x1573; void*x1574; in void*x1575; void*x1576; void*x1577; BOOL x1578; void*x1579; void*x1580; void*x1581; int x1582; out in long doublex1583; void*x1584; void*x1585; void*x1586; void*x1587; void*x1588; void*x1589; void*x1590; void*x1591; void*x1592; void*x1593; void*x1594; void*x1595; void*x1596; void*x1597; void*x1598; void*x1599; void*x1600; void*x1601; void*x1602; void*x1603; void*x1604; void*x1605; void*x1606; void*x1607; void*x1608; void*x1609; void*x1610; unsigned short x1611; void*x1612; short x1613; void*x1614; void*x1615; void*x1616; void*x1617; unsigned long x1618; int x1619; unsigned int x1620/* : ? */; const void*x1621; const void*x1622; void*x1623; void*x1624; const void*x1625; void*x1626; void*x1627; void*x1628; out const void*x1629; short x1630; void*x1631; void*x1632; void x1633; void*x1634; in void*x1635; void*x1636; int x1637; void*x1638; void*x1639; float x1640; const void*x1641; void*x1642; void*x1643; void*x1644; out const void*x1645; void*x1646; void*x1647; void x1648; void*x1649; in void*x1650; void*x1651; int x1652; void*x1653; void*x1654; void*x1655; void*x1656; void*x1657; void*x1658; void*x1659; void*x1660; void*x1661; void*x1662; void*x1663; void*x1664; void*x1665; void*x1666; void*x1667; void*x1668; void*x1669; void*x1670; void*x1671; void*x1672; void*x1673; void*x1674; void*x1675; void*x1676; void*x1677; void*x1678; void*x1679; void*x1680; void*x1681; void*x1682; void*x1683; void*x1684; void*x1685; void*x1686; void*x1687; oneway void*x1688; void*x1689; void*x1690; void*x1691; void*x1692; void*x1693; void*x1694; unsigned int x1695; void*x1696; long doublex1697; void*x1698; short x1699; void*x1700; void*x1701; out void*x1702; inout void*x1703; void*x1704; void*x1705; out const void*x1706; void*x1707; void*x1708; in void*x1709; void*x1710; void*x1711; const void*x1712; void*x1713; void*x1714; void*x1715; void*x1716; void*x1717; void*x1718; void*x1719; void*x1720; void*x1721; void*x1722; void*x1723; void*x1724; void*x1725; unsigned long long x1726; void*x1727; void*x1728; void*x1729; void*x1730; void*x1731; void*x1732; void*x1733; void*x1734; void*x1735; void*x1736; void*x1737; void*x1738; void*x1739; void*x1740; void*x1741; void*x1742; void*x1743; void*x1744; void*x1745; void*x1746; void*x1747; oneway void*x1748; void*x1749; void*x1750; void*x1751; void*x1752; void*x1753; void*x1754; void*x1755; void*x1756; void*x1757; void*x1758; void*x1759; void*x1760; void*x1761; void*x1762; void*x1763; void*x1764; void*x1765; void*x1766; void*x1767; void*x1768; void*x1769; void*x1770; void*x1771; void*x1772; void*x1773; void*x1774; void*x1775; void*x1776; void*x1777; void*x1778; void*x1779; void*x1780; void*x1781; void*x1782; void*x1783; void*x1784; void*x1785; long doublex1786; void*x1787; void*x1788; void*x1789; void*x1790; double x1791; void*x1792; void*x1793; unsigned char x1794; void*x1795; BOOL x1796; void*x1797; int x1798; void x1799; void*x1800; const void*x1801; void*x1802; void*x1803; void*x1804; void*x1805; void*x1806; void*x1807; void*x1808; void*x1809; void*x1810; void*x1811; void*x1812; void*x1813; void*x1814; unsigned short x1815; void*x1816; short x1817; void*x1818; void*x1819; void*x1820; void*x1821; unsigned long x1822; int x1823; unsigned int x1824/* : ? */; const void*x1825; const void*x1826; void*x1827; void*x1828; const int x1829; void x1830; void*x1831; void*x1832; void*x1833; void*x1834; const void*x1835; void*x1836; void*x1837; void*x1838; out const void*x1839; short x1840; void*x1841; void*x1842; out void*x1843; void*x1844; void*x1845; int x1846; void*x1847; long doublex1848; void*x1849; void*x1850; void*x1851; out in void*x1852; float x1853; const void*x1854; void*x1855; void*x1856; void*x1857; out const void*x1858; void*x1859; void*x1860; out void*x1861; void*x1862; void*x1863; int x1864; void*x1865; long doublex1866; void*x1867; void*x1868; void*x1869; out in void*x1870; void*x1871; void*x1872; void*x1873; void*x1874; void*x1875; void*x1876; void*x1877; void*x1878; void*x1879; void*x1880; void*x1881; void*x1882; void*x1883; void*x1884; void*x1885; void*x1886; void*x1887; void*x1888; void*x1889; void*x1890; void*x1891; void*x1892; void*x1893; void*x1894; void*x1895; void*x1896; void*x1897; void*x1898; void*x1899; void*x1900; void*x1901; void*x1902; void*x1903; void*x1904; void*x1905; void*x1906; void*x1907; void*x1908; void*x1909; void*x1910; void*x1911; void*x1912; void*x1913; void*x1914; void*x1915; void*x1916; void*x1917; void*x1918; oneway void*x1919; void*x1920; void*x1921; void*x1922; void*x1923; void*x1924; void*x1925; unsigned short x1926; void*x1927; short x1928; void*x1929; void*x1930; void*x1931; void*x1932; unsigned long x1933; int x1934; unsigned int x1935/* : ? */; const void*x1936; const void*x1937; void*x1938; void*x1939; const int x1940; void x1941; void*x1942; void*x1943; void*x1944; void*x1945; const void*x1946; void*x1947; void*x1948; void*x1949; out const void*x1950; short x1951; void*x1952; void*x1953; void*x1954; void*x1955; short x1956; int x1957; BOOL x1958; short x1959; void*x1960; int x1961; void*x1962; void*x1963; float x1964; const void*x1965; void*x1966; void*x1967; void*x1968; out const void*x1969; void*x1970; void*x1971; void*x1972; void*x1973; short x1974; int x1975; BOOL x1976; short x1977; void*x1978; int x1979; void*x1980; void*x1981; void*x1982; void*x1983; void*x1984; void*x1985; void*x1986; void*x1987; void*x1988; void*x1989; void*x1990; void*x1991; void*x1992; void*x1993; void*x1994; void*x1995; void*x1996; id x1997; void*x1998; void*x1999; id x2000; void*x2001; void*x2002; void*x2003; void*x2004; void*x2005; void*x2006; id x2007; void*x2008; void*x2009; id x2010; void*x2011; void*x2012; void*x2013; void*x2014; char *x2015; void*x2016; id x2017; void*x2018; void*x2019; id x2020; void*x2021; void*x2022; void*x2023; void*x2024; void*x2025; void*x2026; id x2027; void*x2028; void*x2029; id x2030; void*x2031; void*x2032; void*x2033; void*x2034; void*x2035; void*x2036; id x2037; void*x2038; void*x2039; id x2040; void*x2041; void*x2042; void*x2043; void*x2044; void*x2045; void*x2046; id x2047; void*x2048; void*x2049; id x2050; void*x2051; void*x2052; void*x2053; void*x2054; void*x2055; void*x2056; id x2057; void*x2058; void*x2059; id x2060; void*x2061; void*x2062; void*x2063; void*x2064; void*x2065; void*x2066; id x2067; void*x2068; void*x2069; id x2070; void*x2071; void*x2072; void*x2073; void*x2074; void*x2075; void*x2076; id x2077; void*x2078; void*x2079; id x2080; void*x2081; void*x2082; void*x2083; void*x2084; void*x2085; void*x2086; id x2087; void*x2088; void*x2089; id x2090; void*x2091; void*x2092; void*x2093; void*x2094; void*x2095; void*x2096; id x2097; void*x2098; void*x2099; id x2100; void*x2101; void*x2102; void*x2103; void*x2104; void*x2105; void*x2106; id x2107; void*x2108; void*x2109; id x2110; void*x2111; void*x2112; void*x2113; void*x2114; void*x2115; void*x2116; void*x2117; void*x2118; void*x2119; void*x2120; void*x2121; void*x2122; void*x2123; oneway void*x2124; void*x2125; void*x2126; void*x2127; void*x2128; void*x2129; void*x2130; void*x2131; void*x2132; unsigned char x2133; long x2134; out void*x2135; double x2136; short x2137; short x2138; void*x2139; void*x2140; long doublex2141; out void*x2142; in long x2143; out void*x2144; double x2145; unsigned char x2146; out in void*x2147; const out long x2148; long x2149; void*x2150; const void*x2151; void*x2152; void*x2153; void*x2154; void*x2155; void*x2156; void*x2157; void*x2158; void*x2159; void*x2160; oneway void*x2161; void*x2162; void*x2163; void*x2164; void*x2165; void*x2166; void*x2167; void*x2168; void*x2169; unsigned char x2170; long x2171; out void*x2172; double x2173; short x2174; short x2175; void*x2176; void*x2177; long doublex2178; out void*x2179; in long x2180; out void*x2181; double x2182; unsigned char x2183; out in void*x2184; const out long x2185; long x2186; void*x2187; const void*x2188; void*x2189; void*x2190; void*x2191; void*x2192; void*x2193; void*x2194; void*x2195; void*x2196; void*x2197; void*x2198; void*x2199; void*x2200; void*x2201; void*x2202; void*x2203; void*x2204; void*x2205; void*x2206; void*x2207; void*x2208; void*x2209; void*x2210; void*x2211; void*x2212; void*x2213; void*x2214; void*x2215; void*x2216; void*x2217; void*x2218; void*x2219; void*x2220; void*x2221; void*x2222; void*x2223; void*x2224; void*x2225; void*x2226; void*x2227; void*x2228; void*x2229; void*x2230; void*x2231; void*x2232; void*x2233; void*x2234; void*x2235; void*x2236; void*x2237; void*x2238; void*x2239; void*x2240; void*x2241; void*x2242; void*x2243; void*x2244; void*x2245; void*x2246; void*x2247; long long x2248; void*x2249; void*x2250; void*x2251; void*x2252; void*x2253; void*x2254; void*x2255; void*x2256; const void*x2257; void*x2258; void*x2259; short x2260; void*x2261; short x2262; void*x2263; void*x2264; void*x2265; double x2266; void*x2267; void*x2268; void*x2269; void*x2270; void*x2271; void*x2272; void*x2273; int x2274; void*x2275; const void*x2276; void*x2277; void*x2278; short x2279; void*x2280; void*x2281; void*x2282; double x2283; void*x2284; SEL x2285; void*x2286; SEL x2287; void*x2288; void*x2289; void*x2290; void*x2291; void*x2292; void*x2293; void*x2294; SEL x2295; void*x2296; SEL x2297; void*x2298; short x2299; void*x2300; void*x2301; void*x2302; void*x2303; void*x2304; const void*x2305; void*x2306; void*x2307; double x2308; void*x2309; void*x2310; void*x2311; void*x2312; void*x2313; void*x2314; void*x2315; const void*x2316; void*x2317; void*x2318; void*x2319; void*x2320; void*x2321; void*x2322; long x2323; void*x2324; SEL x2325; void*x2326; SEL x2327; void*x2328; void*x2329; void*x2330; void*x2331; void*x2332; in void*x2333; double x2334; void*x2335; void*x2336; void*x2337; const void*x2338; unsigned int x2339; void*x2340; void*x2341; void*x2342; void*x2343; void*x2344; void*x2345; void*x2346; void*x2347; void*x2348; void*x2349; void*x2350; char *x2351; void*x2352; void*x2353; void*x2354; void*x2355; void*x2356; short x2357; void*x2358; void*x2359; void*x2360; double x2361; void*x2362; SEL x2363; void*x2364; SEL x2365; void*x2366; void*x2367; void*x2368; void*x2369; void*x2370; void*x2371; void*x2372; SEL x2373; void*x2374; SEL x2375; void*x2376; void*x2377; void*x2378; long x2379; void*x2380; long x2381; void*x2382; out void*x2383; BOOL x2384; void*x2385; void*x2386; void*x2387; void*x2388; void*x2389; out void*x2390; const void*x2391; void*x2392; void*x2393; short x2394; void*x2395; void*x2396; void*x2397; double x2398; void*x2399; SEL x2400; void*x2401; SEL x2402; void*x2403; void*x2404; void*x2405; void*x2406; void*x2407; void*x2408; void*x2409; SEL x2410; void*x2411; SEL x2412; void*x2413; short x2414; void*x2415; void*x2416; void*x2417; void*x2418; void*x2419; const void*x2420; void*x2421; void*x2422; double x2423; void*x2424; void*x2425; void*x2426; void*x2427; void*x2428; void*x2429; void*x2430; const void*x2431; void*x2432; void*x2433; void*x2434; void*x2435; void*x2436; void*x2437; long x2438; void*x2439; SEL x2440; void*x2441; SEL x2442; void*x2443; void*x2444; void*x2445; void*x2446; void*x2447; in void*x2448; double x2449; void*x2450; void*x2451; void*x2452; const void*x2453; unsigned int x2454; void*x2455; void*x2456; void*x2457; void*x2458; void*x2459; void*x2460; void*x2461; void*x2462; void*x2463; void*x2464; void*x2465; void*x2466; void*x2467; void*x2468; void*x2469; void*x2470; void*x2471; void*x2472; void*x2473; struct x2474; void*x2475; void*x2476; void*x2477; short x2478; void*x2479; void*x2480; void*x2481; const void*x2482; void*x2483; void*x2484; BOOL x2485; void*x2486; void*x2487; void*x2488; void*x2489; void*x2490; short x2491; void*x2492; void*x2493; void*x2494; void*x2495; void*x2496; const void*x2497; void*x2498; void*x2499; double x2500; void*x2501; void*x2502; void*x2503; void*x2504; void*x2505; void*x2506; void*x2507; const void*x2508; void*x2509; void*x2510; void*x2511; void*x2512; void*x2513; void*x2514; long x2515; void*x2516; SEL x2517; void*x2518; SEL x2519; void*x2520; void*x2521; void*x2522; void*x2523; void*x2524; in void*x2525; double x2526; void*x2527; void*x2528; void*x2529; const void*x2530; unsigned int x2531; void*x2532; void*x2533; void*x2534; void*x2535; void*x2536; void*x2537; void*x2538; void*x2539; void*x2540; void*x2541; void*x2542; struct x2543; void*x2544; }*)_descriptorPrivate;
- (id)colorAttachments;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)depthAttachmentPixelFormat;
- (id)description;
- (id)fastBlendDescriptorAtIndex:(unsigned int)arg1;
- (id)fragmentFunction;
- (unsigned int)hash;
- (id)init;
- (BOOL)isAlphaToCoverageEnabled;
- (BOOL)isAlphaToOneEnabled;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isRasterizationEnabled;
- (id)label;
- (void)reset;
- (unsigned int)sampleCount;
- (float)sampleCoverage;
- (unsigned int)sampleMask;
- (id)serializeFragmentData;
- (id)serializedVertexData;
- (void)setAlphaToCoverageEnabled:(BOOL)arg1;
- (void)setAlphaToOneEnabled:(BOOL)arg1;
- (void)setDepthAttachmentPixelFormat:(unsigned int)arg1;
- (void)setFragmentFunction:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setRasterizationEnabled:(BOOL)arg1;
- (void)setSampleCount:(unsigned int)arg1;
- (void)setSampleCoverage:(float)arg1;
- (void)setSampleMask:(unsigned int)arg1;
- (void)setStencilAttachmentPixelFormat:(unsigned int)arg1;
- (void)setVertexDescriptor:(id)arg1;
- (void)setVertexFunction:(id)arg1;
- (unsigned int)stencilAttachmentPixelFormat;
- (void)validateWithDevice:(id)arg1;
- (id)vertexDescriptor;
- (id)vertexFunction;

@end