#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char star = 'a';
	char end = 'z';
	char cont;

	for (cont = star; cont <= end; cont++)
	{
		if(cont == 'e')
		{
			cont++;
		}
		else if(cont == 'q')
		{
			cont++;
		}

		putchar(cont);
	}
	for (cont1 = starA; cont1 <= endZ; cont1++)
	{
		putchar(cont1);
	}

	putchar('\n');

	return (0);

}

