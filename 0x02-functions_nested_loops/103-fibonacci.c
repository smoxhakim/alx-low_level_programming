#include <stdio.h>

/**
 * main - Prints the sum of  Fibonacci sequence
 *
 * Return: 0
 */

int main(void)
{
	unsigned long fibo1 = 0, fibo2 = 1, fiborest;
	float tot_rest;

	while (1)
	{
		fiborest = fibo1 + fibo2;
		if (fibrest > 4000000)
			break;

		if ((fiborest % 2) == 0)
			tot_rest += fiborest;

		fibo1 = fibo2;
		fibo2 = fiborest;
	}
	printf("%.0f\n", tot_rest);

	return (0);
}
