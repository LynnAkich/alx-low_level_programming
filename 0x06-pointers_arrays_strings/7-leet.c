#include "main.h"
/**
 * leet - encodes a string into 1337
 * @a: input value
 * Return: a value
 */
char *leet(char *a)
{
	int y, z;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (y = 0; a[y] != '\0'; y++)
	{
		for (z = 0; z < 10; z++)
		{
			if (a[y] == s1[z])
			{
				a[y] = s2[z];
			}
		}
	}
	return (a);
}
