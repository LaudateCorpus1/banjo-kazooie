#include <ultra64.h>
#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/core1/code_7F60/func_80245980.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core1/code_7F60/func_802459A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core1/code_7F60/func_80245A7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core1/code_7F60/func_80245BE4.s")

void _guMtxIdentF_80245D44(float mf[4][4]) //static
{
	int	i, j;

	for (i=0; i<4; i++)
	for (j=0; j<4; j++)
		if (i == j) mf[i][j] = 1.0;
		else mf[i][j] = 0.0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core1/code_7F60/func_80245DCC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core1/code_7F60/func_80245F34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core1/code_7F60/func_80245FB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core1/code_7F60/func_802462D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core1/code_7F60/func_8024632C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core1/code_7F60/func_802464B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core1/code_7F60/func_80246510.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core1/code_7F60/func_80246570.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core1/code_7F60/func_802465D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core1/code_7F60/func_80246624.s")
