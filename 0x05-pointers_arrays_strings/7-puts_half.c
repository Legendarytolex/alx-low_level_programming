#include "main.h"

/**
 * puts_half -  a function that prints half of a string, followed by a new line
 * @str: the string to be printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
