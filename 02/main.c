#include <stdio.h>
int main() {
        long v = 1;
        long f(long);

        while(v) {
                v += f(v);
        }
        printf("%ld", v);
}