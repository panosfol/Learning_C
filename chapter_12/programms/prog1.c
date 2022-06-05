#include <stdio.h>

#define N 100

int main(void)
{
    char sentence [N], *p;
    printf ("Enter a message: ");
    for (p = sentence; p <= sentence + N; p++) {
        *p = getchar();
        if (*p == '\n')
            break;
    }
    printf ("Reversal is: ");
    for (p--; p >= sentence; p--) {
        putchar (*p);
    }
    putchar ('\n');
    return 0;
}