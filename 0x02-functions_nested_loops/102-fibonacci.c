#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int n = 50;
	long int fib1 = 1;
	long int fib2 = 2;
	long int next;
	int count = 0;

	printf("ld, %ld", fib1, fib2);
	count = 2;

	while (count < n)
	{
		next = fib1 + fib2;
		printf(", %ld", next);

		fib1 = fib2;
		fib2 = next;
		count++;
	}

	printf("\n");

	return (0);
}
