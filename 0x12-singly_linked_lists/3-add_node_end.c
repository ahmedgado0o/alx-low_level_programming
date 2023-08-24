#include "lists.h"
/**
 * add_node_end - This function adds a new node
 * @head: A pointer
 * @str: The string
 * Return: The address of the new node or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *node = *head;

	if (*head == NULL)
	{
		return (add_node_end(head, str)); }


	if (new_node == NULL)
	{
		return (NULL); }

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
	free(new_node);
	return (NULL); }
	new_node->next = NULL;

	while (node->next != NULL)
	{
	node = node->next; }

	node->next = new_node;

	return (new_node);
}

