#include <stdio.h>

/**
 * main - start of the progrm
 * @argc: argument counter
 * @argv: argument value
 * Return: 0
 * owned by: SmoxHakim
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}

	return (0);
}
