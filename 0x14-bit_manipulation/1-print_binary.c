#include <unistd.h>
#include "main.h"

/**
 * print_binary - Prints a binary notation of a number.
 * @n: number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}

/**
 * _putchar - Writes a character to stdout
 * @c: The character to write
 *
 * Return: On success, the number of characters written.
 *         On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

