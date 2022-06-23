#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *duplicate (const char *);

int main() {
    char *p;
    p = duplicate("peos");
    puts (p);
    return 0;
}

char *duplicate (const char *str) {

    char *new_str;
    new_str = malloc(strlen(str) + 1);
    if (new_str == NULL) 
        return NULL;
    strcpy (new_str, str);
    return new_str;
}



