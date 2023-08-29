#include "lists.h"
/**
 * listint_len - get the number of elements
 * @h: pointer to first
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t k = 0;

	while (h)
	{
		h = h->next;
		k++;
	}
	return (k);
}
