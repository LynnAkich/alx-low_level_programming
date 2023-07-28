#include "main.h"
/**
 * rev_string - reverse array
 * @n: integer value
 * Return: 0
 */
void rev_string(char *n)
{
	int a = 0;
	int b = 0;
	char temp;

	while (*(n + a) != '\0')
	{
		a++;
	}
	a--;

	for (b = 0; b < a; b++, a--)
	{
		temp = *(n + b);
		*(n + b) = *(n + a);
		*(n + a) = temp;
	}
}

/**
 * infinite_add - add two numbers
 * @n1: number 1
 * @n2: number 2
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, a = 0, b = 0, digits = 0;
	int val0 = 0, val1 = 0, temp_tot = 0;

	while (*(n1 + a) != '\0')
		a++;
	while (*(n2 + b) != '\0')
		b++;
	a--;
	b--;
	if (b >= size_r || a >= size_r)
		return (0);
	while (b >= 0 || a >= 0 || overflow == 1)
	{
		if (a < 0)
			val0 = 0;
		else
			val0 = *(n1 + a) - '0';
		if (b < 0)
			val1 = 0;
		else
			val1 = *(n2 + b) - '0';
		temp_tot = val0 + val1 + overflow;
		if (temp_tot >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp_tot % 10) + '0';
		digits++;
		b--;
		a--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
