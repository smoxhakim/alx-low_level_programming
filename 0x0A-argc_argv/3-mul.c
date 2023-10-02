#include <stdio.h>
#include <stdlib.h>

/**
 * main - start of the progrm
 * @argc: argument counter
 * @argv: argument value
 * Return: 0 or 1
 * owned by: SmoxHakim
 */

int main(int argc, char *argv[])
{
	int x;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", x);

	return (0);
}

