#include "main.h"

/**
 * _strncpy - a function that copies a string
 *
 * @dest: first variable
 * @src: second variable
 * @n: variable of int type
 * Return: Return a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *result = dest;

	while (src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (result);
}
