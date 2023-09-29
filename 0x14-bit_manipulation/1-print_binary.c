/**
 * print_binary - Prints a binary notation of a number.
 * @n: number to be printed in binary.
 */

void print_binary(unsigned long int n)
{
	int num_bits = sizeof(n) * 8;
	int z = num_bits - 1;

	while (z >= 0)
	{
		int bit = (n >> z) & 1;
		_putchar(bit + '0');
		z--;
	}
}

