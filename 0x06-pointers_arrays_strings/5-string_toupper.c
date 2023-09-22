#include "main.h"

/**
 * string_toupper - a function that changes
 * all lowercase letters of a string to uppercase
 *@str: the variable to be converted to uppercase
 * Return: A pointer to the value of str
 */
char *string_toupper(char *str)
{
	char *result = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 'a' + 'A';
		}
		str++;
	}

	return (result);
}
