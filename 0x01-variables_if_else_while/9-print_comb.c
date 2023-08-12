#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase,
 *              then in uppercase, followed by a new line.
 *
 * Return: Everytime 0 (Successful)
 */
int main(void)
{
char lowercase;
char uppercase;
for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
{
putchar(lowercase);
}
for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
{
putchar(uppercase);
}
putchar('\n');
return (0);
}
