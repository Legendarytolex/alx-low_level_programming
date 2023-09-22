#include "main.h"

/**
 * print_number - a function that prints an integer.
 * @n: the integer
 * Return: void
 */
void print_number(int n)
{
	int num_digits = 0;
	int temp;
	int digit;
	int i;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (temp > 0)
	{
		num_digits++;
		temp /= 10;
	}
	while (num_digits > 0)
	{
		digit = n;
		for (i = 1; i < num_digits; i++)
		{
			digit /= 10;
		}
		digit %= 10;
		_putchar(digit + '0');
		num_digits--;
	}
}
