/* Exercise 1.15. Rewrite the temperature conversion program of Section 1.2 to use a function for conversion. */

#include <stdio.h>

float convert(float f);

int main(void)
{
    float fahr, cels;
    float upper, lower, step;

    lower = 0;      /* lower limit of temperature scale */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    fahr = lower;
    while (fahr <= upper) {
        cels = convert(fahr);
        printf("%3.0f %6.1f\n", fahr, cels);
        fahr = fahr + step;
    }
}

float convert(float f)
{
    float c = (5.0 / 9.0) * (f - 32.0);
    return c;
}
