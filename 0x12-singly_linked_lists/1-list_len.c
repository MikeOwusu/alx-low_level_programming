#include "lists.h"

/**
 * list_len - returns the number of elements in a list
 * @h: singly linked list
 * Return: number of elements on the list
 */

size_t list_len(const list_t *h)
{
	size_t xs = 0;

	while (h != NULL)
	{
		h = h->next;
		xs++;
	}

	return (xs);
}
