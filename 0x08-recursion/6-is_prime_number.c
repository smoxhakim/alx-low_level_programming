#include "main.h"

/**
 * _is_prime_number - a checker
 * @n: the input
 * @ges: the gueess number
 * Return: the square number of n or -1
 * owned by: SmoxHakim
 */

int _is_prime_number(int n, int ges)
{
	if (n < 0)
	{
		return (0);
	}
	if (ges * 1 == n)
	{
		return (1);
	}
	else if (ges * 1 > n)
	{
		return (0);
	}
	else
	{
		return (_is_prime_number(n, ges + 1));
	}
}

/**
 * is_prime_number - print the square
 * @n: the number
 * Return: n
 */

int is_prime_number(int n)
{
	return (_is_prime_number(n, 0));
}
