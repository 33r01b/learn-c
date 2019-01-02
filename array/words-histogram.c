#include <stdio.h>

#define MAX 25

int main()
{
    int c, i, k, lenght;
    int nlen[MAX];

    lenght = 0;

    for (i = 0; i < MAX; ++i) {
        nlen[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (' ' == c || '\n' == c || '\t' == c) {
            if (lenght) {
                ++nlen[lenght - 1];
                lenght = 0;
            } 
        } else {
            ++lenght;
        }
    }

    for (i = 0; i < MAX; ++i) {
        for (k = 0; k < nlen[i]; ++k) {
            putchar('=');
        } 

        if (nlen[i]) {
            printf(" - %d\n", i + 1);
        }
    }
}
