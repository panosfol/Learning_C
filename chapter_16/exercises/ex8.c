#include <stdio.h>

struct color {
    int red;
    int green;
    int blue;
};

int main () {
    const struct color MAGENTA = {.red = 255,.blue = 255};
    printf ("%d, %d ,%d\n", MAGENTA.red, MAGENTA.green, MAGENTA.blue);
    return 0;
}
