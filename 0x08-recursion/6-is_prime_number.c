#include "main.h"

/**
 * is_prime_helper - a helper function
 * @n: an integer
 * @divisor: an integer
 * Return: the output
 */
int is_prime_helper(int n, int divisor)
{
	if (n <= 1)
		return (0);

	if (divisor == 1)
		return (1);

	if (n % divisor == 0)
		return (0);

	return (is_prime_helper(n, divisor - 1));
}
/**
 * is_prime_number - a function that returns 1
 * if the input integer is a prime number, otherwise return 0
 * @n: the integer to check
 * Return: the output
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, n - 1));
}
