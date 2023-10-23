#include "lists.h"

/**
 * delete_node_at_index - Deletes a node at a specific index in a linked list.
 * @head: Pointer to the first element in the list.
 * @index: Index of the node to delete.
 *
 * Return: 1 (Success), or -1 (Failure).
 */
int delete_node_at_index(listint_t **head, unsigned int index)
{
    listint_t *current_node = *head;
    listint_t *previous_node = NULL;
    unsigned int i = 0;

    // Check if the list is empty.
    if (*head == NULL)
        return (-1);

    // If the node to delete is the first node (index 0).
    if (index == 0)
    {
        *head = (*head)->next;
        free(current_node);
        return (1);
    }

    // Traverse the list to find the node before the one to delete.
    while (i < index - 1)
    {
        if (!current_node || !(current_node->next))
            return (-1);
        previous_node = current_node;
        current_node = current_node->next;
        i++;
    }

    previous_node->next = current_node->next;
    free(current_node);

    return (1);
}

