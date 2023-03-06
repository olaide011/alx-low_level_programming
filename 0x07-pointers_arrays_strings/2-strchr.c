#include "main.h"

/**
 * _strchr - returns a point to the first occurrence of a character in a string
 * @s: string to search for the char in
 * @c: char to be search for
 *
 * Return: pointer to char or else NULL.
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}

	if (c == '\0')
		return (s);
	return (NULL);
}
