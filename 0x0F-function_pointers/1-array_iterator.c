#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - prints
 * @array: array
 * @size: element no
 * @action: pointer
 * Return:
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

