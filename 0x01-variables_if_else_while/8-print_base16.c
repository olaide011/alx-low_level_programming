#include <stdio.h>

/**
 * main - print hexedecimal
 *
 * Return: 0
 */
int main(void)
{
	char n = '0';
	char l = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (l <= 'f')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
