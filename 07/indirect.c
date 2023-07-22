#include <stdio.h>
extern char *(*pf)();

int main() {
        char *s = pf();
        char *r;
        if (s) {
                r = s;
        } else {
                r = "none";
        }
        printf("%s\n", r);
}