#include <stdio.h>
long add1(long v) { return v+1; }
int main() {
    long v = 1;
    while(v) {
            v = add1(v);
    }
    printf("%ld", v);
}