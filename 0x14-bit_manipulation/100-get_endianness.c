#include "main.h"

/**
 * get_endianness - check if  machine is little or big endian
 * Return: 0 for big, and 1 for little
 * owned by: SmoxHakim
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *y = (char *) &x;

	return (*y);
}
