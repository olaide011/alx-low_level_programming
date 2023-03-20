#include "main.h"

/**
 * _strspn - function that  calculates the length (in bytes)
 *
 * @s: string to search in.
 * @accept: bytes  to search for.
 *
 * Return: the number of bytes.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j, k;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] != 32)
		{
			for (k = 0; accept[k] != '\0'; k++)
			{
				if (s[j] == accept[k])
					i++;
			}
		}
		else
			return (i);
	}
	return (i);
}
