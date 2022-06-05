#include <stdio.h>
#include <ctype.h>

int capitalize (char str[], int n)
{
    int i;
    char *p = str;
    while (*p != '\0') {
        if (((*p >= 65) && (*p <= 90)) || ((*p >= 97) && (*p <= 122)))
            *p = toupper (*p);
        p++;
    }
}