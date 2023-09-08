#include <stdio.h>
/**
* main - entry point
*Write a program that prints all single digit numbers
*of base 10 starting from 0, followed by a new line
*Return: 0 (success)
*/
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		printf("%d\n", number);
	}
	return (0);
}
