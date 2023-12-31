#include "main.h"

/**
 * _strspn -  function that gets the length of a prefix substring.
 * @s: a pointer
 * @accept: another pointer variable
 * Return: Returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int i, j;
	char *str1, *str2;

	str1 = s;
	str2 = accept;
	i = 0;

	while (str1[i] != '\0') /*Declaring WHILE *s */
	{
		j = 0;
		while (str2[j] != '\0') /*Declaring WHILE *accept*/
		{
			if (str2[j] == str1[i]) /*Evaluate condition*/
			{
				count++; /*count number*/
				break;
			}

			j++;    /*add j+1*/
		}
		if (s[i] != accept[j]) /*If aren't equals*/
		{
			break;
		}
		i++; /*add x+1*/
	}
	return (count);
}
