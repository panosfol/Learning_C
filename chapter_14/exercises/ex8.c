#include <stdio.h>

#define STRINGIZING(x) #x
#define STR(x) STRINGIZING(x)
#define LINE_FILE "Line " STR(__LINE__) " of file " __FILE__

int main() {
    const char *str = LINE_FILE;

    puts(str);

    return 0;
}