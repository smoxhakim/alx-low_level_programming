#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char star = 'z';
	char end = 'a';
	char cont;

	for (cont = star; cont <= end; cont++)
	{
		putchar(cont);
	}

	putchar('\n');

	return (0);

}
