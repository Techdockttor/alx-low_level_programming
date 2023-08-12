#include <stdio.h>
/**
 * main - Entry point
 * Description - Code that prints out the letters of the alphabet.
 * Return: Eachtime 0 (Successful)
 */
int main(void)
{
int letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}
