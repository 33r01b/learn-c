#include <stdio.h>

int main()
{
    int c, i, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;

    for (i = 0; i < 10; ++i) {
        ndigit[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if ('0' <= c && '9' >= c) {
            ++ndigit[c - '0'];
        } else if (' ' == c || '\n' == c || '\t' == c) {
            ++nwhite;
        } else {
            ++nother;
        }
    }

    printf("digits =");

    for (i = 0; i < 10; ++i) {
        printf("%d", ndigit[i]);
    }

    printf(", delimeters = %d, others = %d\n", nwhite, nother);
}
