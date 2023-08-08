#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - fuction return a pointer
 * @str: char in
 * Return: NULL or array
 */
char *_strdup(char *str)
{
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}
	duplicate = (char *)malloc((strlen(str) + 1) * sizeof(char));
	if (duplicate == NULL)
	{
		return (NULL);
	}
	strcpy(duplicate, str);
	return (duplicate);
}
