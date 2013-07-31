#ifndef __6502_CYCLE_TABLE_H_
#define __6502_CYCLE_TABLE_H_
#include <stdint.h>
#include "GenericTypes.h"
BYTE cycleTable[0xFF] = 
{
   7,6,2,8,3,3,5,5,3,2,2,2,4,4,6,6,
   2,5,2,8,4,4,6,6,2,4,2,7,5,5,7,7,
   6,6,2,8,3,3,5,5,4,2,2,2,4,4,6,6,
   2,5,2,8,4,4,6,6,2,4,2,7,5,5,7,7,
   6,6,2,8,3,3,5,5,3,2,2,2,3,4,6,6,
   2,5,2,8,4,4,6,6,2,4,2,7,5,5,7,7,
   6,6,2,8,3,3,5,5,4,2,2,2,5,4,6,6,
   2,5,2,8,4,4,6,6,2,4,2,7,5,5,7,7,
   2,6,2,6,3,3,3,3,2,2,2,2,4,4,4,4,
   2,6,2,6,4,4,4,4,2,5,2,5,5,5,5,5,
   2,6,2,6,3,3,3,3,2,2,2,2,4,4,4,4,
   2,5,2,5,4,4,4,4,2,4,2,5,4,4,4,4,
   2,6,2,8,3,3,5,5,2,2,2,2,4,4,6,6,
   2,5,2,8,4,4,6,6,2,4,2,7,5,5,7,7,
   2,6,2,8,3,3,5,5,2,2,2,2,4,4,6,6,
   2,5,2,8,4,4,6,6,2,4,2,7,5,5,7,7
};
#endif