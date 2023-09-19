#include "main.h"

/**
 * puts_half -  a function that prints half of a string, followed by a new line
 * @str: the string to be printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length_of_the_string = 0;
	char *temp = str;
	int n = length_of_the_string / 2;

	while (*temp != '\0')
	{
		length_of_the_string++;
		temp++;
	}
	if (length_of_the_string % 2 == 1)
	{
		n = (length_of_the_string - 1) / 2;
	}

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}

	_putchar('\n');

}

