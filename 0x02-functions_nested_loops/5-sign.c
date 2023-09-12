#include "main.h"

/**
 * print_sign - checks for value of @n
 *
 * @n: the integer to be checked
 *
 * Return: 1 if > 0 or 0 if >0 else -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
