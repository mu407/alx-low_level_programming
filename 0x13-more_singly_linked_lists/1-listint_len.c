#include "lists.h"

/**
 * listint_len - Counts the number of nodes in a linked list
 * @h: Pointer to the head of the linked list
 *
 * Return: The number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}

