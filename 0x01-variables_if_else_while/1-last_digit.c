#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;

	if (m > 5)
		printf("Last digit of %d is %d and is greater tha 5\n", n, m);
	else if (m == 0)
		printf("Last digit of %d is %d and is 0\n", n, m);
	else if (m < 6 && m != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	printf("\n");

	return (0);
}
