#include "lists.h"
/**
 * dlistint_len - returns number of element
 * @h: address
 * Return: numbers of element
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
