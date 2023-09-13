#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long int fib1 = 1;
	long int fib2 = 2;
	long int next;
	long int sum = 0;

	while (fib2 <= 4000000)
	{
		if (fib2 % 2 == 0)
		{
			sum += fib2;
		}

		next = fib1 + fib2;
		fib1 = fib2;
		fib2 = next;
	}

	printf("%ld\n", sum);

	return (0);
}
