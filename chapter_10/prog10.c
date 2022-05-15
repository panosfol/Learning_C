#include <stdio.h>
#include <stdbool.h>

#define MAX_DIGITS 10

void process_digits (int digit, int poisition);
void print_digits_array (void);
void clear_digits_array (void);

bool segments [10][7] = {{1 ,1 ,1 ,1 ,1 ,1},
                         {0, 1, 1,},
                         {1, 1, 0, 1, 1, 0, 1},
                         {1, 1, 1, 1, 0, 0, 1},
                         {0, 1, 1, 0, 0, 1, 1},
                         {1, 0, 1, 1 ,0 ,1, 1},
                         {1 ,0 ,1, 1, 1, 1, 1},
                         {1, 1, 1},
                         {1, 1, 1, 1, 1, 1, 1},
                         {1, 1, 1, 1, 0, 1, 1}};
char digits [3][MAX_DIGITS * 4];

int main (void)
{
    int i, j, digit_rep = 0, position = 0, digit;
    char  ch;
    
    for (i = 0; i < 3; i++){
        for (j = 0; j < MAX_DIGITS * 4 - 1; j++){
            digits [i][j] = ' ';
        }
    }
    printf (" Enter a number: \n");
    while ( ((ch = getchar ()) != '\n') && digit_rep < 10){
        if (ch >= 48 && ch <= 59) {
            digit = ch - 48;
            process_digits (digit, position);
            position += 4;
            digit_rep++;
            }
    }
    print_digits_array();
    clear_digits_array();
    return 0;
}

void process_digits (int digit, int position)
{    
    if (segments [digit][0]){
        digits [0][position + 1] = '_';
        digits [0][position + 2] = '_';
    }
    if (segments [digit][1]) 
        digits [1][position + 3] = '|';
    if (segments [digit][2])
        digits [2][position + 3] = '|';
    if (segments [digit][3]){
        digits [2][position + 1] = '_';
        digits [2][position + 2] = '_';
    }
    if (segments [digit][4])
        digits [2][position] = '|';
    if (segments [digit][5])
        digits [1][position] = '|';
    if (segments [digit][6]){
        digits [1][position + 1] = '_';
        digits [1][position + 2] = '_';
    }
    return;
}

void print_digits_array (void)
{
    int i, j;
    for (i = 0; i < 3; i++){
        for (j = 0; j < MAX_DIGITS * 4; j++){
            printf ("%c", digits[i][j]);
        }
        printf ("\n");
    }
    return;
}
    
void clear_digits_array (void)
{
    int i, j;
    for (i = 0; i < 3; i++){
        for (j = 0; j < MAX_DIGITS; j++){
            digits [i][j] = ' ';
        }
    }
    return;
}