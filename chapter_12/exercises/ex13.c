#include <stdio.h>

#define N 10

int main(void)
{
    int i = 10, *p, matrix[N][N], j;
    for (p = matrix[0]; p <= &matrix [N - 1][N - 1]; p++) {
        if (i == 10) {
            *p = 1;
            i = 0;
        }
        else {
            *p = 0;
            i++;
        }
    }
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf ("%d", matrix [i][j]);
        }
        printf ("\n");
    }
    return 0;
}