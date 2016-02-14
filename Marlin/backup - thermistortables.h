#ifndef THERMISTORTABLES_H_
#define THERMISTORTABLES_H_

#include "Marlin.h"

#define OVERSAMPLENR 16

const short temptable_70[][2] PROGMEM = {
 {19*OVERSAMPLENR,264},
 {23*OVERSAMPLENR,257},
 {28*OVERSAMPLENR,250},
 {29*OVERSAMPLENR,244},
 {34*OVERSAMPLENR,239},
 {35*OVERSAMPLENR,234},
 {41*OVERSAMPLENR,228},
 {45*OVERSAMPLENR,225},
 {48*OVERSAMPLENR,221},
 {52*OVERSAMPLENR,217},
 {58*OVERSAMPLENR,210},
 {68*OVERSAMPLENR,203},
 {72*OVERSAMPLENR,201},
 {75*OVERSAMPLENR,196},
 {86*OVERSAMPLENR,192},
 {89*OVERSAMPLENR,188},
 {106*OVERSAMPLENR,182},
 {120*OVERSAMPLENR,174},
 {131*OVERSAMPLENR,170},
 {143*OVERSAMPLENR,166},
 {152*OVERSAMPLENR,162},
 {168*OVERSAMPLENR,158},
 {184*OVERSAMPLENR,153},
 {203*OVERSAMPLENR,150},
 {221*OVERSAMPLENR,145},
 {240*OVERSAMPLENR,143},
 {288*OVERSAMPLENR,134},
 {343*OVERSAMPLENR,125},
 {404*OVERSAMPLENR,116},
 {479*OVERSAMPLENR,107},
 {553*OVERSAMPLENR,98},
 {629*OVERSAMPLENR,89},
 {710*OVERSAMPLENR,78},
 {781*OVERSAMPLENR,69},
 {844*OVERSAMPLENR,60},
 {892*OVERSAMPLENR,50},
 {932*OVERSAMPLENR,41},
 {970*OVERSAMPLENR,29},
 {1000*OVERSAMPLENR,20},
 {1010*OVERSAMPLENR,10}
};

#define _TT_NAME(_N) temptable_ ## _N
#define TT_NAME(_N) _TT_NAME(_N)

# define HEATER_0_TEMPTABLE TT_NAME(THERMISTORHEATER_0)
# define HEATER_0_TEMPTABLE_LEN (sizeof(HEATER_0_TEMPTABLE)/sizeof(*HEATER_0_TEMPTABLE))

//Set the high and low raw values for the heater, this indicates which raw value is a high or low temperature
#  define HEATER_0_RAW_HI_TEMP 0
#  define HEATER_0_RAW_LO_TEMP 16383

#endif //THERMISTORTABLES_H_
