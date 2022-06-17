#include <stdio.h>

struct pinball_machine {
    char name[40];
    int year;
    int players;
    enum {EM, SS} type;
};

int main() {return 0;}