#include "main.h"

/**
 * _strspn - gets the langh
 * @s: the string
 * @accept: the count
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0' && accept != NULL)
	{
		count++;
		s++;
	}

	return (count);
}
