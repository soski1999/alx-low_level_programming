#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: first node
 *
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp1;
	listint_t *temp2;

	if (*head == NULL)
	{
		return (0);
	}
	temp1 = *head;
	n = temp1->n;
	temp2 = temp1->next;
	free(temp1);
	*head = temp2;
	return (n);
}
