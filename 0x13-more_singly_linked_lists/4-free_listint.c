#include "lists.h"

/**
 * free_listint - Frees all nodes of a linked list.
 * @head: Pointer to the first node of the list to be freed.
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
