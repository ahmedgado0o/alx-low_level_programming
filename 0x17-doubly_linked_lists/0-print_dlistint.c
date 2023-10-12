#include "lists.h"
/**
 * print_dlistint - prints
 * @h: addres
 * Return: size of list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->nest;
		i++;
	}
	return (i);
}
