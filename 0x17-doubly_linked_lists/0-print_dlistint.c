#include "lists.h"

/**
 * print_dlistint - function that will print the list
 * @h: pointer
 * Return: counter
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t c;

	for (c = 0; h != NULL; c++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
  
	return (c);
}
