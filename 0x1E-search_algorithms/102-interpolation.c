#include "search_algos.h"

/**
 * Interpolation_search - finds a value by estimating where the value should be
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located  or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right  = size - 1;
	size_t pos;

	if (array == NULL)
	{
		return (-1);
	}

	pos = low + (((double)(right - left) / (array[right] - array[left]))
		     * (value - array[left]));

	while (1)
	{

		if (pos >= size)
		{
			printf("Value checked array[%u] is out of range\n", (unsigned int)pos);
			return (-1);
		}

		printf("Value checked array[%u] = [%i]\n", (unsigned int)pos, array[pos]);

		if (array[pos] == value)
		{
			return (pos);
		}

		if (array[pos] > value)
		{
			right = pos - 1;
		}

		else
		{
			left = pos + 1;
		}

		if (right <= left)
		{
			return (-1);
		}

		pos = left + (((double)(right - left) / (array[right] - array[left]))
			* (value - array[left]));
	}

	return (-1);
}
