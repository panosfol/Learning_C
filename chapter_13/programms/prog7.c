#include <stdio.h>
#include <string.h>

int main (void)
{
    char *tens[] = {"twenty","thirty","forty","fifty","sixty",
                  "seventy","eighty","ninety"};
    char *ones[] = {"one","two","three","four",
                  "five","six","seven","eight","nine"};
    int first_digit, second_digit;
    
    printf ("Enter a two-digit number: \n");
    scanf ("%1d", &first_digit);
    scanf ("%1d", &second_digit);
    printf ("%s", tens[first_digit - 2]);
    putchar ('-');
    printf ("%s\n", ones[second_digit - 1]);
    return 0;
}
    