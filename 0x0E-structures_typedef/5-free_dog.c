#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the memory allocated for a dog structure
 * @d: pointer to the dog structure to be freed
 *
 * Description: This function frees the memory allocated for the name
 * and owner strings of the dog structure, as well as the dog structure
 * itself.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
