#include <stdio.h>
#include <stdlib.h>
long s;
extern long f();
int main() {
        long const sz = 6*1024;
        volatile long * p = malloc(sizeof(long)*sz);
        for(long i=0; i<sz; i++) p[i] = 1;
        long v1 = 1;
        long v2 = 1;
        long v3 = 1;
        long v4 = 1;
        long i = 0;
        while (v1 < 0xffffffff) {
                p[i] = 1;
                v1 += p[i];
                i = (i+1)&0x17ff;
        }
        printf("%ld %ld %ld %ld\n", v1, v2, v3, v4);
}