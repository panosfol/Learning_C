#include <stdio.h>

#define N 100

void reverse (char *message);

int main(void)
{
    char sentence [N], *p;
    printf ("Enter a message: ");
    for (p = sentence; p <= sentence + N; p++) {
        *p = getchar();
        if (*p == '\n')
            break;
    }
    reverse (sentence);
    printf ("Reversal is: %s\n", sentence);
    return 0;
}

void reverse (char *message)
{
    char *p, *q, temp;
    p = message;
    q = message;
    while (*q != '\0')
        q++;
    
    printf ("%c\n", *--q);
    for (q--; p < q; p++, q--) {
        temp = *p;
        *p = *q;
        *q = temp;
    }
}