#include "main.h"

/**
 * more_numbers - prototype
 *
 * Return: void
 */
void more_numbers(void)
{
	int a, b;

	for (a = 1; a <= 10; a++)
	{
		if (b >= 10)
		_putchar('1');
		_putchar(b % 10 + '0');
	}
	_putchar('\n');
}
