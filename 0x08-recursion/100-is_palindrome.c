#include "main.h"

int check_pal(char *s, int j, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome -  returns 1 if a string is
 * a palindrome and 0 if not
 * @s: string to reverse
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns length of string
 * @s: string to calculate length of
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks the characters recursively for palindrome
 * @s: string to check
 * @j: iterator
 * @len: length of string
 * Return: 1 if palindrome, 0 if otherwise
 */
int check_pal(char *s, int j, int len)
{
	if (*(s + j) != *(s + len - 1))
		return (0);
	if (j >= len)
		return (1);
	return (check_pal(s, j + 1, len - 1));
}
