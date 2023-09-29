#include "main.h"

/**
 * wildcmp -to  compares 2 strings
 * @s1: the first input
 * @s2: the seconf input
 * Return: 1 or 0
 * owned by: SmoxHakim
 */

int wildcmp(char *s1, char *s2)
{

	if (*s1 == '\0' && *s2 == '*' && *(s2 + 1) != '\0')
	{
		return (0);
	}
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}

	return (0);
}
