#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning
 * @head: first node
 * @n: data in the node
 *
 * Return: address of new element or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head != NULL)
	{
		new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
		new->n = n;
		new->next = *head;
		*head = new;
	}
		return (*head);
}
