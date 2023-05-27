#include "main.h"

/**
 * _memcpy - input
 * @dest: input pointer to string destination
 * @src: input pointer to source string
 * @n: number of bytes
 * Return: pointer to destination string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int co = 0;

	while (co < n)
	{
		*(dest + co) = *(src + co);
		co++;
	}
	return (dest);
}

