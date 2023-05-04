#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: The binary string to converts
 *
 * Return: The positive number converted from a binary
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int length = 0, val = 0, summation = 0;

	if (b == NULL)
		return (0);

	length = length_of_string(b);
	while (length--)
	{
		if (b[length] != 48 && b[length] != 49)
			return (0);

		if (b[length] == 49)
			summation += 1 << val;

		val++;
	}

	return (summation);
}

/**
  * length_of_string - Returns the length of a string
  * @k: String to count
  *
  * Return: String length
  */
int length_of_string(char *k)
{
	int l = 0;

	while (k[l])
		l++;

	return (l);
}
