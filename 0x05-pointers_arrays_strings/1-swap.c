#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a:An integer to swap
 * @b:another interger parameter to swipe
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;

	*a = *b;

	*b = c;
}
