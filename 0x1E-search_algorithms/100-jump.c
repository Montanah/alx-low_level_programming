#include "search_algos.h"

/**
 * jump_search - finds a value by each value at a given interval,
 * then performing a binary search
 * @array: is a pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: first index where value is located or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	int step = (int)sqrt(size);
	int i, j;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < (int)size; i += step, array += step)
	{
		if (*array >= value)
		{
			break;
		}

		printf("Value checked array[%i] = [%i]\n", i, *array);
	}

	i -= step;
	array -= step;

	printf("Value found between indexes [%i] and [%i]\n", i, i + step);

	for (j = 0; j <= step && i < (int)size; j++, i++, array++)
	{
		printf("Value checked array[%i] = [%i]\n", i, *array);

		if (*array == value)
		{
			return (i);
		}
	}

	return (-1);
}
