#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address to be filled
 * @b: desired value
 * @n: number of bytes to be changed
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
