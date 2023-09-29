#include "main.h"

/**
 * clear_bit - Clear a specific bit at a given index.
 * @n: Pointer to the bit number to clear.
 * @index: Index of the bit to clear.
 *
 * Return: -1 if an error occurs, else 1.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	mask = ~(1UL << index);
	*n = *n & mask;

	return (1);
}
