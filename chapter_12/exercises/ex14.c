#include <stdio.h>

int main(void)
{
    int temperature [7][24], *p;
    bool flag = false;

    for (p = temperature [24]; p < &temperature [6][23]; p++) {
        if (*p == 32) {
            flag = true;
            break;
        }
    }
    return 0;
}