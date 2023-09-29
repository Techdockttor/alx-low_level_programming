#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The bits
 * @index: index to check bit and get value
 * Return: -1 if error, Else value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (8 * (sizeof(unsigned long))
		return (-1);

	if (((n >> index) & 1) == 0)

		return (0);

	return (1);
}
