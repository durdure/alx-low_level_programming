#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: input string to search for substring
 * @accept: characters that prefix substring must include
 * Return: length of prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, length = 0, length = 0;

	while (accept[lenght] != '\0')
		length++;
	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; j < length; j++)
			if (s[i] == accept[j])
				length++, j = a_len;
			else
				if (j == length - 1)
					goto exit;
exit: return (lenght);
}

