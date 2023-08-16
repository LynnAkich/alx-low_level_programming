#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns sum
 * @a: value 1
 * @b: value 2
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns difference
 * @a: value 1
 * @b: value 2
 * Return: Difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns the product
 * @a: value 1
 * @b: value 2
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the division
 * @a: value 1
 * @b: value 2
 * Return: quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns remainder of division
 * @a: value 1
 * @b: value 2
 * Return: remainder of division of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
