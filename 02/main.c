#include <stdio.h>

long f(long, long);

int main() {
        long v = 1;
        

        while(v) {
                v += f(v,v);
        }
        printf("%ld", v);
        return 0;
}