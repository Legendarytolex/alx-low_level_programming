#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: the character or string
 * Return: void
 */
void rev_string(char *s)
{
	int length = 0;
	char *end = s;
	char *start = s;

	while (*end != '\0')
	{
		length++;
		end++;
	}
	end--;

	while (start < end)
	{
		char temp = *start;

		*start = *end;
		*end = temp;

		start++;
		end++;
	}
}
