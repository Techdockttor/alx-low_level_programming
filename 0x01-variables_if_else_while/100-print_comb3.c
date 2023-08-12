#include <stdio.h>

/**
 * main - function to print combination of two numbers
 *
 * Return: 0 (Successful)
 *
 */
int main(void)
{
int first_digit, second_digit;
for (first_digit = 0; first_digit <= 8; first_digit++)
{
for (second_digit = first_digit + 1; second_digit <= 9; second_digit++)
{
putchar(first_digit + '0');
putchar(second_digit + '0');
if (first_digit != 8 || second_digit != 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
