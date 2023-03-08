#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the parameter, an int.
 *
 * Return: when n > 0 - the factorial of n
 *        when n < 0 - 1, indicating an error
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	result *= factorial(n - 1);

	return (result);
}
