#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: a pointer
 * @b: a variable of type char
 * @n: a variable of tpe unsigned integer
 * Return: Returns a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n > 0)
	{
		*ptr = b;
		ptr++;
		n--;
	}

	return (s);
}
