#include <stdio.h>
/**
*main - entry point
*write a program that prints all
*possible combinations of single-digit numbers.
*Return: always 0 (success)
*/
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar('0' + digit);
		if (digit < 9)
		{
		putchar(',');
		putchar(' ');
		}
		digit++;
	}

	putchar('\n');
	return (0);
}
