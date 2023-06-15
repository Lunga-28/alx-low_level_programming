#include "lists.h"

/**
 * dlistint_len - function that finds the length of the linked list
 * @h: pointer
 * Return: ...
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t c;

	for (c = 0; h != NULL; c++)
		h = h->next;
return (c);
}
