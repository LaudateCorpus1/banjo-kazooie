#ifndef VARIABLES_H
#define VARIABLES_H

struct Overlay {
    void *start;
    void *end;
};

extern struct Overlay gOverlayTable[];

extern s32  D_80276588;
extern s32  D_8027658C;

extern s8   D_8037BFBA;

extern f32  climbPoleBottom[3];
extern f32  climbPoleTop[3];
#endif
