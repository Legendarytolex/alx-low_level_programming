#include "main.h"

/**
 * print_times_table - checks times table
 *
 * @n: the integer to be checked
 *
 * Return: 0
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i;
		int j;
		int result;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				result = i * j;

				if (j > 0)
				{
					_putchar(',');
					_putchar(' ');

				if (result < 10)
				{
					_putchar(' ');
				}
				}

				if (result < 10)
				{
					_putchar((result / 10) + '0');
				}
				_putchar((result % 10) + '0');
			}
			_putchar('n');
		}
	}
}
