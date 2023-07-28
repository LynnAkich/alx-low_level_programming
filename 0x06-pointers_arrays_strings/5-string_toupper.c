#include "main.h"
/**
 * string_toupper - Change lowercases to uppercases
 * @i: pointer
 * Return: i
 */
char *string_toupper(char *i)
{
	int j;

	j = 0;
	while (i[j] != '\0')
	{
		if (i[j] >= 'a' && i[j] <= 'z')
			i[j] = i[j] - 32;
		j++;
	}
	return (i);
}
