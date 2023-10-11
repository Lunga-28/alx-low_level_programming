#include "search_algos.h"

/**
 * linear_search - uses linear search algorithm
 * @array: array search
 * @size: size
 * @value: value to search
 * Return: -1 if not found else the first index
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
