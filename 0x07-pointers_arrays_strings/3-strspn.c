#include "main.h"

/**
 * _strspn -  function that gets the length of a prefix substring.
 * @s: a pointer
 * @accept: another pointer variable
 * Return: Returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int is_accept;
	char *a = accept;

	while (*s)
	{
		is_accept = 0;
		while (*a)
		{
			if (*s == *a)
			{
				is_accept = 1;
				break;
			}
			a++;
		}
		if (!is_accept)
		{
			break;
		}
		count++;
		s++;
	}
	return (count);
}
