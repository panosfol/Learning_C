#include <stdio.h>

void reduce (int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(void)
{
    int numerator, denominator, reduced_num, reduced_denom, remainder;
    printf ("Enter a fraction: \n");
    scanf ("%d/%d", &numerator, &denominator);
    reduce (numerator, denominator, &reduced_num, &reduced_denom);
    printf ("In lowest terms: %d/%d\n", reduced_num, reduced_denom);
    return 0;
}

void reduce (int numerator,int denominator, int *reduced_numerator, int *reduced_denominator)
{
    int remainder, temp_num, temp_denom;
    temp_num = numerator;
    temp_denom = denominator;
    while (temp_denom != 0){
        remainder = temp_num % temp_denom;
        temp_num = temp_denom;
        temp_denom = remainder;
    }
    numerator /= temp_num;
    denominator /= temp_num;
    *reduced_numerator = numerator;
    *reduced_denominator = denominator;
    return;
} 