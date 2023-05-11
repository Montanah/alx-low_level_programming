#include "search_algos.h"

/**
 * jump_search - finds a value by each value at a given interval,
 * then performing a binary search
 * @array: array to be checked
 * @size: size of array
 * @value: value to be searched for
 *
 * Return: index of value, or -1 if not found
 */

int jump_search(int *array, size_t size, int value)
{
	if (array == NULL)
	{
		return (-1);
	}

	int i = 0;
	int j = 0;
	int step = sqrt(size);

	/** Finding the block where the value may be present **/
	while (i < size && array[i] < value)
	{
		i += step;

		printf("Value checked array[%i] = [%i]\n", i, array[i]);
	}

    /** Linear search within the block **/
	int start = i - step;

	printf("Value found between indexes [%i] and [%i]\n", start, i);

	for (j = start; j <= i && j < size; j++)
	{
		printf("Value checked array[%i] = [%i]\n", j, array[j]);

		if (array[j] == value)
		{
			return (j);
		}
	}
	return (-1);
}
