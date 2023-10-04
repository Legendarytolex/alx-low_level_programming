#include "main.h"
#include <stdlib.h>

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
	size_t i;
	size_t length = 0;
	char *dup_str = (char *)malloc(length + 1);

	if (str == NULL)
		return (NULL);
	while (str[length] != '\0')
		length++;

	if (dup_str == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
	{
		dup_str[i] = str[i];
	}
	return (dup_str);
}
