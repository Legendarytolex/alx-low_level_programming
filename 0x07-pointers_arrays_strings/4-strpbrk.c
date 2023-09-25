#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: a pointer
 * @accept: another ponter variable
 * Return: a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char not_found = 1;
	char *a = accept;

	while (*s != '\0')
	{
		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}

	return (&not_found);
}
