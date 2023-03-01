#include "main.h"

/**
 * _strcat - concatenate's strings
 * @dest: destination
 * @src: source
 *
 * Return:a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int lent = 0, i;

	while (dest[lent])
	{
		lent++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[lent] = src[i];
		lent++;
	}

	dest[lent] = '\0';
	return (dest);
}
