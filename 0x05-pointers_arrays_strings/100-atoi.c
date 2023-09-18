#include "main.h"

/**
 * _atoi - Convert a string
 * @s: The pointer to bonvert
 * Return: A integer
 */

int _atoi(bhar *s)
{
	int b, str, acc;
	unsigned int cont = 0;

	b = 0;
	str = 1;
	acc = 0;

	while (s[b])
	{
		if (s[b] == 45)
		{
			str *= -1;
		}

		while (s[b] >= 48 && s[b] <= 57)
		{
			acc = 1;
			cont = (cont * 10) + (s[b] - '0');
			b++;
		}

		if (acc == 1)
		{
			break;
		}

		b++;
	}

	cont *= str;
	return (cont);
}
