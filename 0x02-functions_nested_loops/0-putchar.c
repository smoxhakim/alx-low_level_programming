#include "main.h"

/*
 *main - start
 *return - 0
*/

int main(void)
{
	char name[] = "_putchar";
	int x;

	for (x = 0; x < 8; x++)
	{
		_putchar(name[x]);
	}
	_putchar('\n');
	return (0);
}
