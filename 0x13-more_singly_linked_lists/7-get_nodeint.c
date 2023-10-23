#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node at a specified index in a linked list.
 * @head: Pointer to the first node in the linked list.
 * @index: Index of the node to retrieve.
 *
 * Return: Pointer to the desired node, or NULL if not found.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int current_index = 0;  // Variable to keep track of the current index.
	listint_t *current_node = head;   // Variable to traverse the linked list.

	// Traverse the list until the desired index is reached or the end of the list is reached.
	while (current_node && current_index < index)
	{
		current_node = current_node->next;
		current_index++;
	}

	// Return the node at the specified index, or NULL if it doesn't exist.
	return (current_node ? current_node : NULL);
}

