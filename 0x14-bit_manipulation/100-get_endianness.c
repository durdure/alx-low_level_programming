#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
 int get_endianness(void)
 {
    unsigned int sent;
	  char *common;

	  sent = 1;
	  common = (char *) &sent;

	  return ((int)*common);
 }
