#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node with the given data at
 * the specifiedposition in a listint_t linked list.
 * @head: Pointer to the first node in the linked list.
 * @idx: Index where the new node is to be inserted.
 * @n: Data to insert into the new node.
 *
 * Return: Pointer to the new node if successful, otherwise NULL.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
