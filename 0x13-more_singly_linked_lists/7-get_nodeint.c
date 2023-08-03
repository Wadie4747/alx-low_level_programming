#include "lists.h"

/**
 * get_nodeint_at_index - Retrieves the node at a specific
 * index in a linked list.
 * @head: Pointer to the first node in the linked list.
 * @index: The index of the node to return.
 *
 * Return: Pointer to the node at the given index, or NULL if not found.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
