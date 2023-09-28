#include "main.h"

/**
 * _sqrt_recursion - print the square
 * @n: the number
 * @ges: the gueess number
 * Return: the square number of n or -1
 * owned by: SmoxHakim
 */

int sqrt_recursion(int n, int ges)
{
	if (n < 0)
	{
		return (-1);
	}
	if (ges * ges == n)
	{
		return (ges);
	}
	else if (ges * ges > n)
	{
		return (-1);
	}
	else
	{
		return (sqrt_recursion(n, ges + 1));
	}
}

int _sqrt_recursion(int n)
{
	return (sqrt_recursion(int n, 0));
}
