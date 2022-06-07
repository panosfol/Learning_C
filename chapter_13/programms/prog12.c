#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define word_count 30
#define word_length 20

bool read_line (char [], int n, char *p);

int main(void)
{
    char word_array[word_count][word_length], end_char, *p;
    int i;

    p = &end_char;
    printf ("Enter a sentence: ");
    for (i = 0; i < word_count; i++) {
        if (read_line (word_array[i], word_length, p)) 
            break;      
    }
    for (; i >= 0; i--) {
        printf ("%s", word_array[i]);
        printf (" ");
    }
    printf ("\b%c", end_char);
    printf ("\n");
    return 0;
    
}

bool read_line (char word[], int n, char *p)
{
    int ch, i = 0;

    while ((ch = getchar()) != ' ') {
        if (i < n)
            word[i++] = ch;
        if (ch == '.' || ch == '?' || ch == '!')
            break;
    }
    word[i] = '\0';
    if (word [i - 1] == '.' || word [i - 1] == '?' || word [i - 1] == '?') {
        *p = word [i - 1];
        word [i - 1] = '\0'; 
        return true;
    }
    else return false;
}
