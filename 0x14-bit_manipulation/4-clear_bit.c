#include "main.h"
#include <stdio.h>

/**
 * clear_bit - Sets the value of a bit to 0 at a given position.
 * @n: Pointer to the decimal number to modify.
 * @index: Position of the bit to change.
 * Return: 1 if the operation was successful, -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;
	unsigned int bitPosition;

	if (index > 64)
		return (-1);

	bitPosition = index;
	mask = 1UL << bitPosition;

	if ((*n >> index) & 1)
		*n -= mask;

	return (1);
}

