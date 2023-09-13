#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int fib1 = 1;
	unsigned long int fib2 = 2;
	unsigned long int next;
	int count = 2;

	printf("%lu, %lu", fib1, fib2);

	while (count < 98)
	{
		next = fib1 + fib2;
		printf(", %lu", next);

		fib1 = fib2;
		fib2 = next;

		count++;
	}

	printf("\n");

	return (0);
}
