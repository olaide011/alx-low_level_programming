#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to work on
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;
	int j, k;

	char b;


	while (s[i] != '\0')
	{
		i++;
	}
	k = i - 1;


	for (j = 0; k >= 0 && j < k; k--, j++)
	{
		b = s[j];
		s[j] = s[k];
		s[k] = b;
	}
}
