#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Main - Entry point of the program
 *
 * this program checks for the last digit of n
 * and check if it is greater than 5, equals 0 or less than 6
 * and prints the corresponding result.
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastDgt = n % 10;

	if (lastDgt > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDgt);
	else if (lastDgt == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastDgt);
	else
		printf("Last digit of %d id %d and is less than 6 and not 0\n", n, lastDgt);
	return (0);
}
