#include "sequence_list_static.h"
#include "common.h"

void sq_init(SqList *self) {
    Color blank_circle = { 0, 0, 0, CIRCLE_BLANK_OPACITY * 255 }; 

    self->lenghth = MAXSIZE; // Initialize length

    for (int i = 0; i < MAXSIZE; i++) {
        self->data[i].index = 0;                      // Assign index
        self->data[i].color = blank_circle;           // Assign color
        self->data[i].radius = CIRCLE_RADIUS;         // Assign radius
        self->data[i].centerX = CIRCLE_RADIUS + ((CIRCLE_RADIUS * 2 + CIRCLE_GAP) * i); // X position
        self->data[i].centerY = DS_SCREEN_HEIGHT / 2;    // Y position (centered)
    }
}
