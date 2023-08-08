#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr- fuction concatenates
 * @ac: integer
 * @av: char
 * Return: NULL or pointer
 */
char *argstostr(int ac, char **av)
{
	int total_length;
	int i;
	char *result;
	int position;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	total_length = 0;
	for (i = 0; i < ac; ++i)
	{
		total_length += strlen(av[i]) + 1;
	}
	result = (char *)malloc(total_length * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	position = 0;
	for (i = 0; i < ac; ++i)
	{
		strcpy(result + position, av[i]);
		position += strlen(av[i]);
		result[position++] = '\n';
	}
	result[total_length - 1] = '\0';
	return (result);
}

