#include "main.h"

/**
 * _isalpha - checks for lowercase character
 * @c: charachter to be checked
 * Return: 1 if lowercase or  if 0 is not lower
 *
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
