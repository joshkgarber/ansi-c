#include <stdio.h>

/* Exercise 1-8. Write a program to count blanks, tabs, and newlines. */

int main()
{
    int c, ws;

    ws = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++ws;
        else if (c == '\t')
            ++ws;
        else if (c == ' ')
            ++ws;
    printf("%d\n", ws);
}
