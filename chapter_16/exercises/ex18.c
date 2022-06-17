#include <stdio.h>

enum piece {empty, p, N, B, R, Q, K};
enum color {black, white};
struct square {
    enum piece p;
    enum color c;
} sq;

struct square chess_board[8][8];


int main() {return 0;}