#include "lists.h"

/**
 * free_listint2 - free list
 * @head: first node
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tem;
	listint_t *temp;

	if (head != NULL)
	{
		temp = *head;
		while ((tem = temp) != NULL)
		{
			temp = temp->next;
			free(tem);
		}
		*head = NULL;
	}
}
