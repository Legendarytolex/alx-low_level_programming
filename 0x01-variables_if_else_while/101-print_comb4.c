#include <stdio.h>
/**
 * main - entry point
 *  a program that prints all possible different combinations of three digits.
 *  Return: always 0 (success)
 */

int main(void)
{
	int firstDigit = 0;

	while (firstDigit < 8)
	{
		int secondDigit = firstDigit + 1;

		while (secondDigit < 9)
		{
			int thirdDigit = secondDigit + 1;

			while (thirdDigit <= 9)
			{
				putchar('0' + firstDigit);
				putchar('0' + secondDigit);
				putchar('0' + thirdDigit);

				if (firstDigit < 7 || secondDigit < 8 || thirdDigit < 9)
				{
					putchar(',');
					putchar(' ');
				}

				thirdDigit++;
			}

			secondDigit++;
		}

		firstDigit++;
	}

	putchar('\n');
	return (0);
}
