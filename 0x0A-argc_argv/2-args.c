#include <stdio.h>
#include "main.h"

/**
 * main - A program that prints all arguments it recieves
 * @argc: The number of arguments
 * @argv: The array of arguments
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
