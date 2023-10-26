#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to the decimal number to be modified.
 * @index: Index of the bit to be set (starting from 0).
 * Return: 1 if successful, -1 if there is an error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int position;

	if (index > 64)
		return (-1);

	for (position = 1; index > 0; index--, position *= 2)
		;
	*n += position;

	return (1);
}

