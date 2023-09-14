#include "main.h"

/**
 * _isdigit - checkes for uppercase
 * @c: for the input
 * Return: 1 if its a digit,  0 if its otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
