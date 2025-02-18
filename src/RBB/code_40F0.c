#include <ultra64.h>
#include "functions.h"
#include "variables.h"

/* typedefs and declarations */
typedef struct {
    f32 unk0[3];
    f32 unkC[3];
    s16 unk18;
    s16 unk1A;
}Struct_RBB_40F0;

typedef struct {
    s32 unk0;
    f32 unk4[3];
    f32 unk10[3];
    f32 unk1C;
}ActorLocal_RBB_40F0;

void func_8038A724(Actor *this);

/* .data */
Struct_RBB_40F0 D_80390760[4] = {
    {{ 1600.0f, 641.5f, -2700.0f}, {0.0f, 0.0f, 500.0f}, 0x27, 0},
    {{-1600.0f, 641.5f, -2700.0f}, {0.0f, 0.0f, 500.0f}, 0x28, 0},
    {{  300.0f, 641.5f,  -400.0f}, {-500.0f, 0.0f, 0.0f}, 0x27, 1},
    {{ -300.0f, 641.5f,  -400.0f}, {-500.0f, 0.0f, 0.0f}, 0x28, 1},
};

ActorInfo D_803907D0 = {
    0x187, 0x177, 0x406, 0x0, NULL,
    func_8038A724, NULL, func_80325888,
    {0, 0, 0, 0}, 0.0f, {0,0,0,0}
};

ActorInfo D_803907F4 = {
    0x18E, 0x17E, 0x406, 0x0, NULL,
    func_8038A724, NULL, func_80325888,
    {0, 0, 0, 0}, 0.0f, {0,0,0,0}
};

ActorInfo D_80390818 = {
    0x18F, 0x17F, 0x407, 0x0, NULL,
    func_8038A724, NULL, func_80325888,
    {0, 0, 0, 0}, 0.0f, {0,0,0,0}
};

ActorInfo D_8039083C = {
    0x190, 0x180, 0x408, 0x0, NULL,
    func_8038A724, NULL, func_80325888,
    {0, 0, 0, 0}, 0.0f, {0,0,0,0}
};

f32 D_80390860[3] = {1.0f, 0.5f, 0.5f};

/* .code */
f32 func_8038A4E0(void){
    return D_80390860[2*levelSpecificFlags_get(0x27) + levelSpecificFlags_get(0x28)];
}

#ifndef NONMATCHING
#pragma GLOBAL_ASM("asm/nonmatchings/RBB/code_40F0/func_8038A524.s")
#else
void func_8038A524(Actor *this, s32 arg1){
    ActorLocal_RBB_40F0 *local = (ActorLocal_RBB_40F0 *)&this->local;
    //Struct_RBB_40F0 *iPtr = D_80390760;
    // while(1){
    //     local->unk1C = 0.0f;

    //     break;
    // }
    local->unk1C = 0.0f;
L8038A560:
    if(arg1 == 1){
        if(D_80390760[local->unk0].unk1A){
            arg1 = 2;
            goto L8038A560;
        }
        local->unk10[0] = func_8038A4E0()*D_80390760[local->unk0].unkC[0];
        local->unk10[1] = func_8038A4E0()*D_80390760[local->unk0].unkC[1];
        local->unk10[2] = func_8038A4E0()*D_80390760[local->unk0].unkC[2];
    }
    

    if(arg1 == 2){
        local->unk10[0] = func_8038A4E0()*D_80390760[local->unk0].unkC[0];
        local->unk10[1] = func_8038A4E0()*D_80390760[local->unk0].unkC[1];
        local->unk10[2] = func_8038A4E0()*D_80390760[local->unk0].unkC[2];
    }

    if(arg1 == 3){
        local->unk10[2] = 0.0f;
        local->unk10[1] = 0.0f;
        local->unk10[0] = 0.0f;
    }
    this->state = arg1;
}
#endif

#pragma GLOBAL_ASM("asm/nonmatchings/RBB/code_40F0/func_8038A6B8.s")

#ifndef NONMATCHING
#pragma GLOBAL_ASM("asm/nonmatchings/RBB/code_40F0/func_8038A724.s")
#else
void func_8038A724(Actor *this){
    f32 sp1C = func_8033DD9C();
    ActorLocal_RBB_40F0 *local = (ActorLocal_RBB_40F0 *)&this->local;
    
    int i;

    if(!this->unk16C_4){
        this->marker->propPtr->unk8_3 = 1;
        this->unk16C_4 = 1;
        actor_collisionOff(this);
        local->unk0 = 0;
        local->unk0 = (this->modelCacheIndex == 0x17E) ? 1: local->unk0;
        local->unk0 = (this->modelCacheIndex == 0x17F) ? 2: local->unk0;
        local->unk0 = (this->modelCacheIndex == 0x180) ? 3: local->unk0;

        this->position_x = D_80390760[local->unk0].unk0[0];
        this->position_y = D_80390760[local->unk0].unk0[1];
        this->position_z = D_80390760[local->unk0].unk0[2];
        func_8038A524(this, 1);
    }//L8038A884

    this->pitch += local->unk4[0]*sp1C;
    this->yaw += local->unk4[1]*sp1C;
    this->roll += local->unk4[2]*sp1C;

    for(i = 0; i < 3; i++){//L8038A8D4
        if(local->unk10[i] < local->unk4[i]){
            local->unk4[i] -= 75.0f*sp1C;
            local->unk4[i] = MAX(local->unk4[i], local->unk10[i]);
        }//L8038A924
        if(local->unk4[i] < local->unk10[i]){
            local->unk4[i] += 75.0f*sp1C;
            local->unk4[i] = MIN(local->unk10[i], local->unk4[i]);
        }
    }

    if(this->state == 1){
        local->unk10[0] = func_8038A4E0()*D_80390760[local->unk0].unkC[0];
        local->unk10[1] = func_8038A4E0()*D_80390760[local->unk0].unkC[1];
        local->unk10[2] = func_8038A4E0()*D_80390760[local->unk0].unkC[2];
    }
    
    if(this->state == 2){
        if(0.0f < local->unk1C){
            if(func_8025773C(&sp1C, sp1C)){
                func_8038A524(this, 3);
            }//L8038AA8C
        }else{
            if( local->unk4[0] == local->unk10[0]
                && local->unk4[1] == local->unk10[1]
                && local->unk4[2] == local->unk10[2]
            ){
                local->unk1C = 1.0f;
            }
        }
    }//L8038AB04
    
    if(this->state == 3){
        if(0.0f < local->unk1C){
            if(func_8025773C(&sp1C, sp1C)){
                func_8038A524(this, 2);
            }//L8038AA8C
        }else{
            if( local->unk4[0] == local->unk10[0]
                && local->unk4[1] == local->unk10[1]
                && local->unk4[2] == local->unk10[2]
            ){
                local->unk1C = 1.0f;
            }
        }
    }
}
#endif