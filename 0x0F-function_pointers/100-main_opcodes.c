#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


void print_opcodes(int bytes);

/**
 * main - start of the program
 * @argc: argument count
 * @argv: argument value
 * Return: 0 or 1 or 2
 * owned by: SmoxHakim
 */

int main(int argc, char *argv[])
{
	int bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes(bytes);

	return (0);
}

/**
 * print_opcodes - print the opcodes of the main function
 * @bytes: number of bytes to print
 * owned by: SmoxHakim
 */

void print_opcodes(int bytes)
{
	unsigned char *main_ptr = (unsigned char *)print_opcodes;
	int x;

	for (x = 0; x < bytes; x++)
	{
		printf("%02x", main_ptr[x]);
		if (x < bytes - 1)
		{
			putchar(' ');
		}
	}
	putchar('\n');
}
