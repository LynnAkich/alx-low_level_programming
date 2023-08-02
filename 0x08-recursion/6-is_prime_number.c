#include "main.h"

int actual_prime(int n, int j);

/**
 * is_prime_number - returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: number to check
 * Return: 1 if n is a prime no. 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a no. is prime recursively
 * @n: number to check
 * @j: iterator
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int n, int j)
{
	if (j == 1)
		return (1);
	if (n % j == 0 && j > 0)
		return (0);
	return (actual_prime(n, j - 1));
}
