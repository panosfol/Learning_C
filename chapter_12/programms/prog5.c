#include <stdio.h>

#define N 100

int main(void)
{
    char sentence[N], end_char, ch, *p, *q;
    printf ("Enter a sentence: ");
    ch = getchar();
    for (p = sentence; p < sentence + N; p++) {
        if (ch == '!' || ch == '.' || ch == '?') {
            end_char = ch;
            break;
        }
        *p = ch;
        ch = getchar();
    }
    *p = ' ';
    for (q = p - 1; q >= sentence; q--) {
        if (q == sentence) {
            do {
                printf ("%c", *q);
                q++;
            } while (*q != ' ');
            break;
        }
        if (*q == ' ' || q == sentence) {
            p = q;
            do {
                q++;
                printf ("%c", *q);
            } while (*q != ' ');
            q = p;
        }
    }
    putchar (end_char);
    printf ("\n");
    return 0;
}