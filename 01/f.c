#include <stdio.h>
#include <limits.h>
volatile long c = 1;

long f(long max) {
        volatile long a = 0;
        while(max--) {
                a += c;
        }
        return a;
}

int main() {
        f(100L * INT_MAX);
}