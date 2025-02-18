#include <ultra64.h>
#include "functions.h"
#include "variables.h"

extern void func_802FAD64(s32);
extern void func_80324DBC(f32, s32, s32, f32 (*)[3], ActorMarker *, void *, void *);

u8 D_803912C8;
f32 D_803912CC;

#ifndef NONMATCHING
#pragma GLOBAL_ASM("asm/nonmatchings/RBB/code_99F0/func_8038FDE0.s")
#else
/*NEEDS static D_803912CC needs .bss defined*/
void func_8038FDE0(s32 arg0){
    D_803912CC = 0.0f;
    
    if(arg0 == 1)  D_803912CC = 6.5f;

    if(arg0 == 2){
        func_80346414(3, 0xf3b);
        func_80346414(9, 1);
    }

    if(arg0 == 3 || arg0 == 4){
        levelSpecificFlags_set(0x27, FALSE);
        levelSpecificFlags_set(0x28, FALSE);
        func_80346414(9,0);
        if(arg0 == 3 && !jiggyscore_isCollected(0x57)){
            timedFunc_set_1(0.5f, (TFQM1)func_802FAD64, 3);
            func_80324DBC(1.0f, 0xb9d, 4, NULL, NULL, NULL, NULL);
        }
        else{
            func_802FAD64(3);
        }
    }//L8038FED4
    D_803912C8 = arg0;
}
#endif

void func_8038FEE8(void){
    if(D_803912C8 == 2)
        func_8038FDE0(4);
}

void func_8038FF18(void){
    D_803912C8 = 0;
    func_8038FDE0(0);
}

void func_8038FF40(void){
    if(D_803912C8 == 2)
        func_8038FDE0(2);
}

void func_8038FF70(void){
    if( D_803912C8 == 0)
        if(levelSpecificFlags_get(0x27) && levelSpecificFlags_get(0x28))
            func_8038FDE0(1);

    if(D_803912C8 == 1)
        if(func_8025773C(&D_803912CC,func_8033DD9C()))
            func_8038FDE0(2);

    if(D_803912C8 == 2)
        if(item_getCount(3) == 0)
            func_8038FDE0(3);

    if(D_803912C8 == 3)
        func_8038FDE0(0);
}