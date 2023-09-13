#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned int fib1 = 1;
	unsigned int fib2 = 2;
	unsigned int next;
	int count = 2;

	printf("%u, %u", fib1, fib2);

	while (count < 98)
	{
		next = fib1 + fib2;
		printf(", %u", next);

		fib1 = fib2;
		fib2 = next;

		count++;
	}

	printf("\n");

	return (0);
}
