#include <stdio.h>

extern long f();
extern long g();
int main() {
        long c1 = f();
        long c2 = g();
        long c3 = g();
        long c4 = g();
        long v1 = 1;
        long v2 = 1;
        long v3 = 1;
        long v4 = 1;
        while (v1 < 0xffffffff) {
                v1+=c1;
                v1-=c2;
                v1-=c3;
                v1-=c4;
        }
        printf("%ld %ld %ld %ld\n", v1, v2, v3, v4);
}