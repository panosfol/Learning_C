#include <stdio.h>
#include <stdlib.h>

void delete_from_list (struct node **list, int n)
{
    struct node *cur, *prev;

    for (cur = *list, prev = NULL;
         cur != NULL && cur -> value != n;
         prev = cur, cur = cur -> next)
         ;
    if (prev == NULL)
        *list = (*list) -> next;
    else
        prev -> next = cur -> next;
    free (cur);
}