#include <ultra64.h>
#include "functions.h"
#include "variables.h"

extern f32 func_80309724(f32(*)[3]);
extern void func_80255FE4(f32 [3], f32 [3], f32 [3], f32);
extern void func_802C8F70(f32);
extern int  func_80309EB0(f32(*)[3], f32, f32 (*)[3], s32);
extern int func_803342AC(f32(*)[3], f32(*)[3],f32);

/* typedefs and declarations */
typedef struct {
    f32 *unk0;
    f32 unk4;
    f32 unk8[3];
    f32 unk14[3];
    f32 unk20[3];
    f32 unk2C;
    f32 unk30;
    s32 unk34;
    u8 unk38;
    u8 unk39;
}ActorLocal_RBB_8520;

void func_8038F190(Actor *this, s32 arg1);
void func_8038F4B0(ActorMarker *marker, Gfx **gdl, Mtx **mptr, s32 arg3);
void func_8038F618(Actor *this);


/* .data */
f32 D_80390D80[2] = {1.8f, 1.0f};  

ActorInfo D_80390D88 = {
    0x1B7, 0x2A4, 0x48C, 0x0, NULL,
    func_8038F618, NULL, func_8038F4B0,
    {0, 0, 0, 0}, 0.0f, {0,0,0,0}
};

ActorInfo D_80390DAC = {
    0x1B7, 0x30D, 0x48C, 0x0, NULL,
    func_8038F618, NULL, func_8038F4B0,
    {0, 0, 0, 0}, 0.0f, {0,0,0,0}
};

s32 D_80390DD0[3] = {0xDE, 0xA7, 0x71};
s32 D_80390DDC[4] = {0xFF, 0xFF, 0xFF, 0xFF};
s32 D_80390DEC[4] = {0,0,0,0};

/* .rodata */


/* .bss */
extern f32 D_803912A0[3];

/* .code */
void func_8038E910(Actor *this){
    ActorLocal_RBB_8520 *local = (ActorLocal_RBB_8520 *)&this->local;
    local->unk30 = 3.0f;
}

void func_8038E920(Actor *this){
    ActorLocal_RBB_8520 *local = (ActorLocal_RBB_8520 *)&this->local;
    local->unk30 = 0.0f;
}

void func_8038E92C(Actor *this){
    ActorLocal_RBB_8520 *local = (ActorLocal_RBB_8520 *)&this->local;

    if(this->state == 2 && local->unk34 == 0)
        return;
    if(func_8025773C( &local->unk30, func_8033DD9C()))
        func_8038F190(this, 3);
}

void func_8038E998(Actor *this){
    struct30s *other = func_802F0BD0(2);
    f32 temp_f0;

    func_802EF950(other, 0x70e);
    func_802EFA5C(other, 0.0f, 0.1f);
    func_802EFA90(other, 0, 7);
    func_802EFB54(other, &this->position);
    func_802EFB70(other, 0.25f, 0.75f);
    func_802EFB84(other, 0.75f, 1.75f);
    func_802EFB1C(other, -50.0f, 25.0f, -50.0f, 50.0f, 25.0f, 50.0f);
    func_802EFED4(other, -50.0f, 100.0f, -50.0f, 50.0f, 200.0f, 50.0f);
    func_802EFEC0(other, 0.5f, 1.0f);
    func_802EF5C8(other, 2);
}

void func_8038EAB4(Actor *this){
    struct30s *other;
    func_802BB3DC(0, 60.0f, 0.9f);
    other = func_802F0BD0(1);
    func_802EF950(other, 0x4a0);
    func_802EFA5C(other, 0.1f, 0.2f);
    func_802EFA70(other, 8);
    func_802EFA90(other, 0, 0);
    func_802EFA9C(other, 4.0f, 4.0f);
    func_802EFB1C(other, 0.0f, 200.0f, 0.0f, 0.0f, 200.0f, 0.0f);
    func_802EFB54(other, &this->position);
    func_802EFB70(other, 3.0f, 3.0f);
    func_802EFB84(other, 8.0f, 8.0f);
    func_802EFEC0(other, 0.5f, 0.5f);
    func_802EFED4(other, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    func_802EF5C8(other, 1);
}

void func_8038EC14(Actor *this){
    struct30s *other;
    other = func_802F0BD0(6);
    func_802EF950(other, 0x70e);
    func_802EFA5C(other, 0.05f, 0.1f);
    func_802EFA90(other, 0, 7);
    func_802EFB54(other, &this->position);
    func_802EFB70(other, 1.0f, 1.5f);
    func_802EFB84(other, 2.0f, 3.0f);
    func_802EFB1C(other, -75.0f, 25.0f, -75.0f, 75.0f, 75.0f, 75.0f);
    func_802EFED4(other, -70.0f, 50.0f, -70.0f, 70.0f, 100.0f, 70.0f);
    func_802EFFA8(other, &D_80390DD0);
    func_802EFEC0(other, 3.0f, 4.0f);
    func_802EF5C8(other, 6);
}

void func_8038ED3C(Actor * actor, s32 arg1){
    struct30s *other = func_802F0BD0(0xa);
    func_802EF9AC(other, 0.0f, -800.0f, 0.0f, 0.0f, -800.0f, 0.0f);
    func_802EF9F8(other, 0.6f);
    func_802EFA18(other, 3);
    func_802EFAC8(other, arg1);
    func_802EFB54(other, &actor->position);
    func_802EFB70(other, 0.05f, 0.4f);
    func_802EFE24(other, -600.0f, -600.0f, -600.0f, 600.0f, 600.0f, 600.0f);
    func_802EFE5C(other, 0.0f, 0.01f);
    func_802EFEC0(other, 10.0f, 10.0f);
    func_802EFED4(other, -700.0f, 200.0f, -700.0f, 700.0f, 500.0f, 700.0f);
    func_802EF5C8(other, 0xa);
}

int func_8038EE90(Actor *this){
    f32 sp2C[3];
    f32 sp20[3];
    ActorLocal_RBB_8520 *local = (ActorLocal_RBB_8520 *)&this->local;

    sp2C[0] = local->unk14[0];
    sp2C[1] = local->unk14[1];
    sp2C[2] = local->unk14[2];

    sp20[0] = local->unk20[0];
    sp20[1] = local->unk20[1];
    sp20[2] = local->unk20[2];

    sp2C[1] += 75.0f;
    sp20[1] += 75.0f;
    return func_803342AC(&sp2C, &sp20, 100.0f);
}

int func_8038EF08(Actor *this, f32 (*position)[3], f32 arg2){
    f32 sp54[3];
    int sp50;
    ActorLocal_RBB_8520 *local = (ActorLocal_RBB_8520 *)&this->local;
    f32 sp40[3];
    f32 sp3C;
    f32 sp30[3];
    

    sp54[0] = (*position)[0] - this->position_x;
    sp54[1] = (*position)[1] - this->position_y;
    sp54[2] = (*position)[2] - this->position_z;
    if(180.0 < gu_sqrtf(sp54[0]*sp54[0] + sp54[1]*sp54[1] + sp54[2]*sp54[2]))
        ml_vec3f_set_length(&sp54, 150.0f);
    
    local->unk20[0] = sp54[0] + this->position_x;
    local->unk20[1] = sp54[1] + this->position_y;
    local->unk20[2] = sp54[2] + this->position_z;

    local->unk20[1] = func_80309724(&local->unk20);

    sp40[0] = local->unk20[0];
    sp40[1] = local->unk20[1] + this->scale*100.0f;
    sp40[2] = local->unk20[2];
    sp3C = this->scale*60.0f;
    if(func_80309EB0(&sp40, sp3C, &sp30, 0)){
        sp50 = 1;
    }else{
        sp50 = 0;
    }
    if( !func_80329210(this, &local->unk20) 
        || ((local->unk2C + 30.0f) < local->unk20[1])
        || sp50
    ){
        local->unk20[0] = this->position_x;
        local->unk20[1] = this->position_y;
        local->unk20[2] = this->position_z;
        if(local->unk39 < 3 && ++local->unk39 == 3){
            local->unk39 = 0;
            return 0;
        }
    }else{
        local->unk34 = func_8038EE90(this);
        if(local->unk34 == 0){
            local->unk20[0] = this->position_x;
            local->unk20[1] = this->position_y;
            local->unk20[2] = this->position_z;
        }
    }
    func_80335924(this->unk148, 0x147, 0.1f, randf2(-0.1f, 0.1f) + (1.0/arg2)*0.4);
    func_80335A8C(this->unk148, 2);
    local->unk14[0] = this->position_x; 
    local->unk14[1] = this->position_y; 
    local->unk14[2] = this->position_z;
    return 1;
}

void func_8038F190(Actor *this, s32 arg1){
    f32 sp44[3];
    ActorLocal_RBB_8520 *local = (ActorLocal_RBB_8520 *)&this->local;
    
    player_getPosition(&sp44);

    if(local->unk34){
        func_803343F8(local->unk34);
        local->unk34 = FALSE;
    }

    if(arg1 == 1){
        func_80335924(this->unk148, 0x147, 0.2f, 1.0f);
        func_80335A8C(this->unk148, 4);
    }//L8038F204

    if(arg1 == 2){
        int sp3C = 0;
        if(func_80329210(this, &sp44)){
            local->unk4 += 0.3;
            if(*local->unk0 < local->unk4)
                local->unk4 = *local->unk0;
            sp3C = func_8038EF08(this, &sp44, local->unk4);
        }//L8038F28C
        if(!sp3C){
            func_8038E920(this);
            local->unk4 -= 0.5;
            if(local->unk4 < 0.5)
                local->unk4 = 0.5f;
            func_8038EF08(this, &local->unk8, local->unk4);
        }
    }//L8038F2FC

    if(arg1 == 3){
        func_8038FB6C();
        actor_collisionOff(this);
        func_80324D54(0.0f, 0x1b, 1.0f, 0x7d00, &this->position, 1000.0f, 2000.0f);
        func_80335924(this->unk148, 0x148, 0.2f, 1.0f);
        func_80335A8C(this->unk148, 2);
        func_8038EAB4(this);
        func_8038EC14(this);
        func_8038ED3C(this, 0x53a);
        func_8038ED3C(this, 0x53b);
        func_8038ED3C(this, 0x53c);
        func_80326310(this);
        this->unk10_1 = 0;
        func_8038E920(this);

    }//L8038F3C8
    this->state = arg1;
}


void func_8038F3F0(ActorMarker *marker, s32 arg1){
    Actor* actor =  marker_getActor(marker);
    if(actor->state < 3){
        func_8038F190(actor, 3);
    }
}

void func_8038F430(ActorMarker *marker, s32 arg1){
    Actor* actor =  marker_getActor(marker);
    f32 sp18[3];

    if(actor->state < 3){
        player_getPosition(&sp18);
        if(func_80256064(&actor->position, &sp18) < 300.0f)
            func_8028F55C(5, actor->marker);
        func_8038F190(actor, 3);
    }//L8038F4A4
}

#ifndef NONMATCHING
#pragma GLOBAL_ASM("asm/nonmatchings/RBB/code_8520/func_8038F4B0.s")
#else
void func_8038F4B0(ActorMarker *marker, Gfx **gdl, Mtx **mptr, s32 arg3){
    Actor *actor = marker_getActor(marker);
    ActorLocal_RBB_8520 *local = (ActorLocal_RBB_8520 *)&actor->local;
    f32 temp_f2;
    s32 sp28[4];
    //s32 temp_v0;
    func_8033A45C(1,2);
    func_8033A45C(3,1);
    func_8033A45C(6,1);
    func_8033A45C(7,1);
    if(0.0f < local->unk30 && local->unk30 <= 1.0){
        temp_f2 = 3.0f*local->unk30;
        temp_f2 = 2*(local->unk30 * 3.0f - (s32)(local->unk30 * 3.0f));
        temp_f2 = (temp_f2 > 1.0f) ? 2.0f - temp_f2 : temp_f2;
        
        sp28[0] = (s32) (255 * temp_f2);
        sp28[1] = (s32) (255 * temp_f2);
        sp28[2] = (s32) (255 * temp_f2);
        sp28[3] = 255;
        D_803912A0[0] = actor->pitch;
        D_803912A0[1] = actor->yaw;
        D_803912A0[2] = actor->roll;
        func_8033A334(&sp28, &D_80390DDC);
    }//L8038F5F8
    func_80325888(marker, gdl, mptr, arg3);
}
#endif

#ifndef NONMATCHING //needs .rodata defined
#pragma GLOBAL_ASM("asm/nonmatchings/RBB/code_8520/func_8038F618.s")
#else
void func_8038F618(Actor *this){
    f32 sp7C[3];
    int sp78;
    ActorLocal_RBB_8520 *local = (ActorLocal_RBB_8520 *)&this->local;
    f32 sp70 = func_8033DD9C();
    f32 sp6C;
    f32 sp68;
    f32 sp5C[3];
    f32 sp50[3];
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    

    if(!this->unk16C_4){
        this->marker->propPtr->unk8_3 = 0;
        this->unk16C_4 = 1;
        local->unk8[0] = this->position_x;
        local->unk8[1] = this->position_y;
        local->unk8[2] = this->position_z;
        local->unk38 = 0;
        local->unk39 = 0;
        local->unk0 = &D_80390D80[(this->modelCacheIndex ==  0x30d)? 1 : 0];
        local->unk2C = func_80309724(&this->position);
        local->unk34 = 0;
        local->unk4 = 0.5f;
        local->unk30 = 0.0f;
        func_803300A8(this->marker, func_8038F430, func_8038F3F0, func_8038F430);
        func_8038F190(this, 1);
        return;
    }//L8038F714

    player_getPosition(sp7C);
    sp78 = func_80329210(this, sp7C);
    if(!local->unk38){
        local->unk38 = TRUE;
        func_8038FB54();
    }
    func_8038E92C(this);
    if(this->state == 1){
        if(sp78 && func_80256064(&this->position, &sp7C) < 500.0f){
            func_8038F190(this, 2);
        }
    }//L8038F7A0

    if(this->state == 2){
        sp5C[0] = this->position_x;
        sp5C[1] = this->position_y;
        sp5C[2] = this->position_z;
        
        if(0.0f != local->unk30 && !sp78)
            func_8038E920(this);

        if(0.0f == local->unk30 && sp78)
            func_8038E910(this);

        func_8033568C(this->unk148, &sp6C, &sp68);

        if(0.1 <= sp68 && sp68 <= 0.6)
            func_80255FE4(&this->position, &local->unk14, &local->unk20, (sp68 - 0.1) /0.5 );
        if(0.6);
        if(sp6C < 0.6 && sp68 <= 0.1)
            func_8030E878(0x6C, (f64)1.1f + randf2(-0.05f, 0.05f), 20000, &this->position, 500.0f, 1000.0f);

        if(sp6C < 0.1 && 0.1 <= sp68)
            func_8038E998(this);

        sp50[0] = local->unk20[0] - local->unk14[0];
        sp50[1] = local->unk20[1] - local->unk14[1];
        sp50[2] = local->unk20[2] - local->unk14[2];

        func_80258A4C(&D_80390DEC,sp50[0] - 90.0f, &sp50, &sp4C, &sp48, &sp44);
        
        this->yaw += (sp44*400.0f)*sp70;
        if(func_80335794(this->unk148) > 0){
            if(func_80256064(&this->position, &local->unk8) < 10.0f){
                func_8038F190(this, 1);
            }else{
                func_8038F190(this, 2);
            }
        }
    }//L8038FA50
}
#endif
