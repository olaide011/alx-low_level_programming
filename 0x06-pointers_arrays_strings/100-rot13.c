#include "main.h"

/**
 * rot13 - encodes a string into rot13
 * @s: string to encode
 *
 * Return: address of s
 */
char *rot13(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		while (((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M')))
		{
			s[i] += 13;
			i++;
		}
		if ((s[i] >=  'n' && s[i] <= 'z') || (s[i] >=  'N' && s[i] <= 'Z'))
		{
			s[i] -= 13;
		}
		i++;
	}
	return (s);
}

