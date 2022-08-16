#include "lists.h"

/**
 * add_node_end - add a ndoe at end of list
 * @head: head of the link list
 * @str: string
 *
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	size_t n;
	list_t *new, *temp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (n = 0; str[n]; n++)
		;
	new->len = n;
	new->next = NULL;
	temp = *head;
	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
		temp = temp->next;
		temp->next = new;
	}
	return (*head);
}
