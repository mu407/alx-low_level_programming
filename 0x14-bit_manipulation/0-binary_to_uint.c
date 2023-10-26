#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Convert a binary string to an unsigned int.
 * @b: The binary string to convert.
 * Return: The converted decimal number or 0 if there are unconvertible
 */
unsigned int binary_to_uint(const char *p)
{
	unsigned int total, power;
	int len;

	if (p == NULL)
		return (0);

	for (len = 0; p[len]; len++)
	{
		if (p[len] != '0' && p[len] != '1')
			return (0);
	}

	for (power = 1, total = 0, len--; len >= 0; len--, power *= 2)
	{
		if (p[len] == '1')
			total += power;
	}

	return (total);
}
