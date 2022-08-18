#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end
 * @head: first node
 * @n: data in the node
 *
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end;
	listint_t *tem;

	end = malloc(sizeof(listint_t));
	if (end == NULL)
	{
		return (NULL);
	}
	end->n = n;
	end->next = NULL;
	tem = *head;
	if (*head == NULL)
	{
		*head = end;
	}
	else
	{
		while (tem->next != NULL)
		{
			tem = tem->next;
		}
		tem->next = end;
	}
	return (*head);
}
