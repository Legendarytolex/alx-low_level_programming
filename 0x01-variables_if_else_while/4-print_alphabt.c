#include <stdio.h>
/**
* main - entry point
* Write a program that prints the alphabet in lowercase,
* followed by a new line.
* Return: Always 0 (success)
*/
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
		letter++;
	}

	putchar('\n');
	return (0);
}
