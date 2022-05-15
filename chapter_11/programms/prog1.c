#include <stdio.h>

void pay_amount (int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void) 
{
    int dollars, twenty = 0, ten = 0, five = 0, one = 0;
    printf ("Enter a dollar amount: \n");
    scanf ("%d", &dollars);
    pay_amount (dollars, &twenty, &ten, &five, &one);
    printf ("20$ bills: %d\n", twenty);
    printf ("10$ bills: %d\n", ten);
    printf ("5$ bills: %d\n", five);
    printf ("1$ bills: %d\n", one);
    return 0;
}

void pay_amount (int dollars, int *twenties, int *tens, int *fives, int *ones)
{
    *twenties = dollars / 20;
    dollars = dollars % 20;
    *tens = dollars / 10;
    dollars = dollars % 10;
    *fives = dollars / 5;
    dollars = dollars % 5;
    *ones = dollars;
    return;
}