#include <stdio.h>

/* Exercsise 1-6. Verify that the expression `getchar() != EOF` is 0 or 1. */

main()
{
    int c;
    c = getchar() != EOF;
    printf("%d\n", c);
}

/* 
    ctrl+D at the prompt will return 0 as this is the way to provide EOF.
    Everything else will return 1.
*/
