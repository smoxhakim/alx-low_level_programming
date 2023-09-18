#include "main.h"
#include <stdio.h>

/**
 * _putchar - function that print one charachter
 *
 * @ch: the input charachter
 *
 * Return: 1 if success and -1 if wrong
 */

int _putchar(int ch)
{
	return (write(1, &ch, 1));

}
