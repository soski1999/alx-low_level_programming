#include "lists.h"

/**
 * listint_len - returns the number of nodes in a linked list
 * @h: the first list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h != NULL)
	{
		while (h)
		{
			h = h->next;
			count++;
		}
	}
	return (count);
}
