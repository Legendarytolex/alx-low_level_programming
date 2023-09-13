#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int n = 50;
	long long int fib1 = 1;
	long long int fib2 = 2;
	long long int next;
	int count = 0;

	printf("lld, %lld", fib1, fib2);
	count = 2;

	while (count < n)
	{
		next = fib1 + fib2;
		printf(", %lld", next);

		fib1 = fib2;
		fib2 = next;
		count++;
	}

	printf("\n");

	return (0);
}
