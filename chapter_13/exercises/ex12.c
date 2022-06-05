#include <stdio.h>
#include <string.h>

void get_extension (const char *file_name, char *extension)
{
    while (file_name++) {
        if (*file_name == '.')
            break;
    }
    if (*file_name == '\0')
        *extension = '\0';
    else
        file_name++;
        strcpy (extension, file_name);
    return;
}