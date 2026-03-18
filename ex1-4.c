#include <stdio.h>

/* print celsius-fahrenheit table
    for celsius = -20, -10, ..., 160; floating-point version
    with heading */
main()
{
    float fahr, cels;
    float upper, lower, step;

    lower = -20.0;  /* lower limit of temperature scale */
    upper = 160.0;  /* upper limit */
    step = 10.0;    /* step size */

    printf("Celsius to Fahrenheit Conversion Table\n\n");

    cels = lower;
    while (cels <= upper) {
        fahr = cels * (9.0/5.0) + 32.0;
        printf("%3.0f %5.1f\n", cels, fahr);
        cels = cels + step;
    }
}
