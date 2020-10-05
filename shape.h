#ifndef SHAPE_H
#define SHAPE_H
#include <stdint.h>

typedef struct {
        int16_t x;
        int16_t y;
} shape;

extern void shape_ctor(shape * const me, int16_t x, int16_t y);
extern void shape_moveBy(shape * const me, int16_t dx, int16_t dy);
int16_t shape_getX(shape * const me);
int16_t shape_getY(shape * const me);

#endif
