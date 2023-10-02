#include "main.h"

/**
 *
 * _islower - check if the charachter is lower
 * @c: the input from the user
 * Return: 1 if c is lower case and 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
