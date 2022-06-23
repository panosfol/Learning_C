#include <stdio.h>

int sum (int (*f)(int), int start, int end) {
    
    int sum = 0, i;

    for (i = start; i <= j; i++) {
        sum = (*f)(i);
    }
    return sum;
}