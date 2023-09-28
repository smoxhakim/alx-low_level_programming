#include "main.h"

/**
 * _pow_recursion - print the power of
 * @x: the base number
 * @y: the power number
 * Return: the result
 * owned by: SmoxHakim
 */

int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x,  (y - 1)));
	}
	else
	{
		return (-1);
	}
}
