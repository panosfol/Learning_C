#include <stdio.h>

int *find_largest (int a[], int n)
{
    int largest = a[0], i, large;
    for (i = 0 ; i < n; i++){
        if (a[i] > largest)
            largest = a[i]
            large = i;
    }
    return &a[large];
}