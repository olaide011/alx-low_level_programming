#include "main.h"

/**
 * _print_rev_recursion - function name
 * @s: char
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);

		print_rev_recursion(s + 1);
	}
	_putchar('\n');
}
