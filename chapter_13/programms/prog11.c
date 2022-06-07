#include <stdio.h>
#include <string.h>

#define LENGTH 100

double compute_average_word_length (const char *sentence);
void read_line (char sentence[], int);

int main (void)
{
    char sentence[LENGTH + 1], ch[10];

    printf ("Enter a sentence: \n");
    read_line (sentence, LENGTH);
    printf ("Average word length: %.1f\n", compute_average_word_length(sentence));
    
    return 0;
}

double compute_average_word_length (const char *sentence)
{
    int sum = 0, word_count = 0, i = 0;
    float average;

    while (*sentence != '\0') {
        if (*sentence != ' ')
            sum++;
        else word_count++;
        sentence++;
    }
    word_count++;
    return average = (float) sum / (float) word_count;
}

void read_line (char sentence[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n') {
        if (i < n)
            sentence[i++] = ch;
    }
    sentence[i] = '\0';
}
