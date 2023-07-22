#include <stdio.h>
long s;
extern long f();
int main() {
        volatile long c1 = f();
        volatile long c2 = f();
        volatile long c3 = f();
        volatile long c4 = f();
        long v1 = 1;
        long v2 = 1;
        long v3 = 1;
        long v4 = 1;
        while (v1 < 0xffffffff) {
                s = c1;
                v1 += s;
                s = c2;
                v2 += s;
                s = c3;
                v3 += s;
                s = c4;
                v4 += s;
        }
        printf("%ld %ld %ld %ld\n", v1, v2, v3, v4);
}