#include <stdio.h>

/**
 * main - printing z-a
 *
 * Return: 0
 */
int main(void)
{
	char alp = 'z';

	while (alp >= 'a')
	{
		putchar(alp);
		alp--;
	}
	putchar('\n');
	return (0);
}
