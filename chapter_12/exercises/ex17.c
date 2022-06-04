#include <stdio.h>

int sum_two_dimensional_array (const int a[][LEN], int n)
{
    int *p, sum = 0;

    for (p = a[LEN]; p < &a[n - 1][LEN - 1]; p++)
        sum += *p;
    return sum;
}