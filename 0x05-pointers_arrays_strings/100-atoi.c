#include "main.h"

/**
 * _atoi - a function that convert a string to an integer.
 *
 * @s: the character
 *
 * Return: 0 Always
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s == ' ' || *s == '\t')
		s++;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}

	else if (*s == '+')
		s++;

	while (*s >= '0' && *s <= '9')
	{
		if (result > (INT_MAX - (*s - '0')) / 10)
		{
			return ((sign == 1) ? INT_MAX : INT_MIN);
		}
		result = result * 10 + (*s - '0');
		s++;
	}
	return (result * sign);
}
