#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area pointed to by s
 * with the constant byte b
 * @s: starting address of memory to be filled
 * @b: value to copy
 * @n: number of times to be copy b
 * Return: pointer to the memory area s
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
