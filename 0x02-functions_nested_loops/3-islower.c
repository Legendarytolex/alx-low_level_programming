#include "main.h"

/**
 * _islower - Check if a character is lowercase
 * This function checks whether the given character is a lowercase letter.
 *
 * @c: The character to be checked
 *
 * Return: 1 if c is lower case else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
