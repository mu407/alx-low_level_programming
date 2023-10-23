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
    listint_t *current_node = *head; // Pointer to the current node.
    listint_t *previous_node = NULL; // Pointer to the previous node.
    unsigned int i = 0; // Index counter.

    // Check if the list is empty.
    if (*head == NULL)
        return (-1);

    // If the node to delete is the first node (index 0).
    if (index == 0)
    {
        *head = (*head)->next; // Update the head to the next node.
        free(current_node); // Free the memory of the deleted node.
        return (1); // Deletion successful.
    }

    // Traverse the list to find the node before the one to delete.
    while (i < index - 1)
    {
        if (!current_node || !(current_node->next))
            return (-1); // Index is out of bounds.
        previous_node = current_node; // Save the previous node.
        current_node = current_node->next; // Move to the next node.
        i++;
    }

    // Adjust the pointers to skip the node to be deleted.
    previous_node->next = current_node->next;
    free(current_node); // Free the memory of the deleted node.

    return (1); // Deletion successful.
}

