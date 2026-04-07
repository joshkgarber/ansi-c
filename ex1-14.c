/* Exercise 1-14. Write a program to print a histogram of the frequencies of different characters
 in its input. */

#include <stdio.h>

int main(void)
{
    int c, i, j, current_word_len, num_words;
    int char_counts[10];

    i, j, num_words = current_word_len = 0;

    for (i = 0; i < 10; ++i)
        char_counts[i] = 0;

    while ((c = getchar()) != '\n' && num_words < 10)
        if (c >= 'a' && c <= 'j')
            ++char_counts[c-'a'];
        
    printf("Character frequencies:\n");
    for (i = 0; i < 10; ++i)
    {
        printf("%c | ", i + 'a');
        for (j = 0; j < char_counts[i]; ++j)
            printf("#");
        printf("\n");
    }
}
