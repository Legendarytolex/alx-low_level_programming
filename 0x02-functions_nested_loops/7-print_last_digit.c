#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 *
 *@n: the integer to be checked
 *
 * Return: the value of the last digit
 */
int print_last_digit(int)
{
	int last_digit;

	if (n < 0)
	{
		last_digit = -n % 10;
	}
	else
	{
		last_digit = n % 10;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
