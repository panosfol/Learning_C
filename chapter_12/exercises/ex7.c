#include <stdio.h>
#include <stdbool.h>

bool search (const int a[], int n, int key)
{
    bool search_result = false;
    int *p;
    for (p = a; p < a + n; p++) {
        if (key == *p) {
            search_result = true;
            break;
        }
    }
    return search_result;
}