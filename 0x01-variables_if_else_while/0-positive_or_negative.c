#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - check int output
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("%d is zero\n", n);
	} else if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n < 0)
	{
		printf("%d is negavite\n", n);
	}
	return (0);
}
