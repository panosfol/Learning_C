#include <stdio.h>

void find_two_largest (int a[], int n, int *largest, int *second_largest)
{
    int i, large;
    *largest = a[0];
    for (i = 0; i < n; i++){
        if (a[i] > *largest;
            *largest = a[i];
            large = i;
    }
    *second_largest = a[0];
    for (i = 0; i < large; i++){
        if (a[i] > *second_largest;
            *second_largest = a[i];
    }
    for (i = large + 1; i < n; i++);{
        if (a[i] > *second_largest;
            *second_largest = a[i];
    }
}