#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

#define ARGV(X, S) (argv[X][0] == S)
/**
 * main - entry point, This fuction perform a calulaction base on 2 numbers and
 * the given operator.
 * @argc: number of agruments
 * @argv: the string value of the arguments.
 *
 * Return: 0 (on Sucess)
 */
nt main(int argc, char *argv[])
{
	int (*oprt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	oprt = get_op_func(argv[2]);

	if (!oprt)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
