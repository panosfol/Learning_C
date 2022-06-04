#include <stdio.h>

double inner_product (const double *a, cvonst double *b,
                      int n)
{
    int i, sum;
    double *p = a, *q = b;
    for (i = 0; i < n; i++)
        sum += *(p + i) + *(q + i);
    return sum;
}