#include <stdio.h>
extern char *f();

int main() {
        char *s = f();
        char *r;
        if (s) {
                r = s;
        } else {
                r = "none";
        }
        printf("%s\n", r);
}