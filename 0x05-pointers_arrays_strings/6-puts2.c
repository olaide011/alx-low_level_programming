#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string to work with
 *
 * Return: void
 */
void puts2(char *str)
{
	int charr;

	for (charr = 0; str[charr] != '\0'; charr++)
	{
		if (charr % 2 == 0)
		{
			_putchar(str[charr]);
		}
	}
	_putchar('\n');
}
