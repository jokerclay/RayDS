#ifndef SEQUENCE_LIST_STATIC_H
#define SEQUENCE_LIST_STATIC_H

#include "common.h"
typedef struct
{
    Circle data[MAXSIZE]; // we use a circle to represent a data element here.
    int lenghth;
}SqList;

void sq_init(SqList *self);

#endif
