#include <stdio.h>

/**
 * main - Print the Fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	int cont;
	unsigned long fibo1 = 0, fibo2 = 1, result;

	for (cont = 0; cont < 50; cont++)
	{
		result = fibo1 + fibo2;
		printf("%lu", result);

		fibo1 = fibo2;
		fibo2 = result;

		if (cont == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
