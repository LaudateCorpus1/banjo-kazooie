#include <ultra64.h>
#include "functions.h"
#include "variables.h"


void func_80292E80(s32, f32);
f32 func_8029B41C(void);
void func_802BF2C0(f32);

void func_802B6270(void){
    func_8028A180(0x77, 3.2f);
    func_8029C7F4(1,1,3,2);
    func_80297970(0.0f);
    func_802914CC(0xd);
    yaw_setIdeal(func_8029B41C() + 35.0f);
    func_802BF2C0(80.0f);
    func_8025A58C(0,0xfa0);
    func_8025A70C(JINGLE_MINIGAME_LOSS);
    func_8024BD08(0);
    func_8029E070(1);
    func_8028D5DC();
}

void func_802B6314(void){
    AnimCtrl *aCtrl = player_getAnimCtrlPtr();
    if(animctrl_isAt(aCtrl, 0.0625f))
        func_80292E48();

    if(animctrl_isAt(aCtrl, 0.18f))
        func_8030E624(0x7ff193eb);

    if(animctrl_isAt(aCtrl, 0.8421f)){
        func_80292E80(0, 0.3f);
        func_80292E80(1, 0.3f);
    }

    if(animctrl_isAt(aCtrl, 0.84f))
        func_8029B6F0();
}

void func_802B63C8(void){
    func_80292EA4();
    func_80291548();
    func_8024BD08(1);
}

void func_802B63F8(void){
    AnimCtrl *aCtrl = player_getAnimCtrlPtr();
    animctrl_reset(aCtrl);
    func_8029C848(aCtrl);
    animctrl_setPlaybackType(aCtrl,  ANIMCTRL_LOOP);
    func_802875AC(aCtrl, "bstimeout.c", 0x7e);
    func_8029C7F4(1,1,3,7);
    func_80297970(0.0f);
    func_802914CC(0xd);
    yaw_setIdeal(func_8029B41C() + 35.0f);
    func_802BF2C0(80.0f);
    func_8025A58C(0,0xfa0);
    func_8025A70C(JINGLE_MINIGAME_LOSS);
    func_8024BD08(0);
    func_8028D5DC();
    func_8029E3C0(0, 2.9f);
}

void func_802B64D0(void){
    if(func_8029E1A8(0))
        func_8029B6F0();
}

void func_802B6500(void){
    func_8029E070(0);
    func_80291548();
    func_8024BD08(1);
    func_8025A904();
}
