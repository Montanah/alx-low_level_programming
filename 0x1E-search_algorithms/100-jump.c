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
	if (array == NULL || size == 0)
	{
		return (-1);
	}

	int step = sqrt(size);
	int i = 0;

	while (i < size && array[i] < value)
	{
		i += step;

		if (i >= size)
		{
			break;
		}
		printf("Value checked array[%i] = [%i]\n", i, array[i]);
	}

	int start = i - step;

	if (start < 0)
	{
		start = 0;
	}
	printf("Value found between indexes [%i] and [%i]\n", start, i);

	for (int j = start; j <= i && j < size; j++)
	{
		printf("Value checked array[%i] = [%i]\n", j, array[j]);

		if (array[j] == value)
		{
			return (j);
		}
	}
	return (-1);
}
