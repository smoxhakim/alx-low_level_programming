#include "main.h"

/**
 * get_bit - return value of a bit
 * @n: number to be searched
 * @index: index of the bit
 * Return: value of the bit
 * owned by: SmoxHakim
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bitv;

	if (index > 63)
	return (-1);

	bitv = (n >> index) & 1;

	return (bitv);
}
