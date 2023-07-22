#include <stdio.h>
#include <stdlib.h>
long s;
extern long f();
int main() {
        // L1, L2, L3を超える 96MB
        long const sz = 48*1024*256;
        volatile long *p = malloc(sizeof(long)*sz);
        for(long i=0; i<sz; i++) p[i] = 1;
        long v1 = 1;
        long v2 = 1;
        long v3 = 1;
        long v4 = 1;
        long i = 0;
        while (v1 < 0xffffffff) {
                v1 += p[i];
                i = (i+8)&0xBFFFFF;
	}
}