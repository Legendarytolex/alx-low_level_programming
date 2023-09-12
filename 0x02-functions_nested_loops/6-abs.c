#include "main.h"

/**
 * _abs - checks the value of @n
 *
 * @n: the integer to be checked
 *
 * Return: -n if positive and n if if negative
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
