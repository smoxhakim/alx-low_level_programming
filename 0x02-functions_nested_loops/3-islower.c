#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: charachter to be checked
 * return 1 if lowercase or  if 0 is not lower
 *
 */

int _islower(int c)
{
	for (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

