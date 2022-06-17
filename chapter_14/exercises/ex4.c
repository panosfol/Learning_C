#include <stdio.h>

#define AVG(x, y) ((x + y) / 2)
#define AREA(x, y) ((x)*(y))

int main () {
    printf ("%d\n", 20 / AVG (4, 6));
    printf ("%d\n", 100 / AREA(5, 10));
    return 0;
}