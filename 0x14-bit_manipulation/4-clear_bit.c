#include "main.h"

/**
 * clear_bit - set the value of given bit to 0
 * @index: index of the bit to be cleared
 * @n: pointer to the number to be changed
 * Return: 1 if successful, -1 if fails
 * owned by: SmoxHakim
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = (~(1UL << index) & *n);

	return (1);
}
