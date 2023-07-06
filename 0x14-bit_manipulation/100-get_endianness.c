#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
 int get_endianness(void)
 {
    unsigned int snt;
	  char *com;

	  snt = 1;
	  com = (char *) &snt;

	  return ((int)*com);
 }
