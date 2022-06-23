#include <stdio.h>
#include <stdlib.h>

void *my_malloc (int n);

int main() {
    
    my_malloc(5);
    return 0;
}

void *my_malloc(int n){

    void *temp;
    temp = malloc(sizeof(int));
    if (temp == NULL) {
        printf ("Error");
        exit (1);
    }
    return temp;
}