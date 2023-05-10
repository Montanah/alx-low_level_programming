#include "search_algos.h"

/**
 * linear_search - finds a value by checking one aftre the other
 * @array: is a pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: first index where value is located or -1 if not found
 */
int linear_search(const int *array, size_t size, int value)
{
    if (array == NULL)
	{
		return (-1);
	}

    for (size_t i = 0; i < size; i++)
    {
	    printf("Value checked array[%zu] = [%d]\n", i, array[i]);

	    if (*array == value)
		{
			return (i);
		}
    }
    return (-1);
}
