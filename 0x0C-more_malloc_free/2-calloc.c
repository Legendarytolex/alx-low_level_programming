#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: an array
 * @size: size of the elements in the array
 *
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t total_size = nmemb * size;
	void *ptr = malloc(total_size);

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, total_size);

	return (ptr);
}
