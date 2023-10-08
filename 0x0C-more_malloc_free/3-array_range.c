#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range -  a function that creates an array of integers
 * @min: the minimum value
 * @max:the maximum value
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i;
	int *arr;
	int num_elements;

	if (min > max)
		return (NULL);

	arr = (int *)malloc(num_elements * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < num_elements; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
