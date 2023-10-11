#include <math.h>
#include "search_algos.h"

/**
 * minimum_value - find the min of two values
 * @a: 1st value to compare
 * @b: 2nd value to compare
 *
 * Return: small value between the two
 */
size_t minimum_value(size_t a, size_t b)
{
    if (b < a)
        return (b);
    return (a);
}

/**
 * jump_search - searches for a value in Jump search algorithm
 * @array: pointer to the first element of the array to search
 * @size: number of elements in an array
 * @value: value to search for
 *
 * Return: 1st index where value is located or -1
 */

int jump_search(int *array, size_t size, int value)
{
    size_t lf, rf, jump;
    int val;

    if (array != NULL && size > 0)
    {
        jump = sqrt(size);
        lf = 0;
        rf = jump;
        val = array[lf];
        printf("Value checked array[%lu] = [%d]\n", lf, val);
        while (rf < size && val < value)
        {
            if (array[rf] >= value)
                break;
            lf += jump;
            rf += jump;
            val = array[lf];
            printf("Value checked array[%lu] = [%d]\n", lf, val);
        }
        if (lf >= size || val > value)
            return (-1);
        printf("Value found between indexes [%lu] and [%lu]\n", lf, rf);
        while (lf <= minimum_value(size - 1, rf) && val <= value)
        {
            val = array[lf];
            printf("Value checked array[%lu] = [%d]\n", lf, val);
            if (val == value)
                return (lf);
            lf++;
        }
    }
    return (-1);
}
