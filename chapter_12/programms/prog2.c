#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define N 100

int main (void)
{
    char message [N], ch, *p = message, *q;
    int end;
    bool flag = true;
    printf ("Enter a message: ");
    while ((ch = getchar ()) != '\n' && p < message + N) {
        ch = toupper(ch);
        if (ch >= 65 && ch <= 90) {
            *p = ch;
            p++;
        }
    }
    end = p - message;
    for (q = message, p--; q < message + end; q++, p--) {
        if (*q != *p)
            flag = false;
    }
    if (flag)
        printf ("Palindrome\n");
    else printf ("Not a palindrome\n");
    return 0;
}