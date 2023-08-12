#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: everytime 0 (Successful)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (j = 'a' ; j <= 'f' ; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
