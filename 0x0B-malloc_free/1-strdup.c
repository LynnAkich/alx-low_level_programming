#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: string to duplicate
 * Return: string duplicated
 */
char *_strdup(char *str)
{
	int b = 0, j = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[j])
	{
		j++;
	}

	s = malloc((sizeof(char) * j) + 1);

	if (s == NULL)
		return (NULL);

	while (b < j)
	{
		s[b] = str[b];
		b++;
	}

	s[b] = '\0';
	return (s);
}
