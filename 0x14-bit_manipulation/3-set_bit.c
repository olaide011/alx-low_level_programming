#include "main.h"

/**
 * set_bit - function
 * @n: pointer
 * @index: ...
 *
 * Return: ....
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	if (!((*n >> index) & 1))
	{
		*n = (*n + 1) << index;
		return (1);
	}
	return (-1);
}
