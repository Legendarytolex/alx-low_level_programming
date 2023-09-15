#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * positive_or_negative - A function that checks if i is positive, zero
 * or negative.
 * @i: integer
 * Return: void
 */
void positive_or_negative(int i)
{
	srand(time(0));
	i = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
