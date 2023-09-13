#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int limit = 1024;
	int sum = 0;
	int i;

	for (i = 1; i < limit; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}

	printf("%d\n", sum);
	return (0);
}
