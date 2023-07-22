#include <stdio.h>
#include <stdlib.h>
long s;
extern long f();
int main() {
        long const sz = 48*1024*256; // 96 MB
        volatile long *p = malloc(sizeof(long)*sz);
        for(long i=0; i<sz; i++) p[i] = 1;
        long v1 = 1;
        long v2 = 1;
        long v3 = 1;
        long v4 = 1;
        long i = 0;
        while (v1 < 0xffffffff) {
                v1 += p[i];
                i = (i+4096/sizeof(long))&0xBFFFFF;
        }
        printf("%ld %ld %ld %ld\n", v1, v2, v3, v4);
}