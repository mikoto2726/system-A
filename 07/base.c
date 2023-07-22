#include <stdio.h>

extern long g();
extern long *h();
int main() {
        long c1 = g();
        long *a = h();
        long v1 = 1;
        long v2 = 1;
        while (v1+v2 < 0xffffffff) {
                long t = a[(v1+v2)&0xF];
                if (!t) {
                        v1+=c1;
                } else {
                        v2+=t;
                }
        }
        printf("%ld %ld\n", v1, v2);
}