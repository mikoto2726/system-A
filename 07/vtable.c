#include <stdio.h>
#include "obj.h"

long f0() { return 1; }
long f1() { return 1; }
long f2() { return 1; }
long f3() { return 1; }
long f4() { return 1; }
long f5() { return 1; }
long f6() { return 1; }
long f7() { return 1; }
long f8() { return 1; }
long f9() { return 1; }
long fA() { return 1; }
long fB() { return 1; }
long fC() { return 1; }
long fD() { return 1; }
long fE() { return 1; }
long fF() { return 1; }

int main() {
        long test = 0;
        obj_t *objs0[] = {
                                new(f0), new(f0), new(f0), new(f0), new(f0), new(f0), new(f0), new(f0),
                                new(f0), new(f0), new(f0), new(f0), new(f0), new(f0), new(f0), new(f0),
                        };
        obj_t *objs1[] = {
                                new(f0), new(f1), new(f2), new(f3), new(f4), new(f5), new(f6), new(f7),
                                new(f8), new(f9), new(fA), new(fB), new(fC), new(fD), new(fE), new(fF),
                        };

        obj_t **objs;
        switch(test) {
        case 0:
                objs = objs0;
                break;
        case 1:
                objs = objs1;
                break;
        }

        long v1 = 1;
        while (v1 < 0xffffffff) {
                long c1 = vcall(objs[v1&0xF]);
                v1 += c1;
        }
        printf("test %ld: %ld\n", test, v1);
}