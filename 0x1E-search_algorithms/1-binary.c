#include "search_algos.h"

/**
 * _search - ......
 * @array: ........
 * @beg: ...........
 * @size: .......
 * @value: .......
 * Return: ......
 */
int _search(int *array, size_t beg, size_t size, int value)
{
	size_t mx, x;
	char *spc;

	if (beg >= size)
		return (-1);
	mx = beg + (size - beg - 1) / 2;
	printf("Searching in array:");
	spc = " ";
	for (x = beg; x < size; x++)
	{
		printf("%s%d", spc, array[x]);
		spc = ", ";
	}
	printf("\n");
	if (array[mx] == value)
		return (mx);
	if (array[mx] > value)
		return (_search(array, beg, mx, value));
	return (_search(array, mx + 1, size, value));
}

/**
 * binary_search - recursive function that does binary search
 * @array: array to search
 * @size: size
 * @value: value to search
 * Return: -1 else return index
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (_search(array, 0, size, value));
}
