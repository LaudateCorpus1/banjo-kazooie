#include <ultra64.h>
#include "functions.h"
#include "variables.h"

#include "prop.h"

void   func_80328B8C(Actor *, s32, f32, s32);
void   func_802D4830(Actor *, s32, f32);
Actor *func_8032813C(s32, void *, s32);
void   func_802D3CE8(Actor *);
int    func_8032886C(Actor *, f32);
void   func_802D3D54(Actor *);
void   func_8033A45C(s32, s32);
void   func_8034E0FC(void *, s32);
void  *func_8034C2C4(ActorMarker *, s32);

/* .data */
extern ActorInfo D_80392F40;
extern ActorInfo D_80392F64;
extern ActorInfo D_803932E8;
extern ActorInfo D_80393408;
extern ActorInfo D_80392F88;
extern ActorInfo D_80392FAC;
extern ActorInfo D_80392FD0;
extern ActorInfo D_80393018;
extern ActorInfo D_8039303C;
extern ActorInfo D_80393060;
extern ActorInfo D_803931EC;
extern ActorInfo D_80393210;
extern ActorInfo D_80392EF8;
extern ActorInfo D_8039339C;
extern ActorInfo D_803933C0;
extern ActorInfo D_80392DB4;
extern ActorInfo D_80392DD8;
extern ActorInfo D_80392DFC;
extern ActorInfo D_80392E20;
extern ActorInfo D_80392E44;
extern ActorInfo D_80392E68;
extern ActorInfo D_80392E8C;
extern ActorInfo D_803930F0;
extern ActorInfo D_80393234;
extern ActorInfo D_80393258;
extern ActorInfo D_80392FF4;
extern ActorInfo D_8039327C;
extern ActorInfo D_803932A0;
extern ActorInfo D_803932C4;
extern ActorInfo D_8039315C;
extern ActorInfo D_80393180;
extern ActorInfo D_803931A4;
extern ActorInfo D_8039330C;
extern ActorInfo D_80393330;
extern ActorInfo D_80393114;
extern ActorInfo D_80393138;
extern ActorInfo D_803930CC;
extern ActorInfo D_803931C8;
extern ActorInfo D_80393560;
extern ActorInfo D_80393584;
extern ActorInfo D_803933E4;
extern ActorInfo D_80393378;
extern ActorInfo D_803947B0;
extern ActorInfo D_803947D4;
extern ActorInfo D_80393730;
extern ActorInfo D_80394A80;
extern ActorInfo D_80394AB0;
extern ActorInfo D_80392EB0;
extern ActorInfo D_80393084;
extern ActorInfo D_80392ED4;
extern ActorInfo D_803930A8;
extern ActorInfo D_80394870;
extern ActorInfo D_80394894;
extern ActorInfo D_803948B8;
extern ActorInfo D_80394910;
extern ActorInfo D_80394934;
extern ActorInfo D_80394958;
extern ActorInfo D_80392F1C;
extern ActorInfo D_80394A08;
extern ActorInfo D_80394A2C;
extern ActorInfo D_80394A50;
extern ActorInfo D_80394980;
extern ActorInfo D_80394C28;
extern ActorInfo D_80394C4C;
extern ActorInfo D_80394C70;
extern ActorInfo D_80394D20;
extern ActorInfo D_80394CF0;
extern ActorInfo D_80394C94;
extern ActorInfo D_80393354;
extern ActorInfo D_80392D90;

//chcobweb
void func_803863F0(Actor *this)
{
    if(!this->initialized)
    {
        func_802D3CE8(this);

        if (func_8031FF1C(this->unkF4_8 == 1 ? 0xCB : 0xCC))
        {
            marker_despawn(this->marker);
            return;
        }
    }

    if (this->state == 0xC)
    {
        if (actor_animationIsAt(this, 0.95f))
        {
            func_80328B8C(this, 0xD, 0.98f, 1);
            func_80326310(this);
        }
    }
}

//chbigyellowcobweb
void func_803864B0(Actor *this)
{
    if (!this->initialized)
    {
        func_802D3CE8(this);

        if (func_8031FF1C(0xCA))
        {
            marker_despawn(this->marker);
            return;
        }
    }

    if (this->state == 0xF)
    {
        if (actor_animationIsAt(this, 0.9f))
        {
            func_80328B8C(this, 0x10, 0.98f, 1);
            func_80326310(this);
        }
    }
}

void func_80386550(Actor *this)
{
    if (!this->initialized)
    {
        func_802D3CE8(this);

        if (func_8031FF1C(this->unkF4_8 == 1 ? 0xC8 : 0xC9))
        {
            marker_despawn(this->marker);
            return;
        }
    }

    switch (this->state)
    {
        case 9:
        {
            this->pitch -= 2;
            this->position_y--;

            if (func_8032886C(this, 0.95f))
            {
                func_80326310(this);
                func_80328B8C(this, 10, 0.98f, 1);

                this->pitch = 270.f;
            }

            break;
        }
        default:
            break;
    }
}

Actor *func_8038664C(ActorMarker *marker, Gfx **dl, Mtx **m, u32 a3)
{
    u32    val;
    Actor *actor;

    actor = marker_getActor(marker);
    val = actor->unk10_12;

    func_8033A45C(3, val == 1 ? 1 : 0);
    func_8033A45C(4, val == 0 ? 1 : 0);

    return func_80325888(marker, dl, m, a3);
}

void *func_803866D8(s32 a0)
{
    extern f32 D_8039342C;

    void *ptr;
    s32 colour[3];

    ptr = func_802F0BD0(0x28);

    func_802F0D54(ptr);
    func_802EF950(ptr, 0x710);
    func_802EFB98(ptr, &D_8039342C);
    func_802EFED4(ptr, 0.f, 70.f, 0.f, 0.f, 140.f, 0.f);

    colour[0] = a0 * 0xFF;
    colour[1] = 0xFF;
    colour[2] = 0;

    func_802EFFA8(ptr, colour);

    return ptr;
}

void func_80386780(Actor *this)
{
    func_802D4AC0(this, 0x8000C6, 0xC7);
}

#pragma GLOBAL_ASM("asm/nonmatchings/lair/code_0/func_803867A8.s")

void func_80386D20(Actor *this)
{
    func_802D4A9C(this, 0);
}

void func_80386D40(void)
{
    func_802D68F0(0xC);
    func_80346414(0x06, 1);
    mapSpecificFlags_set(1, TRUE);
}

#pragma GLOBAL_ASM("asm/nonmatchings/lair/code_0/func_80386D78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/lair/code_0/func_803870DC.s")

void func_80387560(ActorMarker *marker, Gfx **dl, Mtx **m, u32 a3)
{
    Actor *actor = marker_getActor(marker);
    u32 i;

    for (i = 0; i != 10; i++)
        func_8033A45C(i + 1, actor->unkF4_8 + 1 == i + 2);

    func_80325E78(marker, dl, m, a3);
}

//circular grate
void func_803875F0(Actor * this)
{
    func_802D3D74(this);

    if (!this->unk16C_4)
    {
        if (func_8031FF1C(0x1E))
        {
            marker_despawn(this->marker);
            return;
        }

        if (mapSpecificFlags_get(0))
        {
            this->unk1C_y = this->position_y;
            func_802BAFE4(0x2A);
            func_80320004(0x1E, TRUE);
            this->unk16C_4 = TRUE;
            this->unk38_31 = 0x0C;
        }
    }
    else
    {
        if (this->unk38_31)
        {
            this->unk38_31--;

            if (this->unk38_31)
                return;

            func_802D4830(this, 0x9A, 0.5f);
        }

        this->position_y += 4.0f;

        if (this->position_y > this->unk1C_y + 380.0f)
        {
            func_802D48B8(this);
            func_8030E624(0x7FF0987F);
            marker_despawn(this->marker);
        }
    }
}

//chnotedoor_update
#pragma GLOBAL_ASM("asm/nonmatchings/lair/code_0/func_80387730.s")

//chnotedoor_draw
void func_80387DA8(ActorMarker *marker, Gfx **dl, Mtx **m, u32 vptr)
{
    // TODO: Think of a better way of doing this, similar to the SM64 one
    #define NUM_NOTE_DOORS (12)
    #define noteDoorIdx    unkF4_8
    #define opacityTimer   unk1C[1]

    Actor *actor;
    void  *var1;
    void  *var2;
    s32    i, idx;

    actor = marker_getActor(marker);
    var1  = func_8034C2C4(marker, 0x1F3);
    var2  = func_8034C2C4(marker, 0x1F2);

    /**
     * Sets opacity of the "note" symbol
     */
    if (var2)
        func_8034E0FC(var2, actor->opacityTimer);

    /**
     * Sets opacity of note door numbers
     */
    if (var1)
        func_8034E0FC(var1, 0xFF - (s32)actor->opacityTimer);

    /**
     * Hides all note door graphics that don't match this note door's index
     * e.g. for the 50 note door, hides 180, 260, etc.
     */
    for (i = 0; i != NUM_NOTE_DOORS; i++)
        func_8033A45C(i + 1, actor->noteDoorIdx + 1 == i + 2);

    /**
     * Draw the note door
     */
    func_80325E78(marker, dl, m, vptr);
}

void func_80387E94(ActorMarker *marker);
#pragma GLOBAL_ASM("asm/nonmatchings/lair/code_0/func_80387E94.s")

void func_80387F1C(void)
{
    f32 tmp[3];

    func_802BAFE4(0x7B);

    if (func_80304E24(400, tmp))
    {
        jiggySpawn(JIGGY_35_LAIR_CC_WITCH_SWITCH, tmp);
        // FIXME: macro?
        func_802C3F04(func_802C4140, ACTOR_004C_UNK, *(s32 *)&tmp[0], *(s32 *)&tmp[1], *(s32 *)&tmp[2]);
    }
}

void func_80387F78(Actor *this, u32 flag)
{
    extern f32 D_80394D8C; //! .rodata : 0.9f

    if (this->unk1C[0] != 2.f)
    {
        if (this->unk1C[0] != 0 && func_8031FF1C(0x9B))
        {
            u32 flagState = func_8031FF1C(flag);
            func_80320004(flag, TRUE);

            if (flagState == FALSE
                && !jiggyscore_80320F7C(JIGGY_35_LAIR_CC_WITCH_SWITCH)
                && func_8031FF1C(0x9C)
                && func_8031FF1C(0x9D))
            {
                func_8025A6EC(0x2D, 0x7FFF);
                timedFunc_set_0(D_80394D8C, func_80387F1C);
            }
        }

        if (func_8031FF1C(flag))
        {
            this->position_y -= 4.5; // f64

            if (this->position_y < this->unk1C[1] - 51.f)
            {
                this->position_y = -1000.f;
                this->unk1C[0] = 2.f;
            }
        }
    }
}

void func_803880BC(Actor *this)
{
    extern f64 D_80394D90; //! .rodata : 1.7

    if (!this->unk16C_4)
    {
        func_802D3CE8(this);

        this->unk16C_4 = TRUE;

        this->unk1C[1] = this->position_y;
        this->position_y -= 51.f;
        this->unk1C[0] = 0;

        func_802C3C88(func_80387E94, this->marker);

        if (func_803203FC(0xBC) && !func_8031FF1C(0x9A))
            func_8030E624(0x5FFD4BF6);
    }

    if (func_8031FF1C(0x9B))
    {
        if (!func_8031FF1C(0x9C))
        {
            this->position_y = this->unk1C[1];
            actor_collisionOn(this);
        }

        if (this->unk100 != NULL && !func_8031FF1C(0x9D))
        {
            Actor *actor = marker_getActor(this->unk100);
            actor->position_y = this->unk1C[1];
            actor_collisionOn(actor);
        }
    }

    if (func_803203FC(0xBC) && !func_8031FF1C(0x9B))
    {
        this->position_y += D_80394D90;

        if (this->position_y >= this->unk1C[1])
        {
            this->position_y = this->unk1C[1];
            func_80320004(0x9B, TRUE);
        }

        if (this->unk100 != NULL)
        {
            Actor *actor = marker_getActor(this->unk100);
            actor->position_y = this->position_y;
        }
    }

    func_80387F78(this, 0x9C);
}

void func_8038824C(Actor *this)
{
    func_802D3CE8(this);
    func_80387F78(this, 0x9D);
}


void func_80388278(Actor *this)
{
    void func_802F9D38(s32);

    if (!this->unk44_31)
        return;

    func_802F9D38(this->unk44_31);
    this->unk44_31 = 0;
}

void func_803882B0(Actor *this)
{
    extern f64 D_80394D98; //! .rodata : 1.1

    if (!this->unk16C_4)
    {
        func_802D3D74();

        this->unk16C_4 = TRUE;

        if (func_8031FF1C(0x48))
            this->pitch = 90.f;

        this->unk60 = 0;
    }

    if (this->pitch == 90.f || !func_803203FC(0xBB))
        return;

    if (this->pitch == 0)
        func_802D4830(this, 0x18, 0.5f);

    this->pitch += D_80394D98;

    if (this->unk60 == 0 && this->pitch > 42.f)
    {
        this->unk60 = 1.f;
        func_8025A6EC(SFX_JIGGY_SPAWN, 0x7FFF);
    }

    if (this->pitch > 90.f)
    {
        this->pitch = 90.f;
        func_80320004(0x48, TRUE);
        func_802D48B8(this);
    }
}

void func_80388404(s32 flag, enum sfx_e sfx, f32 a2, s32 a3)
{
    if (func_8031FF1C(flag) == FALSE)
        func_8030E6A4(sfx, a2, a3);

    func_80320004(flag, TRUE);
}

void func_80388450(Actor *actor1, Actor *actor2)
{
    f32 vec1[3];
    f32 vec2[3];
    Actor *actor3 = func_80304C38(0x22A, actor1);
    s32 val = func_80304DA8(actor3);

    actor2->yaw = val;
    actor1->yaw = val;

    vec1[0] = actor1->unk1C[0] + 252.f;
    vec1[1] = 0;
    vec1[2] = 0;

    ml_vec3f_yaw_rotate_copy(vec2, vec1, actor1->yaw);
    func_80304D68(actor3, vec1);

    actor1->position_x = vec1[0] - vec2[0];
    actor1->position_z = vec1[2] - vec2[2];
    actor2->position_x = vec1[0] + vec2[0];
    actor2->position_z = vec1[2] + vec2[2];
}

#pragma GLOBAL_ASM("asm/nonmatchings/lair/code_0/func_80388524.s")

void func_80388FC8(Actor *this)
{
    func_802D3D74();

    if (!this->initialized)
    {
        this->initialized = TRUE;

        this->unk1C[1] = this->position_y;
        this->position_y -= 500.f;

        this->unk60 = 0;

        if (func_803203FC(0x7D))
        {
            this->position_y = this->unk1C[1];
            this->unk60 = 1.f;
        }
    }

    if (this->unk60)
        return;

    if (!this->unk16C_4)
    {
        if (func_8031FF1C(this->modelCacheIndex == 0x215 ? 0x1F : 0x20))
        {
            this->position_y = this->unk1C[1];
            return;
        }

        if (mapSpecificFlags_get(1))
        {
            if (this->modelCacheIndex == 0x215)
            {
                func_802BAFE4(0x2B);
                if (1);  // oof
            }

            func_80320004(this->modelCacheIndex == 0x215 ? 0x1F : 0x20, TRUE);

            this->unk16C_4 = 1;
            this->unk38_31 = 12;
        }
    }
    else
    {
        if (this->unk38_31)
        {
            this->unk38_31--;

            if (this->unk38_31)
                return;

            if (this->modelCacheIndex == 0x215)
            {
                func_8030E624(0x4CBB5825);
                func_802D4830(this, 0x3EC, 0.1f);
            }
        }

        this->position_y += 6.f;

        if (this->position_y >= this->unk1C[1])
        {
            this->position_y = this->unk1C[1];

            if (this->modelCacheIndex == 0x215)
            {
                func_802D48B8(this);
                func_8030E540(0x7F);
            }

            this->unk60 = 1.f;
        }
    }
}

void func_80389204(Actor *this)
{
    func_802D3D74();

    if (!this->initialized)
    {
        this->initialized = TRUE;

        this->unk1C[1] = this->position_y;
        this->position_y -= 280.f;
        this->unk60 = 0;

        if (func_803203FC(0x7E))
        {
            this->position_y = this->unk1C[1];
            this->unk60 = 1.f;
        }
    }

    if (this->unk60)
        return;

    if (!this->unk16C_4)
    {
        if (func_8031FF1C(0x21))
        {
            this->position_y = this->unk1C[1];
            return;
        }

        if (mapSpecificFlags_get(2))
        {
            func_802BAFE4(0x2C);
            func_80320004(0x21, TRUE);

            this->unk16C_4 = 1;
            this->unk38_31 = 12;
        }
    }
    else
    {
        if (this->unk38_31)
        {
            this->unk38_31--;

            if (this->unk38_31)
                return;

            func_8030E624(0x599B5825);
            func_802D4830(this, 0x3EC, 0.2f);
        }

        this->position_y += 3.f;

        if (this->position_y >= this->unk1C[1])
        {
            this->position_y = this->unk1C[1];

            func_802D48B8(this);
            func_8030E540(0x7F);

            this->unk60 = 1.f;
        }
    }
}

void func_803893B8(Actor *this)
{
    func_802D3D74();

    if (!this->unk16C_4)
    {
        this->unk16C_4 = TRUE;

        if (jiggyscore_isCollected(JIGGY_37_LAIR_BGS_WITCH_SWITCH))
        {
            marker_despawn(this->marker);
            return;
        }

        this->unk1C[1] = this->position_y;
    }

    if (jiggyscore_isCollected(JIGGY_37_LAIR_BGS_WITCH_SWITCH))
    {
        f32 *posY = &this->position_y;

        if (this->unk1C[1] == *posY)
            func_802D4830(this, 0x9A, 0.5f);

        this->position_y += 3.f;

        if (this->position_y > this->unk1C[1] + 200.f)
        {
            func_802D48B8(this);
            func_8030E624(0x7FFC507F);
            marker_despawn(this->marker);
        }
    }
}

void func_803894B0(Actor *this)
{
    void func_802EE2E8(Actor *, s32, s32, s32, f32, f32, f32);

    //! rodata
    extern f32 D_80394FC0, D_80394FC4, D_80394FC8, D_80394FCC,
        D_80394FD0, D_80394FD4, D_80394FD8, D_80394FDC, D_80394FE0;

    func_802D3D74();

    if (!this->unk16C_4)
    {
        this->unk16C_4 = TRUE;
        this->unk1C[0] = 0;

        if (func_8031FF1C(0xA1))
        {
            marker_despawn(this->marker);
            return;
        }

        this->unk1C[0] = func_803203FC(0xBD) ? 22 : 0;
    }

    if (!this->unk1C[0])
        return;

    if (--this->unk1C[0] == 0)
    {
        func_80320004(0xA1, TRUE);
        func_80324C88(0.5f, 0x3F9, 1.f, 0x7D00);
        func_8030E624(0x665F4114);
        func_802EE2E8(this, 0xB, 0x19, 0x000, D_80394FC0, D_80394FC4, 3.f);
        func_802EE2E8(this, 0xB, 0x17, 0x0B4, 0.5f,       D_80394FC8, 3.f);
        func_802EE2E8(this, 0xB, 0x15, 0x168, D_80394FCC, D_80394FD0, 3.f);
        func_802EE2E8(this, 0xB, 0x13, 0x21C, D_80394FD4, D_80394FD8, 3.f);
        func_802EE2E8(this, 0xB, 0x11, 0x2D0, D_80394FDC, D_80394FE0, 3.f);
        marker_despawn(this->marker);
    }
}

void func_803896D4(Actor *this)
{
    func_802D4A9C(this, 0);
}

void func_803896F4(Actor *this)
{
    func_802D4A9C(this, 1);
}

void func_80389714(Actor *this)
{
    func_802D4A9C(this, 2);
}

void func_80389734(Actor *this)
{
    func_802D4AC0(this, 0x800022, 0x23);
}

void func_8038975C(Actor *this)
{
    func_802D4AC0(this, 0x800024, 0x25);
}

void func_80389784(Actor *this)
{
    func_802D4AC0(this, 0x800026, 0x27);
}

void func_803897AC(Actor *this)
{
    func_802D4AC0(this, 0x800053, 0x54);
}

void func_803897D4(ActorMarker *marker);
#pragma GLOBAL_ASM("asm/nonmatchings/lair/code_0/func_803897D4.s")

void func_8038982C(Actor *this)
{
    if (!this->initialized)
    {
        func_802D3CE8(this);
        actor_collisionOff(this);

        this->initialized = TRUE;

        if (!func_8031FF1C(0x9E))
            func_802C3C88(func_803897D4, this->marker);
    }
}

void func_80389898(Actor *this)
{
    func_802D3CE8(this);

    switch (this->state)
    {
        case 18:
        {
            if (this->unk10_12)
            {
                func_80328AC8(this, 0x13);
                func_803298AC(this);
                func_80320004(0x9E, TRUE);
            }

            break;
        }
        case 19:
        {
            if (func_8032886C(this, 0.7f))
                marker_despawn(this->marker);

            break;
        }
        default:
            break;
    }
}

void func_80389934(Actor *this)
{
    if (!this->unk16C_4)
    {
        func_802D3CE8(this);
        actor_collisionOff(this);

        this->unk16C_4 = TRUE;

        if (func_8031FF1C(0xA2))
            func_80328B8C(this, 0x18, 0.999f, 1);
    }

    switch (this->state)
    {
        case 21:
        {
            if (func_803203FC(0xBE))
            {
                this->unk1C[0] = 25;

                func_80328AC8(this, 0x16);
                func_80320004(0xA2, TRUE);
            }

            break;
        }
        case 22:
        {
            if (--this->unk1C[0] == 0)
            {
                func_80328AC8(this, 0x17);
                func_803298AC(this);
                func_8030E624(0x4CBF43F6);
                func_8025A6EC(0x3D, 0x7FFF);
            }

            break;
        }
        case 23:
        {
            if (func_8032886C(this, 0.95f))
            {
                func_80328B8C(this, 0x18, 0.999f, 1);
                func_8030E624(0x7FF9607F);
            }

            break;
        }
        case 24: // unused
        default:
            break;
    }
}

f32 func_80389AAC(Actor *, f32); //!
#pragma GLOBAL_ASM("asm/nonmatchings/lair/code_0/func_80389AAC.s")

void func_80389D08(Actor *this)
{
    if (!this->unk16C_4)
    {
        func_802D3CE8(this);

        this->unk16C_4 = TRUE;
        this->unk60 = 0;

        if (func_8031FF1C(0xA5))
        {
            marker_despawn(this->marker);
            return;
        }
    }

    switch (this->state)
    {
        case 1:
        {
            if (this->unk60)
            {
                func_80328AC8(this, 4);

                this->unk38_31 = 0;
                this->unk60 = 0;
            }

            break;
        }
        case 4:
        {
            this->pitch = func_80389AAC(this, this->pitch);
            this->roll--;

            break;
        }
        case 5:
        {
            func_80326310(this);

            break;
        }
        default:
            break;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/lair/code_0/func_80389E10.s")

void func_80389FA8(Actor *this, s32 flag)
{
    if (!this->initialized)
    {
        func_802D3D54(this);

        if (func_8031FF1C(flag))
            marker_despawn(this->marker);
    }
}

void func_80389FF4(Actor *this)
{
    func_80389FA8(this, 0xC2);
}

void func_8038A014(Actor *this)
{
    func_80389FA8(this, 0xC3);
}

void func_8038A034(Actor *this)
{
    this->unk124_9 = 2;

    func_80389FA8(this, 0xC4);
}

void func_8038A064(Actor *this)
{
    func_80389FA8(this, 0xC5);
}

void func_8038A084(Actor *this)
{
    func_80389FA8(this, 0xCD);
}

void func_8038A0A4(Actor *this)
{
    func_80389FA8(this, 0xCE);
}

void func_8038A0C4(void)
{
    func_803053E8(&D_80392F40, actor_new, 0x18628);
    func_803053E8(&D_80392F64, actor_new, 0x18608);
    func_803053E8(&D_803932E8, actor_new, 0x8600);
    func_803053E8(&D_80393408, actor_new, 0x96C0);
    func_803053E8(&D_80392F88, actor_new, 0x8600);
    func_803053E8(&D_80392FAC, actor_new, 0x8600);
    func_803053E8(&D_80392FD0, actor_new, 0x8600);
    func_803053E8(&D_80393018, actor_new, 0x8600);
    func_803053E8(&D_8039303C, actor_new, 0x8600);
    func_803053E8(&D_80393060, actor_new, 0x8604);
    func_803053E8(&D_803931EC, actor_new, 0x8600);
    func_803053E8(&D_80393210, actor_new, 0x8600);
    func_803053E8(&D_80392EF8, actor_new, 0x8600);
    func_803053E8(&D_8039339C, actor_new, 0x8600);
    func_803053E8(&D_803933C0, actor_new, 0x8600);
    func_803053E8(&D_80392DB4, actor_new, 0x8608);
    func_803053E8(&D_80392DD8, actor_new, 0x8608);
    func_803053E8(&D_80392DFC, actor_new, 0x8608);
    func_803053E8(&D_80392E20, actor_new, 0x8608);
    func_803053E8(&D_80392E44, actor_new, 0x8608);
    func_803053E8(&D_80392E68, actor_new, 0x8608);
    func_803053E8(&D_80392E8C, actor_new, 0x8608);
    func_803053E8(&D_803930F0, actor_new, 0x8600);
    func_803053E8(&D_80393234, actor_new, 0x8600);
    func_803053E8(&D_80393258, actor_new, 0x8600);
    func_803053E8(&D_80392FF4, actor_new, 0x8600);
    func_803053E8(&D_8039327C, actor_new, 0x8600);
    func_803053E8(&D_803932A0, actor_new, 0x8600);
    func_803053E8(&D_803932C4, actor_new, 0x8600);
    func_803053E8(&D_8039315C, actor_new, 0x8600);
    func_803053E8(&D_80393180, actor_new, 0x8600);
    func_803053E8(&D_803931A4, actor_new, 0x8600);
    func_803053E8(&D_8039330C, actor_new, 0x8600);
    func_803053E8(&D_80393330, actor_new, 0x8600);
    func_803053E8(&D_80393114, actor_new, 0);
    func_803053E8(&D_80393138, actor_new, 0x8600);
    func_803053E8(&D_803930CC, actor_new, 0x8600);
    func_803053E8(&D_803931C8, actor_new, 0x28600);
    func_803053E8(&D_80393560, actor_new, 0x97AA);
    func_803053E8(&D_80393584, actor_new, 0x87AA);
    func_803053E8(&D_803933E4, actor_new, 0x8608);
    func_803053E8(&D_80393378, actor_new, 0x8640);
    func_803053E8(&D_803947B0, actor_new, 0xA1480);
    func_803053E8(&D_803947D4, actor_new, 0xA1480);
    func_803053E8(&D_80393730, actor_new, 0x140);
    func_803053E8(&D_80394A80, actor_new, 0);
    func_803053E8(&D_80394AB0, actor_new, 0x44);
    func_803053E8(&D_80392EB0, actor_new, 0x8608);
    func_803053E8(&D_80393084, actor_new, 0x8680);
    func_803053E8(&D_80392ED4, actor_new, 0x8608);
    func_803053E8(&D_803930A8, actor_new, 0xC680);
    func_803053E8(&D_80394870, actor_new, 0x1A0);
    func_803053E8(&D_80394894, actor_new, 0x1A0);
    func_803053E8(&D_803948B8, actor_new, 0x1A0);
    func_803053E8(&D_80394910, actor_new, 0x10C0);
    func_803053E8(&D_80394934, actor_new, 200);
    func_803053E8(&D_80394958, actor_new, 200);
    func_803053E8(&D_80392F1C, actor_new, 0x8608);
    func_803053E8(&D_80394A08, actor_new, 0x2010129);
    func_803053E8(&D_80394A2C, actor_new, 0x2010129);
    func_803053E8(&D_80394A50, actor_new, 0x2010129);
    func_803053E8(&D_80394980, actor_new, 0x80);
    func_803053E8(&D_80394C28, actor_new, 0x400);
    func_803053E8(&D_80394C4C, actor_new, 0x400);
    func_803053E8(&D_80394C70, actor_new, 0x400);
    func_803053E8(&D_80394D20, actor_new, 0);
    func_803053E8(&D_80394CF0, actor_new, 0x80508);
    func_803053E8(&D_80394C94, actor_new, 0x500);
    func_803053E8(&D_80393354, actor_new, 0x8602);
    func_803053E8(&D_80392D90, actor_new, 0x20000);
}