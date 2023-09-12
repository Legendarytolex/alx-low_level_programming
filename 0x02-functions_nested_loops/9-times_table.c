#include "main.h"

/**
 * times_table - checks the times table
 *
 * Return: Always 0
 */
void times_table(void)
{
	int i;
	int result;

	for (i = 0; i <= 9; i++)
	{
		result = 9 * i;
		if (i > 0)
		{
			_putchar(',');
			_putchar(' ');
		}
		if (result < 10)
		{
			_putchar(' ');
		}
		_putchar(result + '0');
	}
	_putchar('\n');
}
