#include "search_algos.h"

/**
 * binary_search - finds a value by checking value at middle of array
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low, high, mid, i;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	low = 0;
	high = size - 1;

	do {
		printf("Searching in the array: ");

		for (i = low; i < high, i++)
		{
			 printf("%i, ", array[i]);
		}

		printf("%i\n", array[i]);

		mid = (low + high) / 2;

		if (array[mid] < value)
		{
			low = mid + 1;
		}
		else if (array[mid] > value)
		{
			high = mid - 1;
		}
		else if (array[mid] == value)
		{
			return (mid);
		}
	}

	while (low <= high);

	return (-1);
}
