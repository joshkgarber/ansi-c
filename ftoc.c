#include <stdio.h>

/* print fahrenheit-celsius table
    for fahr = 0, 20, ..., 300 */
main()
{
    int fahr, cels;
    int upper, lower, step;

    lower = 0;      /* lower limit of temperature scale */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    fahr = lower;
    while (fahr <= upper) {
        cels = 5 * (fahr - 32) / 9;
        printf("%3d %6d\n", fahr, cels);
        fahr = fahr + step;
    }
}
