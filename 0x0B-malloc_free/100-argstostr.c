#include <stdlib.h>
#include "main.h"

/**
 * *argstostr - concatenates all the arguments of your program
 * @ac: input intg
 * @av: input arg
 * Return: NULL or ptr
 * owned by: SmoxHakim
*/

char *argstostr(int ac, char **av)
{
	int total_length = 0;
	int i, j, pos = 0;
	char *concatenated_str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j] != '\0'; j++)
	{
		total_length++;
	}
	total_length++;
	}
	concatenated_str = (char *)malloc(total_length + 1);
	if (concatenated_str == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j] != '\0'; j++)
	{
		concatenated_str[pos++] = av[i][j];
	}
		concatenated_str[pos++] = '\n';
	}
	concatenated_str[pos] = '\0';
	return (concatenated_str);
}
