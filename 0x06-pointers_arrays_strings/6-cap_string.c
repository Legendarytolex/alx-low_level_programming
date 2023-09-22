#include "main.h"
#include <stdbool.h>
bool is_separator(char c)
{
	int i;
	char separators[] = " \t\n,;.!?\"(){}";

	for (i = 0; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
		{
			return (true);
		}
	}
	return (false);
}

/**
 * cap_string - a funfion that capitalizes all words of a string
 *
 * @str: the variable to be capitalized
 * Return: str
 */
char *cap_string(char *str)
{
	bool capitalize_next = true;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (is_separator(str[i]))
		{
			capitalize_next = true;
		}
		else if (capitalize_next)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 'a' + 'A';
			}
			capitalize_next = false;
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] = str[i] + 'a' - 'A';
			}
		}
	}
	return (str);
}
