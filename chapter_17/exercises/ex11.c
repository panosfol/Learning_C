#include <stdio.h>
#include <stdlib.h>

int count_occurencses (struct node *list, int n) {

    int times = 0;
    
    while (list != NULL) {
        if (list -> value == n)
            times++;
        list = list -> next;
    }
    return times;
}
        