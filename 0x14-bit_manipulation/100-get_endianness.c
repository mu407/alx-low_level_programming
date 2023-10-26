#include "main.h"

/**
 * checkEndianness - Check the endianness of the system.
 * Return: 0 if big endian, 1 if little endian.
 */
int checkEndianness(void)
{
	int value;

	value = 1;
	if (*(char *)&value == 1)
		return 1;
	else
		return 0;
}

