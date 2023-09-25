#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @dest: a pointer
 * @src: another pointer
 * @n: a variable of unsigned integer
 * Return: Returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_ptr = dest;
	char *src_ptr = src;

	while (n > 0)
	{
		*dest_ptr = *src_ptr;
		dest_ptr++;
		src_ptr++;
		n--;
	}
	return (dest);
}
