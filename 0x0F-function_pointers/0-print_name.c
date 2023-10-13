#include <stdio.h>

/**
 * print_name - a function that prints a name.
 * @name: the name to be printed
 * @f: function pointer
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
