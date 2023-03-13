#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: pointer to duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
	int x, y;
	char *array;

	if (str == NULL)
		return (NULL);

	y = strlen(str);
	array = malloc(sizeof(char) * (y + 1));

	if (array == NULL)
		return (NULL);

	for (x = 0; x < y; x++)
		array[x] = str[x];

	array[x] = '\0';

	return (array);
}
