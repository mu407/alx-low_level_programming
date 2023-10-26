#include "main.h"

/**
 * get_endianness - Check the endianness of the system
 *
 * Return: 0 if the system is big endian, or 1 if it's little endian
 */
int get_endianness(void)
{
	int num;

	num = 1;
	if (*(char *)&num == 1)
		return (1);
	else
		return (0);
}
