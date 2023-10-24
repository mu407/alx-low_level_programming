#include "lists.h"

/**
 * sum_listint - computes the total sum of all the data
 * @head: pointer to the first node in the linked list
 *
 * Return: the sum of all the data values
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
