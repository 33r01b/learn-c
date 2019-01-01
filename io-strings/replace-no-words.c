#include <stdio.h>

int main()
{
    int c, sl;

    sl = 0;

    while ((c = getchar()) != EOF) {
        if ('\t' == c) {
            c = 't';
            sl = 1;
        }

        if ('\b' == c) {
            c = 'b';
            sl = 1;
        }

        if ('\\' == c) {
            sl = 1;
        }
        
        if (1 == sl) {
            putchar('\\');
            sl = 0;
        }

        putchar(c);
    }
}
