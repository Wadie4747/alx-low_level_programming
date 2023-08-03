#include "lists.h"

/**
 * listint_len - Returns the elements number in a linked list of type listint_t
 * @h: Pointer to the linked list to traverse.
 *
 * Return: The number of nodes in the linked list.
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
