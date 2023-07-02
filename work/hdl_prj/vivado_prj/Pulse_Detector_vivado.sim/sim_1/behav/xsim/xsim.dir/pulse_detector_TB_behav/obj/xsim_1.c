/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/


#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/


#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
typedef void (*funcp)(char *, char *);
extern int main(int, char**);
extern void execute_1035(char*, char *);
extern void execute_1036(char*, char *);
extern void execute_2011(char*, char *);
extern void execute_2012(char*, char *);
extern void execute_2013(char*, char *);
extern void execute_2014(char*, char *);
extern void execute_2015(char*, char *);
extern void execute_2016(char*, char *);
extern void execute_3(char*, char *);
extern void execute_5(char*, char *);
extern void execute_1027(char*, char *);
extern void execute_1029(char*, char *);
extern void execute_1031(char*, char *);
extern void execute_1033(char*, char *);
extern void vlog_simple_process_execute_0_fast_no_reg_no_agg(char*, char*, char*);
extern void execute_2003(char*, char *);
extern void execute_2004(char*, char *);
extern void execute_2005(char*, char *);
extern void execute_2008(char*, char *);
extern void execute_2009(char*, char *);
extern void execute_2010(char*, char *);
extern void vlog_const_rhs_process_execute_0_fast_no_reg_no_agg(char*, char*, char*);
extern void execute_9(char*, char *);
extern void execute_11(char*, char *);
extern void execute_13(char*, char *);
extern void execute_16(char*, char *);
extern void execute_345(char*, char *);
extern void execute_347(char*, char *);
extern void execute_677(char*, char *);
extern void execute_679(char*, char *);
extern void execute_1009(char*, char *);
extern void execute_1011(char*, char *);
extern void execute_1043(char*, char *);
extern void execute_1341(char*, char *);
extern void execute_1342(char*, char *);
extern void execute_1343(char*, char *);
extern void execute_1641(char*, char *);
extern void execute_1642(char*, char *);
extern void execute_1643(char*, char *);
extern void execute_1644(char*, char *);
extern void vlog_simple_process_execute_1_fast_no_reg_no_agg(char*, char*, char*);
extern void execute_1646(char*, char *);
extern void execute_1944(char*, char *);
extern void execute_1945(char*, char *);
extern void execute_1946(char*, char *);
extern void execute_1947(char*, char *);
extern void execute_1950(char*, char *);
extern void execute_1951(char*, char *);
extern void execute_1952(char*, char *);
extern void execute_1953(char*, char *);
extern void execute_1954(char*, char *);
extern void execute_1955(char*, char *);
extern void execute_1044(char*, char *);
extern void execute_1046(char*, char *);
extern void execute_1048(char*, char *);
extern void execute_1050(char*, char *);
extern void execute_1052(char*, char *);
extern void execute_1054(char*, char *);
extern void execute_1056(char*, char *);
extern void execute_1058(char*, char *);
extern void execute_1060(char*, char *);
extern void execute_1062(char*, char *);
extern void execute_1064(char*, char *);
extern void execute_1066(char*, char *);
extern void execute_1068(char*, char *);
extern void execute_1070(char*, char *);
extern void execute_1072(char*, char *);
extern void execute_1074(char*, char *);
extern void execute_1076(char*, char *);
extern void execute_1078(char*, char *);
extern void execute_1080(char*, char *);
extern void execute_1082(char*, char *);
extern void execute_1084(char*, char *);
extern void execute_1086(char*, char *);
extern void execute_1088(char*, char *);
extern void execute_1090(char*, char *);
extern void execute_1092(char*, char *);
extern void execute_1094(char*, char *);
extern void execute_1096(char*, char *);
extern void execute_1098(char*, char *);
extern void execute_1100(char*, char *);
extern void execute_1102(char*, char *);
extern void execute_1104(char*, char *);
extern void execute_1106(char*, char *);
extern void execute_1108(char*, char *);
extern void execute_1110(char*, char *);
extern void execute_1112(char*, char *);
extern void execute_1114(char*, char *);
extern void execute_1116(char*, char *);
extern void execute_1118(char*, char *);
extern void execute_1120(char*, char *);
extern void execute_1122(char*, char *);
extern void execute_1124(char*, char *);
extern void execute_1126(char*, char *);
extern void execute_1128(char*, char *);
extern void execute_1130(char*, char *);
extern void execute_1132(char*, char *);
extern void execute_1134(char*, char *);
extern void execute_1136(char*, char *);
extern void execute_1138(char*, char *);
extern void execute_1140(char*, char *);
extern void execute_1142(char*, char *);
extern void execute_1144(char*, char *);
extern void execute_1146(char*, char *);
extern void execute_1148(char*, char *);
extern void execute_1150(char*, char *);
extern void execute_1152(char*, char *);
extern void execute_1154(char*, char *);
extern void execute_1156(char*, char *);
extern void execute_1158(char*, char *);
extern void execute_1160(char*, char *);
extern void execute_1162(char*, char *);
extern void execute_1164(char*, char *);
extern void execute_1166(char*, char *);
extern void execute_1168(char*, char *);
extern void execute_1170(char*, char *);
extern void execute_19(char*, char *);
extern void execute_341(char*, char *);
extern void execute_343(char*, char *);
extern void execute_1172(char*, char *);
extern void execute_1173(char*, char *);
extern void execute_1174(char*, char *);
extern void execute_1175(char*, char *);
extern void execute_1176(char*, char *);
extern void execute_1177(char*, char *);
extern void execute_1178(char*, char *);
extern void execute_1179(char*, char *);
extern void execute_1180(char*, char *);
extern void execute_1181(char*, char *);
extern void execute_1182(char*, char *);
extern void execute_1183(char*, char *);
extern void execute_1184(char*, char *);
extern void execute_1185(char*, char *);
extern void execute_1186(char*, char *);
extern void execute_1187(char*, char *);
extern void execute_1188(char*, char *);
extern void execute_1189(char*, char *);
extern void execute_1190(char*, char *);
extern void execute_1191(char*, char *);
extern void execute_1192(char*, char *);
extern void execute_1193(char*, char *);
extern void execute_1194(char*, char *);
extern void execute_1195(char*, char *);
extern void execute_1196(char*, char *);
extern void execute_1197(char*, char *);
extern void execute_1198(char*, char *);
extern void execute_1199(char*, char *);
extern void execute_1200(char*, char *);
extern void execute_1201(char*, char *);
extern void execute_1202(char*, char *);
extern void execute_1203(char*, char *);
extern void execute_1204(char*, char *);
extern void execute_1205(char*, char *);
extern void execute_1206(char*, char *);
extern void execute_1207(char*, char *);
extern void execute_1208(char*, char *);
extern void execute_1209(char*, char *);
extern void execute_1338(char*, char *);
extern void execute_22(char*, char *);
extern void execute_23(char*, char *);
extern void execute_25(char*, char *);
extern void execute_1344(char*, char *);
extern void execute_1346(char*, char *);
extern void execute_1348(char*, char *);
extern void execute_1350(char*, char *);
extern void execute_1352(char*, char *);
extern void execute_1354(char*, char *);
extern void execute_1356(char*, char *);
extern void execute_1358(char*, char *);
extern void execute_1360(char*, char *);
extern void execute_1362(char*, char *);
extern void execute_1364(char*, char *);
extern void execute_1366(char*, char *);
extern void execute_1368(char*, char *);
extern void execute_1370(char*, char *);
extern void execute_1372(char*, char *);
extern void execute_1374(char*, char *);
extern void execute_1376(char*, char *);
extern void execute_1378(char*, char *);
extern void execute_1380(char*, char *);
extern void execute_1382(char*, char *);
extern void execute_1384(char*, char *);
extern void execute_1386(char*, char *);
extern void execute_1388(char*, char *);
extern void execute_1390(char*, char *);
extern void execute_1392(char*, char *);
extern void execute_1394(char*, char *);
extern void execute_1396(char*, char *);
extern void execute_1398(char*, char *);
extern void execute_1400(char*, char *);
extern void execute_1402(char*, char *);
extern void execute_1404(char*, char *);
extern void execute_1406(char*, char *);
extern void execute_1408(char*, char *);
extern void execute_1410(char*, char *);
extern void execute_1412(char*, char *);
extern void execute_1414(char*, char *);
extern void execute_1416(char*, char *);
extern void execute_1418(char*, char *);
extern void execute_1420(char*, char *);
extern void execute_1422(char*, char *);
extern void execute_1424(char*, char *);
extern void execute_1426(char*, char *);
extern void execute_1428(char*, char *);
extern void execute_1430(char*, char *);
extern void execute_1432(char*, char *);
extern void execute_1434(char*, char *);
extern void execute_1436(char*, char *);
extern void execute_1438(char*, char *);
extern void execute_1440(char*, char *);
extern void execute_1442(char*, char *);
extern void execute_1444(char*, char *);
extern void execute_1446(char*, char *);
extern void execute_1448(char*, char *);
extern void execute_1450(char*, char *);
extern void execute_1452(char*, char *);
extern void execute_1454(char*, char *);
extern void execute_1456(char*, char *);
extern void execute_1458(char*, char *);
extern void execute_1460(char*, char *);
extern void execute_1462(char*, char *);
extern void execute_1464(char*, char *);
extern void execute_1466(char*, char *);
extern void execute_1468(char*, char *);
extern void execute_1470(char*, char *);
extern void execute_1647(char*, char *);
extern void execute_1649(char*, char *);
extern void execute_1651(char*, char *);
extern void execute_1653(char*, char *);
extern void execute_1655(char*, char *);
extern void execute_1657(char*, char *);
extern void execute_1659(char*, char *);
extern void execute_1661(char*, char *);
extern void execute_1663(char*, char *);
extern void execute_1665(char*, char *);
extern void execute_1667(char*, char *);
extern void execute_1669(char*, char *);
extern void execute_1671(char*, char *);
extern void execute_1673(char*, char *);
extern void execute_1675(char*, char *);
extern void execute_1677(char*, char *);
extern void execute_1679(char*, char *);
extern void execute_1681(char*, char *);
extern void execute_1683(char*, char *);
extern void execute_1685(char*, char *);
extern void execute_1687(char*, char *);
extern void execute_1689(char*, char *);
extern void execute_1691(char*, char *);
extern void execute_1693(char*, char *);
extern void execute_1695(char*, char *);
extern void execute_1697(char*, char *);
extern void execute_1699(char*, char *);
extern void execute_1701(char*, char *);
extern void execute_1703(char*, char *);
extern void execute_1705(char*, char *);
extern void execute_1707(char*, char *);
extern void execute_1709(char*, char *);
extern void execute_1711(char*, char *);
extern void execute_1713(char*, char *);
extern void execute_1715(char*, char *);
extern void execute_1717(char*, char *);
extern void execute_1719(char*, char *);
extern void execute_1721(char*, char *);
extern void execute_1723(char*, char *);
extern void execute_1725(char*, char *);
extern void execute_1727(char*, char *);
extern void execute_1729(char*, char *);
extern void execute_1731(char*, char *);
extern void execute_1733(char*, char *);
extern void execute_1735(char*, char *);
extern void execute_1737(char*, char *);
extern void execute_1739(char*, char *);
extern void execute_1741(char*, char *);
extern void execute_1743(char*, char *);
extern void execute_1745(char*, char *);
extern void execute_1747(char*, char *);
extern void execute_1749(char*, char *);
extern void execute_1751(char*, char *);
extern void execute_1753(char*, char *);
extern void execute_1755(char*, char *);
extern void execute_1757(char*, char *);
extern void execute_1759(char*, char *);
extern void execute_1761(char*, char *);
extern void execute_1763(char*, char *);
extern void execute_1765(char*, char *);
extern void execute_1767(char*, char *);
extern void execute_1769(char*, char *);
extern void execute_1771(char*, char *);
extern void execute_1773(char*, char *);
extern void execute_1014(char*, char *);
extern void execute_1016(char*, char *);
extern void execute_1018(char*, char *);
extern void execute_1020(char*, char *);
extern void execute_1956(char*, char *);
extern void execute_1957(char*, char *);
extern void execute_1958(char*, char *);
extern void execute_1959(char*, char *);
extern void execute_1960(char*, char *);
extern void execute_1961(char*, char *);
extern void execute_1962(char*, char *);
extern void execute_1963(char*, char *);
extern void execute_1023(char*, char *);
extern void execute_1965(char*, char *);
extern void execute_1966(char*, char *);
extern void execute_1967(char*, char *);
extern void execute_1968(char*, char *);
extern void execute_1969(char*, char *);
extern void execute_1970(char*, char *);
extern void execute_1971(char*, char *);
extern void execute_1972(char*, char *);
extern void execute_1973(char*, char *);
extern void execute_1974(char*, char *);
extern void execute_1975(char*, char *);
extern void execute_1976(char*, char *);
extern void execute_1977(char*, char *);
extern void execute_1978(char*, char *);
extern void execute_1979(char*, char *);
extern void execute_1980(char*, char *);
extern void execute_1981(char*, char *);
extern void execute_1982(char*, char *);
extern void execute_1983(char*, char *);
extern void execute_1984(char*, char *);
extern void execute_1985(char*, char *);
extern void execute_1986(char*, char *);
extern void execute_1987(char*, char *);
extern void execute_1026(char*, char *);
extern void execute_1988(char*, char *);
extern void execute_1989(char*, char *);
extern void execute_1990(char*, char *);
extern void execute_1991(char*, char *);
extern void execute_1992(char*, char *);
extern void execute_1993(char*, char *);
extern void execute_1994(char*, char *);
extern void execute_1995(char*, char *);
extern void execute_1996(char*, char *);
extern void execute_1997(char*, char *);
extern void execute_1998(char*, char *);
extern void execute_1038(char*, char *);
extern void execute_1039(char*, char *);
extern void execute_1040(char*, char *);
extern void execute_2017(char*, char *);
extern void execute_2018(char*, char *);
extern void execute_2019(char*, char *);
extern void execute_2020(char*, char *);
extern void execute_2021(char*, char *);
extern void vlog_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
funcp funcTab[346] = {(funcp)execute_1035, (funcp)execute_1036, (funcp)execute_2011, (funcp)execute_2012, (funcp)execute_2013, (funcp)execute_2014, (funcp)execute_2015, (funcp)execute_2016, (funcp)execute_3, (funcp)execute_5, (funcp)execute_1027, (funcp)execute_1029, (funcp)execute_1031, (funcp)execute_1033, (funcp)vlog_simple_process_execute_0_fast_no_reg_no_agg, (funcp)execute_2003, (funcp)execute_2004, (funcp)execute_2005, (funcp)execute_2008, (funcp)execute_2009, (funcp)execute_2010, (funcp)vlog_const_rhs_process_execute_0_fast_no_reg_no_agg, (funcp)execute_9, (funcp)execute_11, (funcp)execute_13, (funcp)execute_16, (funcp)execute_345, (funcp)execute_347, (funcp)execute_677, (funcp)execute_679, (funcp)execute_1009, (funcp)execute_1011, (funcp)execute_1043, (funcp)execute_1341, (funcp)execute_1342, (funcp)execute_1343, (funcp)execute_1641, (funcp)execute_1642, (funcp)execute_1643, (funcp)execute_1644, (funcp)vlog_simple_process_execute_1_fast_no_reg_no_agg, (funcp)execute_1646, (funcp)execute_1944, (funcp)execute_1945, (funcp)execute_1946, (funcp)execute_1947, (funcp)execute_1950, (funcp)execute_1951, (funcp)execute_1952, (funcp)execute_1953, (funcp)execute_1954, (funcp)execute_1955, (funcp)execute_1044, (funcp)execute_1046, (funcp)execute_1048, (funcp)execute_1050, (funcp)execute_1052, (funcp)execute_1054, (funcp)execute_1056, (funcp)execute_1058, (funcp)execute_1060, (funcp)execute_1062, (funcp)execute_1064, (funcp)execute_1066, (funcp)execute_1068, (funcp)execute_1070, (funcp)execute_1072, (funcp)execute_1074, (funcp)execute_1076, (funcp)execute_1078, (funcp)execute_1080, (funcp)execute_1082, (funcp)execute_1084, (funcp)execute_1086, (funcp)execute_1088, (funcp)execute_1090, (funcp)execute_1092, (funcp)execute_1094, (funcp)execute_1096, (funcp)execute_1098, (funcp)execute_1100, (funcp)execute_1102, (funcp)execute_1104, (funcp)execute_1106, (funcp)execute_1108, (funcp)execute_1110, (funcp)execute_1112, (funcp)execute_1114, (funcp)execute_1116, (funcp)execute_1118, (funcp)execute_1120, (funcp)execute_1122, (funcp)execute_1124, (funcp)execute_1126, (funcp)execute_1128, (funcp)execute_1130, (funcp)execute_1132, (funcp)execute_1134, (funcp)execute_1136, (funcp)execute_1138, (funcp)execute_1140, (funcp)execute_1142, (funcp)execute_1144, (funcp)execute_1146, (funcp)execute_1148, (funcp)execute_1150, (funcp)execute_1152, (funcp)execute_1154, (funcp)execute_1156, (funcp)execute_1158, (funcp)execute_1160, (funcp)execute_1162, (funcp)execute_1164, (funcp)execute_1166, (funcp)execute_1168, (funcp)execute_1170, (funcp)execute_19, (funcp)execute_341, (funcp)execute_343, (funcp)execute_1172, (funcp)execute_1173, (funcp)execute_1174, (funcp)execute_1175, (funcp)execute_1176, (funcp)execute_1177, (funcp)execute_1178, (funcp)execute_1179, (funcp)execute_1180, (funcp)execute_1181, (funcp)execute_1182, (funcp)execute_1183, (funcp)execute_1184, (funcp)execute_1185, (funcp)execute_1186, (funcp)execute_1187, (funcp)execute_1188, (funcp)execute_1189, (funcp)execute_1190, (funcp)execute_1191, (funcp)execute_1192, (funcp)execute_1193, (funcp)execute_1194, (funcp)execute_1195, (funcp)execute_1196, (funcp)execute_1197, (funcp)execute_1198, (funcp)execute_1199, (funcp)execute_1200, (funcp)execute_1201, (funcp)execute_1202, (funcp)execute_1203, (funcp)execute_1204, (funcp)execute_1205, (funcp)execute_1206, (funcp)execute_1207, (funcp)execute_1208, (funcp)execute_1209, (funcp)execute_1338, (funcp)execute_22, (funcp)execute_23, (funcp)execute_25, (funcp)execute_1344, (funcp)execute_1346, (funcp)execute_1348, (funcp)execute_1350, (funcp)execute_1352, (funcp)execute_1354, (funcp)execute_1356, (funcp)execute_1358, (funcp)execute_1360, (funcp)execute_1362, (funcp)execute_1364, (funcp)execute_1366, (funcp)execute_1368, (funcp)execute_1370, (funcp)execute_1372, (funcp)execute_1374, (funcp)execute_1376, (funcp)execute_1378, (funcp)execute_1380, (funcp)execute_1382, (funcp)execute_1384, (funcp)execute_1386, (funcp)execute_1388, (funcp)execute_1390, (funcp)execute_1392, (funcp)execute_1394, (funcp)execute_1396, (funcp)execute_1398, (funcp)execute_1400, (funcp)execute_1402, (funcp)execute_1404, (funcp)execute_1406, (funcp)execute_1408, (funcp)execute_1410, (funcp)execute_1412, (funcp)execute_1414, (funcp)execute_1416, (funcp)execute_1418, (funcp)execute_1420, (funcp)execute_1422, (funcp)execute_1424, (funcp)execute_1426, (funcp)execute_1428, (funcp)execute_1430, (funcp)execute_1432, (funcp)execute_1434, (funcp)execute_1436, (funcp)execute_1438, (funcp)execute_1440, (funcp)execute_1442, (funcp)execute_1444, (funcp)execute_1446, (funcp)execute_1448, (funcp)execute_1450, (funcp)execute_1452, (funcp)execute_1454, (funcp)execute_1456, (funcp)execute_1458, (funcp)execute_1460, (funcp)execute_1462, (funcp)execute_1464, (funcp)execute_1466, (funcp)execute_1468, (funcp)execute_1470, (funcp)execute_1647, (funcp)execute_1649, (funcp)execute_1651, (funcp)execute_1653, (funcp)execute_1655, (funcp)execute_1657, (funcp)execute_1659, (funcp)execute_1661, (funcp)execute_1663, (funcp)execute_1665, (funcp)execute_1667, (funcp)execute_1669, (funcp)execute_1671, (funcp)execute_1673, (funcp)execute_1675, (funcp)execute_1677, (funcp)execute_1679, (funcp)execute_1681, (funcp)execute_1683, (funcp)execute_1685, (funcp)execute_1687, (funcp)execute_1689, (funcp)execute_1691, (funcp)execute_1693, (funcp)execute_1695, (funcp)execute_1697, (funcp)execute_1699, (funcp)execute_1701, (funcp)execute_1703, (funcp)execute_1705, (funcp)execute_1707, (funcp)execute_1709, (funcp)execute_1711, (funcp)execute_1713, (funcp)execute_1715, (funcp)execute_1717, (funcp)execute_1719, (funcp)execute_1721, (funcp)execute_1723, (funcp)execute_1725, (funcp)execute_1727, (funcp)execute_1729, (funcp)execute_1731, (funcp)execute_1733, (funcp)execute_1735, (funcp)execute_1737, (funcp)execute_1739, (funcp)execute_1741, (funcp)execute_1743, (funcp)execute_1745, (funcp)execute_1747, (funcp)execute_1749, (funcp)execute_1751, (funcp)execute_1753, (funcp)execute_1755, (funcp)execute_1757, (funcp)execute_1759, (funcp)execute_1761, (funcp)execute_1763, (funcp)execute_1765, (funcp)execute_1767, (funcp)execute_1769, (funcp)execute_1771, (funcp)execute_1773, (funcp)execute_1014, (funcp)execute_1016, (funcp)execute_1018, (funcp)execute_1020, (funcp)execute_1956, (funcp)execute_1957, (funcp)execute_1958, (funcp)execute_1959, (funcp)execute_1960, (funcp)execute_1961, (funcp)execute_1962, (funcp)execute_1963, (funcp)execute_1023, (funcp)execute_1965, (funcp)execute_1966, (funcp)execute_1967, (funcp)execute_1968, (funcp)execute_1969, (funcp)execute_1970, (funcp)execute_1971, (funcp)execute_1972, (funcp)execute_1973, (funcp)execute_1974, (funcp)execute_1975, (funcp)execute_1976, (funcp)execute_1977, (funcp)execute_1978, (funcp)execute_1979, (funcp)execute_1980, (funcp)execute_1981, (funcp)execute_1982, (funcp)execute_1983, (funcp)execute_1984, (funcp)execute_1985, (funcp)execute_1986, (funcp)execute_1987, (funcp)execute_1026, (funcp)execute_1988, (funcp)execute_1989, (funcp)execute_1990, (funcp)execute_1991, (funcp)execute_1992, (funcp)execute_1993, (funcp)execute_1994, (funcp)execute_1995, (funcp)execute_1996, (funcp)execute_1997, (funcp)execute_1998, (funcp)execute_1038, (funcp)execute_1039, (funcp)execute_1040, (funcp)execute_2017, (funcp)execute_2018, (funcp)execute_2019, (funcp)execute_2020, (funcp)execute_2021, (funcp)vlog_transfunc_eventcallback};
const int NumRelocateId= 346;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/pulse_detector_TB_behav/xsim.reloc",  (void **)funcTab, 346);

	/*Populate the transaction function pointer field in the whole net structure */
}

void sensitize(char *dp)
{
	iki_sensitize(dp, "xsim.dir/pulse_detector_TB_behav/xsim.reloc");
}

void simulate(char *dp)
{
	iki_schedule_processes_at_time_zero(dp, "xsim.dir/pulse_detector_TB_behav/xsim.reloc");
	// Initialize Verilog nets in mixed simulation, for the cases when the value at time 0 should be propagated from the mixed language Vhdl net
	iki_execute_processes();

	// Schedule resolution functions for the multiply driven Verilog nets that have strength
	// Schedule transaction functions for the singly driven Verilog nets that have strength

}
#include "iki_bridge.h"
void relocate(char *);

void sensitize(char *);

void simulate(char *);

extern SYSTEMCLIB_IMP_DLLSPEC void local_register_implicit_channel(int, char*);
extern void implicit_HDL_SCinstatiate();

extern SYSTEMCLIB_IMP_DLLSPEC int xsim_argc_copy ;
extern SYSTEMCLIB_IMP_DLLSPEC char** xsim_argv_copy ;

int main(int argc, char **argv)
{
    iki_heap_initialize("ms", "isimmm", 0, 2147483648) ;
    iki_set_sv_type_file_path_name("xsim.dir/pulse_detector_TB_behav/xsim.svtype");
    iki_set_crvs_dump_file_path_name("xsim.dir/pulse_detector_TB_behav/xsim.crvsdump");
    void* design_handle = iki_create_design("xsim.dir/pulse_detector_TB_behav/xsim.mem", (void *)relocate, (void *)sensitize, (void *)simulate, 0, isimBridge_getWdbWriter(), 0, argc, argv);
     iki_set_rc_trial_count(100);
    (void) design_handle;
    return iki_simulate_design();
}
