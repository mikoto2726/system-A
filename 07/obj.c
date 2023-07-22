#include <stdlib.h>
#include "obj.h"


obj_t *new(long (*f)()) {
        const long n = 1;
        obj_t * o = malloc(sizeof(obj_t));
        vtable_t *vt = malloc(sizeof(vtable_t) + sizeof(vt->fp[0])*n);
        vt->n = n;
        vt->fp[0] = f;
        o->vt = vt;
        return o;
}

inline long vcall(obj_t *o) {
        long (*f)() = o->vt->fp[0];
        return f();
}