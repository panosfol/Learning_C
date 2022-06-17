#include <stdio.h>

#define ERROR(index) (fprintf(stderr, "Range error: index = %d\n", index))

int main() {
    ERROR(5);
    return 0;
}
