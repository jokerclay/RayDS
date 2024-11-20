#ifndef COMMON_H
#define COMMON_H


#define DS_SCREEN_WIDTH  800
#define DS_SCREEN_HEIGHT 600


#define CIRCLE_GAP 10 // Adjust gap size for better spacing
#define CIRCLE_BLANK_OPACITY  0.5
#define CIRCLE_RADIUS 60.0f

#define MAXSIZE 5


#include <stdio.h>
#include <stdlib.h>

#include "../../raylib-5.5_win64_mingw-w64/include/raylib.h"


typedef struct
{
    int index;
    Color color;
    float radius;

    int centerX;
    int centerY;

} Circle;

#endif
