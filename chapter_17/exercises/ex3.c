#include <stdio.h>
#include <stdlib.h>

int *create_array (int n, int initial_value) {
    int *p;
    p = malloc (n * (sizeof int));
    return p;
}

