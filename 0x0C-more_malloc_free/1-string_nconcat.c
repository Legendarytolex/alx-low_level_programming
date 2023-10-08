#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - a function that concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: an integer
 * Return: a pointer to the newly allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = strlen(s1);
	unsigned int s2_len = strlen(s2);
	unsigned int total_len = s1_len + s2_len + 1;
	char *result = (char *)malloc(total_len);

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n < s2_len)
	{
		n = s2_len;
	}

	if (result == NULL)
		return (NULL);

	strcpy(result, s1);
	strcat(s2, n);

	return (result);
}
