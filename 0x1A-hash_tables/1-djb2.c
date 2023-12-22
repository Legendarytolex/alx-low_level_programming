#include "hash_tables.h"

/**
 * hash_djb2 - A function to compute hash of 'str' using djb2
 * @str: The string to hash
 *
 * Return: The value of 64 bits hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int s;

	hash = 5381;
	while ((s = *str++))
	{
		hash = ((hash << 5) + hash) + s; /* hash * 33 + s */
	}
	return (hash);
}
