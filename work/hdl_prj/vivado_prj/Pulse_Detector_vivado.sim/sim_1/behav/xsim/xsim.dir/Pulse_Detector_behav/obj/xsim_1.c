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
extern void execute_2(char*, char *);
extern void execute_4(char*, char *);
extern void execute_1026(char*, char *);
extern void execute_1028(char*, char *);
extern void execute_1030(char*, char *);
extern void execute_1032(char*, char *);
extern void vlog_simple_process_execute_0_fast_no_reg_no_agg(char*, char*, char*);
extern void execute_2000(char*, char *);
extern void execute_2001(char*, char *);
extern void execute_2002(char*, char *);
extern void execute_2005(char*, char *);
extern void execute_2006(char*, char *);
extern void execute_2007(char*, char *);
extern void vlog_const_rhs_process_execute_0_fast_no_reg_no_agg(char*, char*, char*);
extern void execute_8(char*, char *);
extern void execute_10(char*, char *);
extern void execute_12(char*, char *);
extern void execute_15(char*, char *);
extern void execute_344(char*, char *);
extern void execute_346(char*, char *);
extern void execute_676(char*, char *);
extern void execute_678(char*, char *);
extern void execute_1008(char*, char *);
extern void execute_1010(char*, char *);
extern void execute_1040(char*, char *);
extern void execute_1338(char*, char *);
extern void execute_1339(char*, char *);
extern void execute_1340(char*, char *);
extern void execute_1638(char*, char *);
extern void execute_1639(char*, char *);
extern void execute_1640(char*, char *);
extern void execute_1641(char*, char *);
extern void vlog_simple_process_execute_1_fast_no_reg_no_agg(char*, char*, char*);
extern void execute_1643(char*, char *);
extern void execute_1941(char*, char *);
extern void execute_1942(char*, char *);
extern void execute_1943(char*, char *);
extern void execute_1944(char*, char *);
extern void execute_1947(char*, char *);
extern void execute_1948(char*, char *);
extern void execute_1949(char*, char *);
extern void execute_1950(char*, char *);
extern void execute_1951(char*, char *);
extern void execute_1952(char*, char *);
extern void execute_1041(char*, char *);
extern void execute_1043(char*, char *);
extern void execute_1045(char*, char *);
extern void execute_1047(char*, char *);
extern void execute_1049(char*, char *);
extern void execute_1051(char*, char *);
extern void execute_1053(char*, char *);
extern void execute_1055(char*, char *);
extern void execute_1057(char*, char *);
extern void execute_1059(char*, char *);
extern void execute_1061(char*, char *);
extern void execute_1063(char*, char *);
extern void execute_1065(char*, char *);
extern void execute_1067(char*, char *);
extern void execute_1069(char*, char *);
extern void execute_1071(char*, char *);
extern void execute_1073(char*, char *);
extern void execute_1075(char*, char *);
extern void execute_1077(char*, char *);
extern void execute_1079(char*, char *);
extern void execute_1081(char*, char *);
extern void execute_1083(char*, char *);
extern void execute_1085(char*, char *);
extern void execute_1087(char*, char *);
extern void execute_1089(char*, char *);
extern void execute_1091(char*, char *);
extern void execute_1093(char*, char *);
extern void execute_1095(char*, char *);
extern void execute_1097(char*, char *);
extern void execute_1099(char*, char *);
extern void execute_1101(char*, char *);
extern void execute_1103(char*, char *);
extern void execute_1105(char*, char *);
extern void execute_1107(char*, char *);
extern void execute_1109(char*, char *);
extern void execute_1111(char*, char *);
extern void execute_1113(char*, char *);
extern void execute_1115(char*, char *);
extern void execute_1117(char*, char *);
extern void execute_1119(char*, char *);
extern void execute_1121(char*, char *);
extern void execute_1123(char*, char *);
extern void execute_1125(char*, char *);
extern void execute_1127(char*, char *);
extern void execute_1129(char*, char *);
extern void execute_1131(char*, char *);
extern void execute_1133(char*, char *);
extern void execute_1135(char*, char *);
extern void execute_1137(char*, char *);
extern void execute_1139(char*, char *);
extern void execute_1141(char*, char *);
extern void execute_1143(char*, char *);
extern void execute_1145(char*, char *);
extern void execute_1147(char*, char *);
extern void execute_1149(char*, char *);
extern void execute_1151(char*, char *);
extern void execute_1153(char*, char *);
extern void execute_1155(char*, char *);
extern void execute_1157(char*, char *);
extern void execute_1159(char*, char *);
extern void execute_1161(char*, char *);
extern void execute_1163(char*, char *);
extern void execute_1165(char*, char *);
extern void execute_1167(char*, char *);
extern void execute_18(char*, char *);
extern void execute_340(char*, char *);
extern void execute_342(char*, char *);
extern void execute_1169(char*, char *);
extern void execute_1170(char*, char *);
extern void execute_1171(char*, char *);
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
extern void execute_1335(char*, char *);
extern void execute_21(char*, char *);
extern void execute_22(char*, char *);
extern void execute_24(char*, char *);
extern void execute_1341(char*, char *);
extern void execute_1343(char*, char *);
extern void execute_1345(char*, char *);
extern void execute_1347(char*, char *);
extern void execute_1349(char*, char *);
extern void execute_1351(char*, char *);
extern void execute_1353(char*, char *);
extern void execute_1355(char*, char *);
extern void execute_1357(char*, char *);
extern void execute_1359(char*, char *);
extern void execute_1361(char*, char *);
extern void execute_1363(char*, char *);
extern void execute_1365(char*, char *);
extern void execute_1367(char*, char *);
extern void execute_1369(char*, char *);
extern void execute_1371(char*, char *);
extern void execute_1373(char*, char *);
extern void execute_1375(char*, char *);
extern void execute_1377(char*, char *);
extern void execute_1379(char*, char *);
extern void execute_1381(char*, char *);
extern void execute_1383(char*, char *);
extern void execute_1385(char*, char *);
extern void execute_1387(char*, char *);
extern void execute_1389(char*, char *);
extern void execute_1391(char*, char *);
extern void execute_1393(char*, char *);
extern void execute_1395(char*, char *);
extern void execute_1397(char*, char *);
extern void execute_1399(char*, char *);
extern void execute_1401(char*, char *);
extern void execute_1403(char*, char *);
extern void execute_1405(char*, char *);
extern void execute_1407(char*, char *);
extern void execute_1409(char*, char *);
extern void execute_1411(char*, char *);
extern void execute_1413(char*, char *);
extern void execute_1415(char*, char *);
extern void execute_1417(char*, char *);
extern void execute_1419(char*, char *);
extern void execute_1421(char*, char *);
extern void execute_1423(char*, char *);
extern void execute_1425(char*, char *);
extern void execute_1427(char*, char *);
extern void execute_1429(char*, char *);
extern void execute_1431(char*, char *);
extern void execute_1433(char*, char *);
extern void execute_1435(char*, char *);
extern void execute_1437(char*, char *);
extern void execute_1439(char*, char *);
extern void execute_1441(char*, char *);
extern void execute_1443(char*, char *);
extern void execute_1445(char*, char *);
extern void execute_1447(char*, char *);
extern void execute_1449(char*, char *);
extern void execute_1451(char*, char *);
extern void execute_1453(char*, char *);
extern void execute_1455(char*, char *);
extern void execute_1457(char*, char *);
extern void execute_1459(char*, char *);
extern void execute_1461(char*, char *);
extern void execute_1463(char*, char *);
extern void execute_1465(char*, char *);
extern void execute_1467(char*, char *);
extern void execute_1644(char*, char *);
extern void execute_1646(char*, char *);
extern void execute_1648(char*, char *);
extern void execute_1650(char*, char *);
extern void execute_1652(char*, char *);
extern void execute_1654(char*, char *);
extern void execute_1656(char*, char *);
extern void execute_1658(char*, char *);
extern void execute_1660(char*, char *);
extern void execute_1662(char*, char *);
extern void execute_1664(char*, char *);
extern void execute_1666(char*, char *);
extern void execute_1668(char*, char *);
extern void execute_1670(char*, char *);
extern void execute_1672(char*, char *);
extern void execute_1674(char*, char *);
extern void execute_1676(char*, char *);
extern void execute_1678(char*, char *);
extern void execute_1680(char*, char *);
extern void execute_1682(char*, char *);
extern void execute_1684(char*, char *);
extern void execute_1686(char*, char *);
extern void execute_1688(char*, char *);
extern void execute_1690(char*, char *);
extern void execute_1692(char*, char *);
extern void execute_1694(char*, char *);
extern void execute_1696(char*, char *);
extern void execute_1698(char*, char *);
extern void execute_1700(char*, char *);
extern void execute_1702(char*, char *);
extern void execute_1704(char*, char *);
extern void execute_1706(char*, char *);
extern void execute_1708(char*, char *);
extern void execute_1710(char*, char *);
extern void execute_1712(char*, char *);
extern void execute_1714(char*, char *);
extern void execute_1716(char*, char *);
extern void execute_1718(char*, char *);
extern void execute_1720(char*, char *);
extern void execute_1722(char*, char *);
extern void execute_1724(char*, char *);
extern void execute_1726(char*, char *);
extern void execute_1728(char*, char *);
extern void execute_1730(char*, char *);
extern void execute_1732(char*, char *);
extern void execute_1734(char*, char *);
extern void execute_1736(char*, char *);
extern void execute_1738(char*, char *);
extern void execute_1740(char*, char *);
extern void execute_1742(char*, char *);
extern void execute_1744(char*, char *);
extern void execute_1746(char*, char *);
extern void execute_1748(char*, char *);
extern void execute_1750(char*, char *);
extern void execute_1752(char*, char *);
extern void execute_1754(char*, char *);
extern void execute_1756(char*, char *);
extern void execute_1758(char*, char *);
extern void execute_1760(char*, char *);
extern void execute_1762(char*, char *);
extern void execute_1764(char*, char *);
extern void execute_1766(char*, char *);
extern void execute_1768(char*, char *);
extern void execute_1770(char*, char *);
extern void execute_1013(char*, char *);
extern void execute_1015(char*, char *);
extern void execute_1017(char*, char *);
extern void execute_1019(char*, char *);
extern void execute_1953(char*, char *);
extern void execute_1954(char*, char *);
extern void execute_1955(char*, char *);
extern void execute_1956(char*, char *);
extern void execute_1957(char*, char *);
extern void execute_1958(char*, char *);
extern void execute_1959(char*, char *);
extern void execute_1960(char*, char *);
extern void execute_1022(char*, char *);
extern void execute_1962(char*, char *);
extern void execute_1963(char*, char *);
extern void execute_1964(char*, char *);
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
extern void execute_1025(char*, char *);
extern void execute_1985(char*, char *);
extern void execute_1986(char*, char *);
extern void execute_1987(char*, char *);
extern void execute_1988(char*, char *);
extern void execute_1989(char*, char *);
extern void execute_1990(char*, char *);
extern void execute_1991(char*, char *);
extern void execute_1992(char*, char *);
extern void execute_1993(char*, char *);
extern void execute_1994(char*, char *);
extern void execute_1995(char*, char *);
extern void execute_1035(char*, char *);
extern void execute_1036(char*, char *);
extern void execute_1037(char*, char *);
extern void execute_2008(char*, char *);
extern void execute_2009(char*, char *);
extern void execute_2010(char*, char *);
extern void execute_2011(char*, char *);
extern void execute_2012(char*, char *);
extern void vlog_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
funcp funcTab[338] = {(funcp)execute_2, (funcp)execute_4, (funcp)execute_1026, (funcp)execute_1028, (funcp)execute_1030, (funcp)execute_1032, (funcp)vlog_simple_process_execute_0_fast_no_reg_no_agg, (funcp)execute_2000, (funcp)execute_2001, (funcp)execute_2002, (funcp)execute_2005, (funcp)execute_2006, (funcp)execute_2007, (funcp)vlog_const_rhs_process_execute_0_fast_no_reg_no_agg, (funcp)execute_8, (funcp)execute_10, (funcp)execute_12, (funcp)execute_15, (funcp)execute_344, (funcp)execute_346, (funcp)execute_676, (funcp)execute_678, (funcp)execute_1008, (funcp)execute_1010, (funcp)execute_1040, (funcp)execute_1338, (funcp)execute_1339, (funcp)execute_1340, (funcp)execute_1638, (funcp)execute_1639, (funcp)execute_1640, (funcp)execute_1641, (funcp)vlog_simple_process_execute_1_fast_no_reg_no_agg, (funcp)execute_1643, (funcp)execute_1941, (funcp)execute_1942, (funcp)execute_1943, (funcp)execute_1944, (funcp)execute_1947, (funcp)execute_1948, (funcp)execute_1949, (funcp)execute_1950, (funcp)execute_1951, (funcp)execute_1952, (funcp)execute_1041, (funcp)execute_1043, (funcp)execute_1045, (funcp)execute_1047, (funcp)execute_1049, (funcp)execute_1051, (funcp)execute_1053, (funcp)execute_1055, (funcp)execute_1057, (funcp)execute_1059, (funcp)execute_1061, (funcp)execute_1063, (funcp)execute_1065, (funcp)execute_1067, (funcp)execute_1069, (funcp)execute_1071, (funcp)execute_1073, (funcp)execute_1075, (funcp)execute_1077, (funcp)execute_1079, (funcp)execute_1081, (funcp)execute_1083, (funcp)execute_1085, (funcp)execute_1087, (funcp)execute_1089, (funcp)execute_1091, (funcp)execute_1093, (funcp)execute_1095, (funcp)execute_1097, (funcp)execute_1099, (funcp)execute_1101, (funcp)execute_1103, (funcp)execute_1105, (funcp)execute_1107, (funcp)execute_1109, (funcp)execute_1111, (funcp)execute_1113, (funcp)execute_1115, (funcp)execute_1117, (funcp)execute_1119, (funcp)execute_1121, (funcp)execute_1123, (funcp)execute_1125, (funcp)execute_1127, (funcp)execute_1129, (funcp)execute_1131, (funcp)execute_1133, (funcp)execute_1135, (funcp)execute_1137, (funcp)execute_1139, (funcp)execute_1141, (funcp)execute_1143, (funcp)execute_1145, (funcp)execute_1147, (funcp)execute_1149, (funcp)execute_1151, (funcp)execute_1153, (funcp)execute_1155, (funcp)execute_1157, (funcp)execute_1159, (funcp)execute_1161, (funcp)execute_1163, (funcp)execute_1165, (funcp)execute_1167, (funcp)execute_18, (funcp)execute_340, (funcp)execute_342, (funcp)execute_1169, (funcp)execute_1170, (funcp)execute_1171, (funcp)execute_1172, (funcp)execute_1173, (funcp)execute_1174, (funcp)execute_1175, (funcp)execute_1176, (funcp)execute_1177, (funcp)execute_1178, (funcp)execute_1179, (funcp)execute_1180, (funcp)execute_1181, (funcp)execute_1182, (funcp)execute_1183, (funcp)execute_1184, (funcp)execute_1185, (funcp)execute_1186, (funcp)execute_1187, (funcp)execute_1188, (funcp)execute_1189, (funcp)execute_1190, (funcp)execute_1191, (funcp)execute_1192, (funcp)execute_1193, (funcp)execute_1194, (funcp)execute_1195, (funcp)execute_1196, (funcp)execute_1197, (funcp)execute_1198, (funcp)execute_1199, (funcp)execute_1200, (funcp)execute_1201, (funcp)execute_1202, (funcp)execute_1203, (funcp)execute_1204, (funcp)execute_1205, (funcp)execute_1206, (funcp)execute_1335, (funcp)execute_21, (funcp)execute_22, (funcp)execute_24, (funcp)execute_1341, (funcp)execute_1343, (funcp)execute_1345, (funcp)execute_1347, (funcp)execute_1349, (funcp)execute_1351, (funcp)execute_1353, (funcp)execute_1355, (funcp)execute_1357, (funcp)execute_1359, (funcp)execute_1361, (funcp)execute_1363, (funcp)execute_1365, (funcp)execute_1367, (funcp)execute_1369, (funcp)execute_1371, (funcp)execute_1373, (funcp)execute_1375, (funcp)execute_1377, (funcp)execute_1379, (funcp)execute_1381, (funcp)execute_1383, (funcp)execute_1385, (funcp)execute_1387, (funcp)execute_1389, (funcp)execute_1391, (funcp)execute_1393, (funcp)execute_1395, (funcp)execute_1397, (funcp)execute_1399, (funcp)execute_1401, (funcp)execute_1403, (funcp)execute_1405, (funcp)execute_1407, (funcp)execute_1409, (funcp)execute_1411, (funcp)execute_1413, (funcp)execute_1415, (funcp)execute_1417, (funcp)execute_1419, (funcp)execute_1421, (funcp)execute_1423, (funcp)execute_1425, (funcp)execute_1427, (funcp)execute_1429, (funcp)execute_1431, (funcp)execute_1433, (funcp)execute_1435, (funcp)execute_1437, (funcp)execute_1439, (funcp)execute_1441, (funcp)execute_1443, (funcp)execute_1445, (funcp)execute_1447, (funcp)execute_1449, (funcp)execute_1451, (funcp)execute_1453, (funcp)execute_1455, (funcp)execute_1457, (funcp)execute_1459, (funcp)execute_1461, (funcp)execute_1463, (funcp)execute_1465, (funcp)execute_1467, (funcp)execute_1644, (funcp)execute_1646, (funcp)execute_1648, (funcp)execute_1650, (funcp)execute_1652, (funcp)execute_1654, (funcp)execute_1656, (funcp)execute_1658, (funcp)execute_1660, (funcp)execute_1662, (funcp)execute_1664, (funcp)execute_1666, (funcp)execute_1668, (funcp)execute_1670, (funcp)execute_1672, (funcp)execute_1674, (funcp)execute_1676, (funcp)execute_1678, (funcp)execute_1680, (funcp)execute_1682, (funcp)execute_1684, (funcp)execute_1686, (funcp)execute_1688, (funcp)execute_1690, (funcp)execute_1692, (funcp)execute_1694, (funcp)execute_1696, (funcp)execute_1698, (funcp)execute_1700, (funcp)execute_1702, (funcp)execute_1704, (funcp)execute_1706, (funcp)execute_1708, (funcp)execute_1710, (funcp)execute_1712, (funcp)execute_1714, (funcp)execute_1716, (funcp)execute_1718, (funcp)execute_1720, (funcp)execute_1722, (funcp)execute_1724, (funcp)execute_1726, (funcp)execute_1728, (funcp)execute_1730, (funcp)execute_1732, (funcp)execute_1734, (funcp)execute_1736, (funcp)execute_1738, (funcp)execute_1740, (funcp)execute_1742, (funcp)execute_1744, (funcp)execute_1746, (funcp)execute_1748, (funcp)execute_1750, (funcp)execute_1752, (funcp)execute_1754, (funcp)execute_1756, (funcp)execute_1758, (funcp)execute_1760, (funcp)execute_1762, (funcp)execute_1764, (funcp)execute_1766, (funcp)execute_1768, (funcp)execute_1770, (funcp)execute_1013, (funcp)execute_1015, (funcp)execute_1017, (funcp)execute_1019, (funcp)execute_1953, (funcp)execute_1954, (funcp)execute_1955, (funcp)execute_1956, (funcp)execute_1957, (funcp)execute_1958, (funcp)execute_1959, (funcp)execute_1960, (funcp)execute_1022, (funcp)execute_1962, (funcp)execute_1963, (funcp)execute_1964, (funcp)execute_1965, (funcp)execute_1966, (funcp)execute_1967, (funcp)execute_1968, (funcp)execute_1969, (funcp)execute_1970, (funcp)execute_1971, (funcp)execute_1972, (funcp)execute_1973, (funcp)execute_1974, (funcp)execute_1975, (funcp)execute_1976, (funcp)execute_1977, (funcp)execute_1978, (funcp)execute_1979, (funcp)execute_1980, (funcp)execute_1981, (funcp)execute_1982, (funcp)execute_1983, (funcp)execute_1984, (funcp)execute_1025, (funcp)execute_1985, (funcp)execute_1986, (funcp)execute_1987, (funcp)execute_1988, (funcp)execute_1989, (funcp)execute_1990, (funcp)execute_1991, (funcp)execute_1992, (funcp)execute_1993, (funcp)execute_1994, (funcp)execute_1995, (funcp)execute_1035, (funcp)execute_1036, (funcp)execute_1037, (funcp)execute_2008, (funcp)execute_2009, (funcp)execute_2010, (funcp)execute_2011, (funcp)execute_2012, (funcp)vlog_transfunc_eventcallback};
const int NumRelocateId= 338;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/Pulse_Detector_behav/xsim.reloc",  (void **)funcTab, 338);

	/*Populate the transaction function pointer field in the whole net structure */
}

void sensitize(char *dp)
{
	iki_sensitize(dp, "xsim.dir/Pulse_Detector_behav/xsim.reloc");
}

void simulate(char *dp)
{
	iki_schedule_processes_at_time_zero(dp, "xsim.dir/Pulse_Detector_behav/xsim.reloc");
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
    iki_set_sv_type_file_path_name("xsim.dir/Pulse_Detector_behav/xsim.svtype");
    iki_set_crvs_dump_file_path_name("xsim.dir/Pulse_Detector_behav/xsim.crvsdump");
    void* design_handle = iki_create_design("xsim.dir/Pulse_Detector_behav/xsim.mem", (void *)relocate, (void *)sensitize, (void *)simulate, 0, isimBridge_getWdbWriter(), 0, argc, argv);
     iki_set_rc_trial_count(100);
    (void) design_handle;
    return iki_simulate_design();
}
