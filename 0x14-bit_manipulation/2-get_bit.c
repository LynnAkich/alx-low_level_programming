#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number in which bits are checked
 * @index: index to check bit
 * Return: value of the bit at index index
 * or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned lomg int divisor, checks;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divisor = 1 << index;
	check = n & divisor;
	if (check == divisor)
		return (1);
	return (0);
}
