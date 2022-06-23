#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_SIZE 100

struct node {
    int content, 
    struct node *next; 
}

struct node *top = NULL;

void make_empty() {

    struct node *temp;

    while (top != NULL) {
        temp = top;
        top = top -> next;
        free(temp);
    }
}   

bool is_empty() {
    return top == NULL;
}

bool push (int i) {
    struct node *new_node;

    new_node = malloc (sizeof(struct node));
    new_node -> next = top;
    new_node -> content = i;
    top = new_node;

    return true;
}


int pop() {

    struct node *temp;
    int i;

    if (is_empty()) {
        printf ("Stack underflow; program terminated. \n");
        exit(EXIT_FAILURE);
    }
    i = top -> content;
    temp = top;
    top = top -> next;
    free (temp);

    return i;
}