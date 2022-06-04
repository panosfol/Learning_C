#include <stdio.h>

int *find_middle (int a[], int n)
{
    int i, *middle = a;
    for (i = 0; i < n / 2; i++) {
        middle++;
    }
    return middle;
}