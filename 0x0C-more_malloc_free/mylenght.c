#include <stdio.h>
#include "main.h"

/** mylenght - this is how i can count i srtings lenght
 * @s: the str input
 * Return: lenght
 * owned by: SmoxHakim
 */

char *mylenght(char *s)
{
	unsigned int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
