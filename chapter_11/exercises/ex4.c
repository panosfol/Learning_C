#include <stdio.h>

void swap (int *, int *);


int main (void)
{
    int i = 5, j = 7;
    swap(&i, &j);
    printf ("i = %d, j = %d\n", i, j);

    return 0;
}
    
void swap(int *p, int *q)
{
    int *temp, x;

    x = *p;
    temp = &x;
    *p = *q;
    *q = *temp;

    return;
}

