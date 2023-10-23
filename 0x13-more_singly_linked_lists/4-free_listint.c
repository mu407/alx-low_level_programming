#include "lists.h"

/**
 * free_listint - Frees a linked list of integers.
 * @head: A pointer to the head of the listint_t list to be freed.
 */
void free_listint(listint_t *head)
{
    listint_t *current;

    while (head)
    {
        current = head->next;
        free(head);
        head = current;
    }
}

