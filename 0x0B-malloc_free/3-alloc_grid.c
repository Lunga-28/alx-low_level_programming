#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
    int **array;
    int i, n;

    if (width <= 0 || height <= 0)
        return (NULL);

    array = malloc(sizeof(int *) * height);

    if (array == NULL)
        return (NULL);

    for (i = 0; i < height; i++)
    {
        array[i] = malloc(sizeof(int) * width);
        if (array[i] == NULL)
        {
            for (n = i - 1; n >= 0; n--)
                free(array[n]);
            free(array);
            return (NULL);
        }

        for (n = 0; n < width; n++)
            array[i][n] = 0;
    }

    return (array);
}
