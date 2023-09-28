#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars.
 * Return: [0]  If b is NULL or contains chars not 0 or 1
 *         else - the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	int lee = 0;
	unsigned int zee = 0;

	if (!b)
		return (0);

	while (b[lee] != '\0')
	{
		if (b[lee] != '0' && b[lee] != '1')
			return (0);
		lee++;
	}

	lee = 0;
	while (b[lee] != '\0')
	{
		zee <<= 1;
		if (b[lee] == '1')
			zee += 1;
		lee++;
	}

	return (zee);
}
