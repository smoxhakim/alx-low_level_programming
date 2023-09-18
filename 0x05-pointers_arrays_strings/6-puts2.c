#include "main.h"

/**
 * puts2 - print other character
 * @str: the input
 */

void puts2(char *str)
{
	int cont = 0;

	while (str[cont] != '\0')
	{
		_putchar(str[cont]);
		cont += 2;
	}
	_putchar('\n');
}
