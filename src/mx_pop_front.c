#include "libmx.h"

void mx_pop_front(t_list **head) {
    t_list *temp = NULL;
    
    if (head && *head) {
        temp = *head;
        *head = (*head)->next;

        if (temp->data)
            free(temp->data);
        free(temp);
    }
}
