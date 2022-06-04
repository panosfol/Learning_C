#include <stdio.h>

int find_largest (int a[], int n);

int main(void)
{
    int temperature [7][24], i;
    for (i = 0; i < 7; i++)
        printf ("Highest temperature on day %d is %d\n", i , find_largest (temperature [i], 24));
    return 0;
}

int find_largest (int a[], int n)
{
    int max, i;
    for (i = 0; i < n; i++) {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}