#include "main.h"

/**
 * _memset - fills string with constant char b upto n bytes
 * @s: input pointer to string
 * @b: constant char
 * @n: number of bytes
 * Return: pointer to s string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int co = 0;

	while (co < n)
	{
		s[co] = b;
		co++;
	}
	return (s);
}
