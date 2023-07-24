#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string value
 * Return: int converted from string
 */
int _atoi(char *s)
{
	int i, a, b, length, c, digit;

	i = 0;
	a = 0;
	b = 0;
	length = 0;
	c = 0;
	digit = 0;

	while (s[length] != '\0')
		length++;

	while (i < length && c == 0)
	{
		if (s[i] == '-')
			++a;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (a % 2)
				digit = -digit;
			b = b * 10 + digit;
			c = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			c = 0;
		}
		i++;
	}

	if (c == 0)
		return (0);

	return (b);
}
