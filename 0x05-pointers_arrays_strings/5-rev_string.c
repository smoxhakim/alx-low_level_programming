#include "main.h"

/**
 * rev_string - reverse a string
 * @s: the input
 */

void rev_string(char *s)
{
	int cont = 0;
	int a;
	int z;

	while (s[cont] != '\0')
	{
		cont++;
	}

	a = 0;
	z = cont - 1;

	while (a < z)
	{
		char tem = s[a];

		s[a] = s[z];
		s[z] = tem;

		a++;
		z--;
	}

}
