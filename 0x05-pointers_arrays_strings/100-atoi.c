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
	int digit;
	int isDigitFound = 0;

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
		if (result > (2147483647 - digit) / 10)
		{
			return ((sign == 1) ? 2147483647 : -2147483648);
		}
		result = result * 10 + digit;
		s++;
	}
	if (!isDigitFound)
	{
		return (0);
	}
	return (result * sign);
}
