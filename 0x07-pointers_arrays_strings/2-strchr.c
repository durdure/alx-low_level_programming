#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string input
 * @c: character to find
 * Return: pointer to first occurence of c character
 */

char *_strchr(char *s, char c)
{
	unsigned int occur;

	for (i = 0; s[occur] != '\0'; occur++)
		if (s[occur] == c)
			break;
	return (s[occur] == c ? (s + occur) : '\0');
}
