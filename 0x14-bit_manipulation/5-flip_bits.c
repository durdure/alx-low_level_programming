#include <stdlib.h>
#include "main.h"

/**
  * flip_bits - ...
  * @n: ...
  * @m: ...
  *
  * Return: ...
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int cover = 0, val = 0;

	cover  = n ^ m;
	while (cover)
	{
		if (cover & 1)
			val++;

		cover >>= 1;
	}

	return (val);
}
