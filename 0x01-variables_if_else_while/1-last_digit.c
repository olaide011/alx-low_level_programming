#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Getting the last digit
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int l_d = n % 10;

	if (l_d > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l_d);
	} else if (l_d == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l_d);
	} else if (l_d < 6 && l_d != 0)
	{
		printf"(Last digit of %d is %d and is less than 6 and not 0\n", n, l_d);
	}
	return (0);
}
