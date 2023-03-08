#include "main.h"

/**
 * _strlen_recursion - function name
 * @s: char
 *
 * Return:length of the string.
 */
int _strlen_recursion(char *s)
{
	int lnt = 0;

	if (*s)
	{
		lnt++;
		lnt = lnt + _strlen_recursion(s + 1);
	}

	return (lnt);
}
