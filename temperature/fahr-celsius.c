#include <stdio.h>

int main ()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0; /* lower temperature */
    upper = 300; /*upper temperature */
    step = 20;

    fahr = lower;

    printf("%3s\t%6s\n", "fahr", "celsius");

    while (fahr <= upper) {
        /* celsius = 5 * (fahr - 32) / 9; /1* becuse 5/9 == 0 *1/ */

        celsius = (5.0/9.0) * (fahr-32.0); 

        /* printf("%d\t%d\n", fahr, celsius); */
        /* printf("%3d\t%6d\n", fahr, celsius); /1* add columns position *1/ */

        printf("%3.0f\t%6.1f\n", fahr, celsius); /* add double format */

        fahr = fahr + step;
    }
}
