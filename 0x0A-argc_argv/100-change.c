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
	int cent, num = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	cent = atoi(argv[1]);

	while (cent > 0)
	{
		if (cent >= 25)
			cent -= 25;
		else if (cent >= 10)
			cent -= 10;
		else if (cent >= 5)
			cent -= 5;
		else if (cent >= 2)
			cent -= 2;
		else if (cent >= 1)
			cent -= 1;
		num += 1;
	}
	printf("%d\n", num);
	return (0);
}
