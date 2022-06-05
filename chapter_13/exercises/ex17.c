#include <stdio.h>
#include <stdbool.>
#include <ctype.h>
#include <string.h>

bool test_extension (const char *file_name,
                     const char *extension)
{
    const char *p = file_name, *q = extension;
    bool flag;
    while (*p)
        p++;
    do {
        p--;
    } while (*p != '.');
    p++;
    if (strlen (p) != strlen (q))
        return false;
    else
        do {
            if (toupper (*p++) == toupper (*q++))
                flag = true;
            else flag = false;
    } while (*p);
    return flag;
}