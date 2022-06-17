#include <stdio.h>

enum {NORTH, SOUTH, EAST, WEST} direction;



int main () {

    int x, y;
    switch (direction){
       case NORTH: y--; break;
       case SOUTH: y++; break;
       case WEST: x--; break;
       case EAST: x++; break;
}