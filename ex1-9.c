#include <stdio.h>

int main()
{
    int c;
    int blanks;

    blanks = 0;
    while ((c = getchar()) != EOF)
        if (c != ' ')
        {
            putchar(c);
            blanks = 0;
        }
        else if (blanks == 0)
        {
            putchar(c);
            ++blanks;
        }

    printf("received EOF\n");
}
