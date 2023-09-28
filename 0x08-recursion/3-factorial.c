#include "main.h"

/**
 * factorial - count the factorial of a number
 * @n: the input
 * Return: n or -1
 * owned by: SmoxHakim
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
