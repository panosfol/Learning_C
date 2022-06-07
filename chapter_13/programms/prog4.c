#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char arg1[15], arg2[15];

    strcpy(arg1, argv[4]);
    strcpy(arg2, argv[2]);
    printf ("%s and %s\n", arg1, arg2);
    return 0;

}