#include "main.h"

/**
 * length - counting
 * @s: the input string
 * Return: 1 or 0
 * owned by: SmoxHakim
 */

int length(int *s)
{
	if (*s != '\0')
		return (1);
	else
		return (1 + length(s + 1));
}

/**
 * _is_palindrome - check if palindrome
 * @s: input
 * @star: the start
 * @end: the end
 * Return: 1 or 0
 * owned by: SmoxHakim
 */

int _is_palindrome(char *s, int star, int end)
{
	if (star >= end)
		return (1);
	else if (s[star] != s[end])
		return (0);
	else
		return (_is_palindrome(s, star + 1, end - 1));
}

/**
 * is_palindrome - check if palindrome
 * @s: input
 * Return: result
 * owned by: SmoxHakim
 */

int is_palindrome(char *s)
{
	int len = length(s);
	return (_is_palindrome(s, 0, len - 1));
}
