#include <ultra64.h>
#include "functions.h"
#include "variables.h"

extern void func_802ECA7C(s32, s32 (*)[3], f32, s32);

/* typedefs and declarations */
typedef struct {
    s16 unk0;
    f32 unk4[3];
    s16 unk10;
    u8  pad12[2];
}Struct_RBB_47D0;

typedef struct {
    u8 unk0;
    u8 pad1[3];
    Struct_RBB_47D0 *unk4;
    f32 unk8;
    s32 unkC;
}ActorLocal_RBB_47D0;

Actor *func_8038AD9C(ActorMarker *marker, Gfx** gdl, Mtx** mptr, s32 arg3);
void func_8038AEB8(Actor *this);


/* .data */
Struct_RBB_47D0 D_80390870[4] = {
    {0x1BF, {-3950.0f, 690.0f, -350.0f}, 1},
    {0x1C0, {-3950.0f, 690.0f, 0.0f}, 2},
    {0x1C1, {-3950.0f, 690.0f, 350.0f}, 3},
    0
};

extern ActorInfo D_803908C0 = {
    0x195, 0x1BF, 0x413, 0x0, NULL,
    func_8038AEB8, NULL, func_8038AD9C,
    {0, 0, 0, 0}, 0.0f, {0,0,0,0}
};
extern ActorInfo D_803908E4 = {
    0x196, 0x1C0, 0x414, 0x0, NULL,
    func_8038AEB8, NULL, func_8038AD9C,
    {0, 0, 0, 0}, 0.0f, {0,0,0,0}
};

extern ActorInfo D_80390908 = {
    0x197, 0x1C1, 0x415, 0x0, NULL,
    func_8038AEB8, NULL, func_8038AD9C,
    {0, 0, 0, 0}, 0.0f, {0,0,0,0}
};

s32 D_8039092C[3] = { 0, 0xFF, 0};
s32 D_80390938[3] = { 0xFF, 0, 0};

/* .code */
Struct_RBB_47D0 *func_8038ABC0(Actor *arg0){
    Struct_RBB_47D0 *iPtr = D_80390870;
    while(iPtr->unk0 != 0){
        if(iPtr->unk0 == arg0->modelCacheIndex)
            return iPtr;
        iPtr++;
    }
    return NULL;
}   

void func_8038AC18(Actor *this, s32 new_state){
    ActorLocal_RBB_47D0 *local = (ActorLocal_RBB_47D0 *)&this->local;
    Actor *other;
    local->unk8 = 0.0f;
    if(new_state == 2){
        func_8030E6D4(0x90);
        local->unkC = func_802EC9B4(func_8033A148(func_80330B1C(this->marker)));
        
        mapSpecificFlags_set(local->unk4->unk10, TRUE);
        this->position_y -= 30.0f;
        local->unk8 = 1.0f;
        other = func_80326EEC(0x1c5);
        if(other){
            local->unk0 = func_8038B56C(other, this->modelCacheIndex - 0x1be, this);
        }
    }//L8038ACD0

    if(this->state == 2){
        this->position_x = local->unk4->unk4[0];
        this->position_y = local->unk4->unk4[1];
        this->position_z = local->unk4->unk4[2];
        func_802EC994(local->unkC);
    }
    this->state = new_state;
}

void func_8038AD3C(ActorMarker *marker, s32 arg1){
    Actor *actor = marker_getActor(marker);
    if(actor->state == 1)
        func_8038AC18(actor, 2);
}

void func_8038AD7C(Actor *this){
    func_8038AC18(this, 0);
}

Actor *func_8038AD9C(ActorMarker *marker, Gfx **gdl, Mtx **mptr, s32 arg3){
    Actor * actor = marker_getActor(marker);
    ActorLocal_RBB_47D0 *local = (ActorLocal_RBB_47D0 *)&actor->local;
    s32 temp_v0;
    f32 pad0;
    s32 (*sp1C)[3];
    

    if(actor->state == 0)
        return actor;
    
    if( actor->state == 2 
        && local->unk0 != 0
    ){
        temp_v0 = func_80330B1C(marker);
        sp1C = (local->unk0 == 2) ? &D_80390938 : &D_8039092C;
        func_802ECA7C(local->unkC, sp1C, 
            (local->unk4->unk4[1] - actor->position_y)/30.0, 
            func_8033A148(temp_v0, sp1C)
        );
        func_8033A4C0(local->unkC);
    }
    return func_80325888(marker, gdl, mptr, arg3);
}

void func_8038AEB8(Actor *this){
    ActorLocal_RBB_47D0 *local = (ActorLocal_RBB_47D0 *)&this->local;
    f32 sp20 = func_8033DD9C();
    s32 tmp;
    
    if(!this->unk16C_4){
        this->unk16C_4 = 1;
        this->marker->propPtr->unk8_3 = 1;
        this->marker->unk30 = func_8038AD7C;
        func_803300A8(this->marker, NULL, func_8038AD3C, NULL);
        local->unk4 = func_8038ABC0(this);
        mapSpecificFlags_set(local->unk4->unk10, FALSE);
        this->position_x = local->unk4->unk4[0];
        this->position_y = local->unk4->unk4[1];
        this->position_z = local->unk4->unk4[2];
        this->yaw = -90.0f;
        func_8038AC18(this, 1);
    }//L8038AF88

    if(func_8025773C(&local->unk8, sp20))
        func_8038AC18(this, 1);

    if(this->state == 2){
        tmp = (s32)this->position_y;
        if(this->position_y < local->unk4->unk4[1])
            this->position_y += 60.0f*sp20;
        
        if( tmp <  local->unk4->unk4[1] - 15.0f
            && local->unk4->unk4[1] - 15.0f <= this->position_y
        ){
            mapSpecificFlags_set(local->unk4->unk10, FALSE);
        }
    }//L8038B044
}
