#include "main.h"

/**
 * times_table - checks the times table
 *
 * Return: Always 0
 */
void times_table(void)
{
	int i;
	int j;
	int result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			if (j > 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (result < 10)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar(' ');
			}

			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
