#include "main.h"

/**
 * rev_string - reverse a string
 * @s: the input
 */

void rev_string(char *s)
{
	int cont = 0;

	while (s[cont] != '\0')
	{
		cont++;
	}
	int z = cont - 1;
	int a = 0;

	while (a < z)
	{
		char tem = s[a];

		s[a] = s[z];
		s[z] = tem;

		a++;
		z--;
	}

}
