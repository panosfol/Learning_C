#include <stdio.h>

void find_two_largest (const int *a, int n, int *largest,
                       int *second_largest)
{
    int *p, i;
    *largest = *second_largest = a[0];
    for (p = a; p < a + n; p++) {
        if (*p > *largest) {
            *largest = *p;
            i = p - a;
        }
        for (p = a; p < a + i; p++) {
            if (*p > *second_largest)
                *second_largest = *p;
        }
        for (p = a + i + 1; p < a + n; p++) {
            if (*p > *second_largest)
                *second_largest = *p;
    }
}