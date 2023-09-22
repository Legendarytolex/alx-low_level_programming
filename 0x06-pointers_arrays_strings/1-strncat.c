#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 *
 * @n: am integer
 * @dest: the first char variable
 * @src: the second char variable
 *
 * Return: Return a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *result = *dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (result);
}
