#include <stdio.h>
/**
 * main - entry point of program
 * a program that prints the alphabets in lwercase,
 * and then in upppercase follwed by a new line.
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	letter = 'A';

	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');
	return (0);
}
