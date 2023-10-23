#include "lists.h"

/**
 * free_listint2 - Frees a linked list of integers and sets the head to NULL.
 * @head: A pointer to a pointer to the listint_t list to be freed.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next; // Store the next node for later access.
		free(*head); // Free the current node.
		*head = temp; // Move the head to the next node.
	}

	*head = NULL; // Set the head pointer to NULL to indicate an empty list.
}

