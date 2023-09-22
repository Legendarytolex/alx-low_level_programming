#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: first variable of type char
 * @s2: second variable of type char
 *
 * Return: return (*s1 - *s2);
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
	}

	return (*s1 - *s2);
}
