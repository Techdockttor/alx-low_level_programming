#include "main.h"
#include <stdio.h>

/**
 * set_bit - Sets the value of a bit at a given index to 1.
 * main - main function.
 * @n: A pointer to the bit to set
 * @index: The index to set the value of bit
 * Return: 1 if error, else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	mask = 1UL << index;
	*n = *n | mask;

	return (1);
}

/**
 * main - Entry point of the program.
 * This function demonstrates the usage of the set_bit function by setting
 * a specific bit in an unsigned long integer and printing the result.
 * Return: Always 0 (Success).
 */

int main(void)
{
	unsigned long int num = 42;
	unsigned int bit_index = 2;

	int result = set_bit(&num, bit_index);

	if (result == 1)
		printf("Bit set successfully. New value: %lu\n", num);
	else
		printf("Failed to set bit.\n");

	return (0);
}
