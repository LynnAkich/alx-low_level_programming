#include "main.h"
/**
 * cap_string - Capitalizes all words of a string
 * @str: String to be capitalized
 * Return: Pointer to the changed string
 */
char *cap_string(char *str)
{
	int a, b;
	char c[] = {44, 59, 46, '!', '?', '"', '(', ')', '{', '}', ' ', '\t', '\n'};

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a == 0 && str[a] >= 'a' && str[a] <= 'z')
		{
			str[a] = str[a] - 32;
		}
	for (b = 0; c[b] != '\0'; b++)
	{
		if (c[b] == str[a] && (str[a + 1] >= 'a' && str[a + 1] <= 'z'))
		{
			str[a + 1] = str[a + 1] - 32;
		}
	}
	}
	return (str);
}
