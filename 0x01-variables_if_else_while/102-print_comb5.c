#include <stdio.h>
/**
 * main - entry point
 * a program that prints all possible combinations of two two-digit numbers.
 * Return: always 0 (success)
 */

int main(void)
{
	int tens1 = 0;
	int ones1 = 0;

	while (tens1 < 10)
	{
		int tens2 = tens1;
		int ones2 = ones1 + 1;

		while (tens2 < 10)
		{
			while (ones2 < 10)
			{
				putchar('0' + tens1);
				putchar('0' + ones1);
				putchar(' ');
				putchar('0' + tens2);
				putchar('0' + ones2);

				if (tens1 < 9 || ones1 < 9 || tens2 < 9 || ones2 < 9)
				{
					putchar(',');
					putchar(' ');
				}

				ones2++;
			}
				ones2 = 0;
				tens2++;
		}
		ones1++;

		if (ones1 > 9)
		{
			ones1 = 0;
			tens1++;
		}
	}

	putchar('\n');
	return (0);
}
