#include "main.h"

/**
 * _memcpy - fuction that copies n bytes from a source to a destination.
 * @dest: destination to copy to.
 * @src: source of the bytes to copy.
 * @n: number of bytes to copy over.
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
