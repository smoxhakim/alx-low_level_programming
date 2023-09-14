#include "main.h"

/**
 *_isupper - checkes for uppercase
 *@c: for the input
 * Return: 0 if its lowercase
 * Return: 1 if its uppercase
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
