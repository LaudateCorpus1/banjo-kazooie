#include <ultra64.h>
#include "functions.h"
#include "variables.h"
#include "viint.h"

//#pragma GLOBAL_ASM("asm/nonmatchings/core1/io/viswapbuf/osViSwapBuffer.s")
void osViSwapBuffer(void* frameBufPtr){
    u32 saveMask = __osDisableInt();
    __osViNext->framep = frameBufPtr;
    __osViNext->state |= VI_STATE_10;
    __osRestoreInt(saveMask);
}