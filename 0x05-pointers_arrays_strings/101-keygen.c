#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that generates random valid passwords
 *
 * Return: 0 Always
 */
int main(void)
{
	int r = 0;
	int c = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (c < 2772)
	{
		r = rand() % 128;
		if ((c + r) > 2772)
			break;
		c += r;
		printf("%c", r);
	}
	printf("%c\n", (2772 - c));
	return (0);
}
