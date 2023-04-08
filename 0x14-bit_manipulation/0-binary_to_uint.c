#include "main.h"

/**
 * binary_to_uint - ..........
 * @b: .........
 *
 * Return: .........
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int us, i = 0;

	if (!b || !*b)
	{
		return (0);
	}

	us = i;

	while (b[i])
	{
		if (b[i] > 49)
		{
			return (0);
		}
		else if (b[i] == 49)
		{
			us <<= 1;
			us = us + 1;
		}
		else
		{
			us <<= 1;
		}
		i++;
	}
	return (us);
}
