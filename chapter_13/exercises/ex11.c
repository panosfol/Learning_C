#include <stdio.h>

int strcmp (char *s, char *t)
{
    int i;
    char *p, *q;

    for (p = s, q = t; *p == *q; p++, q++)
        if (*p == '\0')
            return 0;
    return *p - *q;
}