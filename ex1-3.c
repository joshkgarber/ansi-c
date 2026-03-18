#include <stdio.h>

/* print fahrenheit-celsius table
    for fahr = 0, 20, ..., 300; floating-point version
    with heading */
main()
{
    float fahr, cels;
    float upper, lower, step;

    lower = 0;      /* lower limit of temperature scale */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    printf("Fahrenheit to Celsius Conversion Table\n\n");

    fahr = lower;
    while (fahr <= upper) {
        cels = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, cels);
        fahr = fahr + step;
    }
}
