int check_palindrome(int str, int len, char *p)
{
	if (str >= len)
		return (1);
	else if (p[str] != p[len])
		return (0);
	else
		return (check_palindrome(str + 1, len - 1, p));
}

/**
 * is_palindrome - states if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome, else 0
 */
int is_palindrome(char *s)
{
	int i;

	i = check_strlen(s) - 1;
	return (check_palindrome(0, i, s));
}
