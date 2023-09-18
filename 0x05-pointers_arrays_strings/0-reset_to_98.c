#include "main.h"

/**
 * reset_to_98 - ubdates the value of n
 *@n: is a value it point to a variable
 *
 */

void reset_to_98(int *n)
{
	int *pN = &n;
	*pN = 98;
}
