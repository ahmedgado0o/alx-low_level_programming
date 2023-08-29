#include "lists.h"
/**
 * print_listint - prints all elements
 * @h: pointer to first
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t k = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		k++;
	}
	return (k);
}

