#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LENGTH 20
#define MAX_WORD 10

int read_line (char [], int);
void sort_function (char *[], int);

int main() {

    char *words[MAX_WORD];
    int word_length;
    int i = 0, j;
    char word[MAX_LENGTH];
    
    for (;;) {
        printf ("Enter word: \n");
        word_length = read_line(word, MAX_LENGTH + 1);
        if (word_length == 0)
            break;
        words[i] = malloc(sizeof(char) * word_length);
        strcpy (words[i], word);
        if (words[i] == NULL) 
            printf ("Malloc failed\n");
        i++;
    }
    //qsort(words, i, sizeof(words[0]), compare);
    sort_function(words, i);
    printf ("In sorted order: ");
    for (j = 0; j < i; j++) {
        printf ("%s", words[j]);
        printf (" ");
    }
    printf("\n");
    return 0;
}

void sort_function (char *words[], int n) {
    int i, j;
    char *temp;

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp (words[i], words[j]) > 0) {
                temp = words[i];
                words[i] = words[j];
                words[j] = temp;
            }
        }
    }
}

int read_line (char str[], int n) {
    int ch, i = 0;
    
    while ((ch = getchar()) != '\n') 
        if (i < n)
            str[i++] = ch;
        str[i] = '\0';
        if (i == 0)
            return 0;
        return i;
}