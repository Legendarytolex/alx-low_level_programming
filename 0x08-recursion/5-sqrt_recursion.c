#include "main.h"

/**
 * _sqrt_helper - a helper function
 * @n: an integer
 * @i: another integer
 * return: the natural suare root
 */
int _sqrt_helper(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: an integer
 * Return: the value of the sqauare root of the integer
 */
int _sqrt_recursion(int n)
{
	 return (_sqrt_helper(n, 1));
}
