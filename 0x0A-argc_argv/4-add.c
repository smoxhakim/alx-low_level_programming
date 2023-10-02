#include <stdio.h>
#include <stdlib.h>

/**
 * main - start of the progrm
 * @argc: argument counter
 * @argv: argument value
 * Return: 0
 * owned by: SmoxHakim
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
	puts("0'n");
	return (0);
	}

	int x, y;
	int res = 0;

	for (x = 1; x < argc; x++)
	{

		if (atoi(argv[x]) == 0 && argv[x][0] != '0')
		{
			printf("Error\n");
			return (1);
		}


	res += atoi(argv[x]);

	}
	printf("%d\n", res);
	return (0);
}
