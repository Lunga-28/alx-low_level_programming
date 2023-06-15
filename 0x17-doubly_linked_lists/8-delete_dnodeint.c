#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a given index in a doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if successful, -1 if the node cannot be found or if head is NULL.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		current = *head;
		*head = current->next;

		if (*head != NULL)
			(*head)->prev = NULL;

		free(current);
		return (1);
	}

	current = *head;

	for (i = 0; current != NULL && i < index; i++)
		current = current->next;

	if (current == NULL)
		return (-1);

	current->prev->next = current->next;

	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);
	return (1);
}
