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
		int j;

	while (*s != '\0') /*Declaring WHILE*/
	{
		j = 0;
		while (accept[j] != '\0')  /*Evaluating *accept*/
		{
			if (*s == accept[j])
			{
				return (s);
			}

			j++; /*add j+1*/
		}

		s++; /*add s+1*/
	}
	return (0);

}
