#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free list
 * @head: list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *n;

	while (head)
	{
		n = head;
		head = head->next;
		free(n->str);
		free(n);
	}
}
