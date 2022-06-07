#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define N 100

bool is_palindrome (const char *message);

int main (void)
{
    char message[N + 1], ch, *p = message;
    
    printf ("Enter a message: ");
    while ((ch = getchar ()) != '\n' && p < message + N) {
        ch = toupper(ch);
        if (ch >= 65 && ch <= 90) {
            *p = ch;
            p++;
        }
    }
    if (is_palindrome (message))
        printf ("Palindrome\n");
    else printf ("Not a palindrome\n");
    return 0;
}

bool is_palindrome (const char *message)
{
    const char *q = message, *p = message;
    while (*q)
        q++;
    for (q--; q > message; p++, q--) {
        if (*p != *q) {
            return false;
        }
    }
    return true;
}