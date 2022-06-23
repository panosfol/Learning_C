#include <stdio.h>
#include <stdlib.h>

struct node *find_last (struct node *list, int n) {
    
    struct node* last_node = NULL;

    while (list != NULL) {
        if (list -> value == n) 
            last_node = list;
        list = list -> next;
    }
    return last_node;
}