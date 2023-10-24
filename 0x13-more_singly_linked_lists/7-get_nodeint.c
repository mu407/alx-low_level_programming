#include "lists.h"

/**
 * get_nodeint_at_index
 * @head: Pointer to the first node in the linked list.
 * @index: Index of the node to retrieve.
 *
 * Return: Pointer to the desired node, or NULL if not found.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int current_index = 0;
	listint_t *current_node = head;

	while (current_node && current_index < index)
	{
		current_node = current_node->next;
		current_index++;
	}

	return (current_node ? current_node : NULL);
}
