#include <stdio.h>

int main ()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0; /* lower temperature */
    upper = 300; /*upper temperature */
    step = 20;

    celsius = lower;

    printf("%3s\t%6s\n", "celsius", "fahr");

    while (celsius <= upper) {
        fahr =  (celsius + 32.0) / 5.0 * 9.0;

        printf("%3.0f\t%6.1f\n", celsius, fahr); /* add double format */

        celsius = celsius + step;
    }
}
