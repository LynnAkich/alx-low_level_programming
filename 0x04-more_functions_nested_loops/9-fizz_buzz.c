#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * Description: prints the numbers 1 - 100 with new line
 * Fizz for multiplication of 3, Buzz for multiplies of 5,
 * and FizzBuzz for multiplication of both
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
