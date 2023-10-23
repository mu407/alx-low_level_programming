#include "lists.h"

/**
 * pop_listint - Removes the first element of a linked list
 * @head: A pointer to the pointer of the first element in the linked list
 *
 * This function deletes the first element (head) of a linked list and
 * returns the data stored in the deleted node. If the list is empty,
 * it returns 0.
 *
 * Return: The data stored in the removed node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (!head || !*head)
		return (0);

	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);
}
