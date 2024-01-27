#include <stdio.h>
#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using the Insertion Sort algorithm
 * @list: double pointer to head of the list
 */
void insertion_sort_list(listint_t **list)
{
listint_t *current, *temp;

if (list == NULL || *list == NULL)
return;

current = (*list)->next;
while (current != NULL)
{
temp = current;
current = current->next;

while (temp && temp->prev && temp->prev->n > temp->n)
{
temp->prev->next = temp->next;
if (temp->next)
temp->next->prev = temp->prev;

temp->next = temp->prev;
temp->prev = temp->prev->prev;
temp->next->prev = temp;

if (temp->prev == NULL)
*list = temp;

/* Print the list after each swap */
print_list(*list);
}
}
}
