#include <stdio.h>

#define CHECK(x, y, n) ( x > 0 && x < n - 1 && y > 0 && y < n - 1? 1 : 0)
#define MEDIAN(x, y, z) ((x + y + z)/3)
#define POLYNOMIAL(x) (((3) * (x) * (x) * (x) * (x) * (x)) + (2 * (x) * (x) * (x) * (x)) - (5 * (x) * (x) * (x) ) - ((x) * (x)) + (7 * (x)) - 6)

int main() {
    printf ("%d\n", POLYNOMIAL(0));
    return 0;
}