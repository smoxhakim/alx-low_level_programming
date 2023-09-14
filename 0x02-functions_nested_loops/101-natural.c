#include <stdio.h>

/**
 * main - print the sum of all the multiples
 *
 * Return: 0
 */

int main(void)
{
	int n;
	int result = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
			result += n;
	}

	printf("%d\n", result);

	return (0);
}
