#include <stdio.h>
/**
 * main - entry point
 *  a program that prints all possible combinations of two two-digit numbers.
 *  Return: always 0 (success)
 */

int main(void)
{
	int i = 0;
	int j = 0;

	while (i <= 98)
	{
		j = 1;

		while (j <= 99)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');

			if (i != 99 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}

	putchar('\n');

	return (0);
}
