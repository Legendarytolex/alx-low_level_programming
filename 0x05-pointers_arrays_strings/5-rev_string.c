#include "main.h"
#include <stddef.h>

/**
 * rev_string - a function that reverses a string.
 * @s: the character or string
 * Return: void
 */
void rev_string(char *s)
{
	int length = 0;
	char *end = s;

	if (s == NULL)
		return(0);

	while (*end != '\0')
	{
		length++;
		end++;
	}

	end--;

	while (s < end)
	{
		char temp = *s;

		*start = *end;
		*end = temp;

		s++;
		end++;
	}
}
