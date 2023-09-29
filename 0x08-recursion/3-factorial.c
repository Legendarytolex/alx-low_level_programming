#include "main.h"

/**
 * factorial - a function to print the factorial of an integer
 * @n: an integer
 * Return: an integer
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
