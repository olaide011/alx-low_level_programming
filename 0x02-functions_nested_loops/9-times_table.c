#include "main.h"
/**
 * times_table - prints out 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int j, k;

	for (k = 0 ; k < 10 ; k++)
	{
		_putchar('0');
		for (j = 1 ; j < 10 ; j++)
		{
			int mult = j * k;

			_putchar(',');
			if (mult / 100 == 0)
			{
				_putchar(32);
			}
			if (mult / 10 == 0)
			{
				_putchar(32);

			}
			else
			{
				_putchar('0' + (mult / 10));
			}
			if (mult % 10 == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar('0' + (mult % 10));
			}
		}
	}
	_putchar('\n');
}


