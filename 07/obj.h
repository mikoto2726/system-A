typedef struct {
        long n;
        long (*fp[])();
} vtable_t;

typedef struct {
        vtable_t *vt;
} obj_t;

long vcall(obj_t *);

obj_t *new(long (*)());