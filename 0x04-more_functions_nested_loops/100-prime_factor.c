#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	unsigned long int a, prime = 612852475143;

	for (a = 3; a < 782849; a = a + 2)
	{
		while ((prime % a == 0) && (prime != i))
		{
			prime = prime / a;
		}
	}

	printf("%lu\n", prime);

	return (0);
}
