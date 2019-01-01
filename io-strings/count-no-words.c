#include <stdio.h>

int main()
{
    int c, nl, t, s;

    nl = 0;
    t = 0;
    s = 0;

    while ((c = getchar()) != EOF) {
        if ('\n' == c) {
            ++nl;
            printf("nl = %d\n", nl);
        }
        if ('\t' == c) {
            ++t;
            printf("t = %d\n", t);
        }
        if (' ' == c) {
            ++s;
            printf("s = %d\n", s);
        }
    }
}
