/* Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. */
/* It is easy to draw the histogram with the bars horizontal; */
/* a vertical orientation is more challenging. */

#include <stdio.h>

/* count digits, white space, others */

int main(void)
{
    int c, i, j, current_word_len, num_words;
    int word_lengths[10];

    i, j, num_words = current_word_len = 0;
    // Initalize an array which will contain the word lengths
    for (i = 0; i < 10; ++i)
        word_lengths[i] = 0;

    // Get 10 words from the user
    // For each word, count the characters
    // When the word ends (a whitespace char is detected), place the length in the array

    while ((c = getchar()) != '\n' && num_words < 10)
        if (c == ' ' || c == '\t')
        {
            word_lengths[num_words] = current_word_len;
            current_word_len = 0;
            ++num_words;
        }
        else
            ++current_word_len;

    word_lengths[num_words] = current_word_len;

    printf("Word lengths histogram (horizontal):\n");
    for (i = 0; i < 10; ++i)
    {
        printf("Word %2d | ", i + 1);
        for (j = 0; j < word_lengths[i]; ++j)
            printf("#");
        printf("\n");
    }
}
