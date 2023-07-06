#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x;
	char *co;

	x = 1;
	co = (char *) &x;

	return ((int)*co);
}
