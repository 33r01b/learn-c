#include <stdio.h>

int main()
{
    int c, s;

    s = 0;

    while ((c = getchar()) != EOF) {
        if (' ' == c) {
            if (0 == s) {
                s = 1;
            } else {
                s = 0;
                c = 0;
            }
        }
        
        if (0 != c) {
            putchar(c);
        }
    }
}
