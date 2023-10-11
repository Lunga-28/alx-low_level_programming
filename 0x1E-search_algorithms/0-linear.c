#include "search_algos.h"

/**
 * linear_search - ...........
 * @array: ............
 * @size: .............
 * @value: ............
 * Return: ............
 */
int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (array == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%lu] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
	}
	return (-1);
}
