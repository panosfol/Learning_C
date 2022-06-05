#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 20

void read_line (char [], int);

int main(void)
{
    char smallest_word [MAX_LENGTH + 1], largest_word [MAX_LENGTH + 1], word[MAX_LENGTH + 1];

    printf ("Enter word: ");
    read_line (word, MAX_LENGTH);
    strcpy (smallest_word, word);
    strcpy (largest_word, word);
    while (strlen(word) != 4) {
        printf ("Enter word: ");
        read_line (word, MAX_LENGTH);
        if (strcmp (smallest_word, word) > 0)
            strcpy (smallest_word, word);
        if (strcmp (largest_word, word) < 0)
            strcpy (largest_word, word);
    }
    printf ("Smallest word: %s\n", smallest_word);
    printf ("Largest word: %s\n", largest_word);
    return 0;
}

void read_line (char word[], int n)
{
    int i = 0, ch;
    while ((ch = getchar ()) != '\n')
        if (i < n)
            word [i++] = ch;
    word [i] = '\0';
}