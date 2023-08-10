#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - reallocates
 * @ptr: pointer
 * @old_size: unsigned int
 * @new_size: unsigned int
 * Return: NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *nptr;
	size_t c_size;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	nptr = malloc(new_size);
	if (nptr)
	{
		c_size = (old_size < new_size) ? old_size : new_size;
		memcpy(nptr, ptr, c_size);
		free(ptr);
	}
	return (nptr);
}
