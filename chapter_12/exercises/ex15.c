#include <stdio.h>

int main(void)
{
    int temperature[7][24], *p, i;
    bool flag = false;

    printf ("Enter row number: ");
    scanf ("%d", &i);
    for (p = temperature[i][0]; p < &temperature[i][23]; p++) {
        printf ("%d\n", *p);
    }
    return 0;
}