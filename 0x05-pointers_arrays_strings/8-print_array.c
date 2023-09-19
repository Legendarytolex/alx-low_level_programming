#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array of integers,
 * followed by a new line
 * @a: first integer
 * @n: second integer
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	if (n <= o)
	{
		printf("\n");
		return;
	}

	for (int i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d\n", a[n - 1]);
}
