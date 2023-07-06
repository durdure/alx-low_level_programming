#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b:  is pointing to a string of 0 and 1 chars.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int length, base2;

	if (!b)
		return (0);

	i = 0;

	for (length = 0; b[length] != '\0'; length++)
		;

	for (length--, base2 = 1; length >= 0; length--, base2 *= 2)
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}

		if (b[length] & 1)
		{
			i += base2;
		}
	}

	return (i);
}

