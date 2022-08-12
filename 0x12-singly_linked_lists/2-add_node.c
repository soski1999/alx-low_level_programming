#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: first node
 * @str: string
 * Return: address of new element or null if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;

	if (head != NULL && str != NULL)
	{
		n = malloc(sizeof(list_t));
		if (n == NULL)
			return (NULL);
		n->str = strdup(str);
		n->len = _strlen(str);
		n->next = *head;
		*head = n;
		return (n);
	}
	return (0);
}
