#include <stdio.h>

int evaluate_position (char board [8][8])
{
    int i, j, sum_white, sum_black;
    char *p;
    for (p = board[0]; p < &board[7][7]; p++) {
        switch (*p) {
            case 'Q': sum_white += 9; break;
            case 'q': sum_black += 9; break;
            case 'R': sum_white += 5; break;
            case 'r': sum_black += 5; break;
            case 'B': case 'N' : sum_white += 3; break;
            case 'b': case 'n' : sum_black += 3; break;
            case 'P': sum_white++; break;
            case 'p': sum_black++; break;
        }
    }
    return sum_white - sum_black;
}