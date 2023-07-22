#include <stdio.h>

extern long f();
int main() {
        long c1 = f();
        long c2 = f();
        long c3 = f();
        long c4 = f();
        long v1 = 1;
        long v2 = 1;
        long v3 = 1;
        long v4 = 1;
        while (v1 < 0xffffffff) {
                v1+=c1;
                //v2+=c2;
                //v3+=c3;
                //v4+=c4;
        }
        printf("%ld %ld %ld %ld\n", v1, v2, v3, v4);
}





