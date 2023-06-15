#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position in a doubly linked list.
 * @h: Pointer to the head of the doubly linked list.
 * @idx: Index at which the new node should be inserted.
 * @n: Value to be stored in the new node.
 *
 * Return: Pointer to the newly inserted node, or NULL on failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *old_node;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	old_node = *h;

	for (i = 0; old_node != NULL && i < idx; i++)
		old_node = old_node->next;

	if (old_node == NULL && i == idx)
		return (add_dnodeint_end(h, n));
	else if (old_node != NULL)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->prev = old_node->prev;
		new_node->next = old_node;

		if (old_node->prev != NULL)
			old_node->prev->next = new_node;
		old_node->prev = new_node;

		return (new_node);
	}

	return (NULL);
}
