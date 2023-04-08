#include "main.h"
/**
 * flip_bits - ....
 * @n: ...
 * @m: .....
 * Return: ....
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int b = 0;
	unsigned long int nob;

	nob = n ^ m;

	while (nob)
	{
		b += nob & 1;
		nob >>= 1;
	}

	return (b);
}
