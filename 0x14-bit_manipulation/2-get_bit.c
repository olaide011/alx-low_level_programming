#include "main.h"

/**
 * get_bit - .......
 * @n: ........
 * @index: .....
 * Return: ........
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int b;

	b = ((n >> index) & 1);

	if (index > 64)
	{
		return (-1);
	}
	return (b);
}
