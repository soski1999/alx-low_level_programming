#include "lists.h"

/**
 * free_listint - free lists
 * @head: first node or a list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *h;

	if (head == NULL)
	{
		free(head);
	}
	while (head != NULL)
	{
		h = head;
		head = head->next;
		free(h);
	}
}
