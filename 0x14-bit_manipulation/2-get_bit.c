#include "main.h"

/**
 * get_bit - A function that returns the value of a bit at a given index.
 * index.
 * @n: unsigned long int input.
 * @index: index of the bit.
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int inter;

	if (n == 0 && index < 64)
		return (0);

	for (inter = 0; inter <= 63; n >>= 1, inter++)
	{
		if (index == inter)
		{
			return (n & 1);
		}
	}

	return (-1);
}
