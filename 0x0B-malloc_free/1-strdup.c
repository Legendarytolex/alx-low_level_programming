#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup -  a function that returns a pointer
 * to a newly allocated space in memory
 *
 * @str: a string
 *
 * Return: a pointer pointing to the allocated space in
 * memory or return NULL on failure
 */
char *_strdup(char *str)
{
	char *aaa;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	aaa = malloc(sizeof(char) * (i + 1));

	if (aaa == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		aaa[r] = str[r];

	return (aaa);
}
