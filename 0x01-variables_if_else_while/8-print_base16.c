#include <stdio.h>
/**
*main - entry point
*a program that prints all the numbers of base 16 in lowercase,
*followed by a new line.
*Return: always 0
*/
int main(void)
{
	char hexDigit;

	for (hexDigit = '0'; hexDigit <= '9'; hexDigit++)
	{
		putchar(hexDigit);
	}

	for (hexDigit = 'a'; hexDigit <= 'f'; hexDigit++)
	{
		putchar(hexDigit);
	}

	putchar('\n');
	return (0);
}
