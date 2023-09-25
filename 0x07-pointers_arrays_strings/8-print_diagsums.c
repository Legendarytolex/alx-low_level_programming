#include "main.h"

/**
 * print_diagsums - a function that prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: a pointer
 * @size: an integer
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int sum_diag1 = 0;
	int sum_diag2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum_diag1 += a[i * size + i];

		sum_diag2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", sum_diag1, sum_diag2);
}
