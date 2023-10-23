#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the integer values in a listint_t list.
 * @head: Pointer to the first node in the linked list.
 *
 * Return: The resulting sum of the integer values in the list.
 */
int sum_listint(listint_t *head)
{
    int totalSum = 0;          // Initialize the total sum to 0.
    listint_t *currentNode = head;  // Initialize a pointer to the first node.

    while (currentNode)
    {
        totalSum += currentNode->n;  // Add the integer value of the current node to the total sum.
        currentNode = currentNode->next; // Move to the next node in the list.
    }

    return totalSum;  // Return the calculated sum.
}

