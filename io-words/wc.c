#include <stdio.h>

/* Run as command ./a.out < file */

#define IN 1 //in word
#define OUT 0 //out word


int main()
{
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;

    while ((c = getchar()) != EOF) {
        ++nc;

        if ('\n' == c) {
            ++nl;
        }

        if (' ' == c || '\n' == c || '\t' == c) {
            state = OUT;
        } else if (OUT == state) {
            state = IN;
            ++nw;
        }
    }

    printf("nl: %d, nw: %d, nc: %d\n", nl, nw, nc);
}
