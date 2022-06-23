#include <stdio.h>


struct node *delete_from_list (struct node *list, int n)
{
    struct node *prev;

    for (prev = NULL;
         list != NULL && list -> value != n;
         prev = list, list = list -> next)
      ;
    
    if (list == NULL)
        return list;
    if (prev == NULL)
        list = list -> next;
    else
        prev -> next = list -> next;
    return list;
}