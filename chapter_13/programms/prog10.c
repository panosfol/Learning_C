#include <stdio.h>
#include <string.h>

void reverse_name (char *name);

int main(void)
{
    char first_name[50],last_name[50];

    printf ("Enter a first and last name: \n");
    scanf ("%s", first_name);
    scanf ("%s", last_name);
    strcat (first_name, " ");
    strcat (first_name, last_name);
    reverse_name(first_name);
    puts (first_name);
    return 0;
}

void reverse_name (char *name)
{
    char *p = name, first_letter, temp_name[2];

    strncpy (temp_name, p, 1);
    do {
        p++;
    } while (*p != ' ');
    for (; *p == ' '; p++)
        ;
    strcpy (name, p);
    strcat (name, ", ");
    strcat (name, temp_name);
    strcat (name, ".");
}
    
    
        