#include <stdio.h>
/**
 * main - entry point
 *  a program that prints all possible different combinations of two digits.
 *  Return: always 0 (success)
 */

int main(void)
{
	int firstDigit = 0;

	while (firstDigit < 9)
	{
		int secondDigit = firstDigit + 1;

		while (secondDigit <= 9)
		{
			putchar('0' + firstDigit);
			putchar('0' + secondDigit);

			if (firstDigit < 8 || secondDigit < 9)
			{
				putchar(',');
				putchar(' ');
			}

			secondDigit++;
		}
		firstDigit++;
	}
	putchar('\n');
	return (0);
}
