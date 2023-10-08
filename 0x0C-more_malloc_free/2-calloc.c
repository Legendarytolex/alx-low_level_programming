#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: an array
 * @size: size of the elements in the array
 *
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = malloc(nmemb * size);
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		((char *)ptr)[i] = 0;
	}
	return (ptr);
}
