#include "main.h"

/**
 * reverse_array - a function that reverses an array
 * @a: a pointer variable of type int
 * @n: an int tpye variable
 *
 * Return: 0 always
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int temp;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}
}
