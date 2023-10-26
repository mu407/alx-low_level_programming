#include "main.h"
#include <stdio.h>
/**
 * get_bit - Gets the value of a bit at a specified position.
 * @n: The number to evaluate.
 * @index: The position (0-based) of the bit to retrieve.
 * Return: The value of the bit at the given index, or -1 if there's an error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hold;

	if (index > 64)
		return (-1);

	hold = n >> index;

	return (hold & 1);
}
