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
	size_t i, low, mid, high;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	low = 0;
	high = size - 1;

	do {
		printf("Searching in array: ");

		for (i = low; i < high; i++)
		{
			printf("%d, ", array[i]);
		}

		printf("%d\n", array[i]);

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
	} while (low <= high);

	return (-1);
}
/**
 * exponential_search - finds a value by multiplying the checking index
 * by two every iteration
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	unsigned int i;
	int result;

	if (array == NULL)
	{
		return (-1);
	}
	if (*array == value)
	{
		return (0);
	}
	for (i = 1; i < size; i <<= 1)
	{
		printf("Value checked array[%u] = [%i]\n", i, array[i]);
		if (array[i] >= value)
		{
			break;
		}
	}
	i >>= 1;

	if (i << 1 >= size)
	{
		printf("Value found between indexes [%u] and [%u]\n",
			i, (unsigned int)size - 1);

		result = binary_search(array + i, size - i, value);
	}
	else
	{
		printf("Value found between indexes [%u] and [%u]\n", i, i << 1);

		result = binary_search(array + i, i + 1, value);
	}

	if (result != -1)
	{
		return (result + i);
	}
	return (-1);
}
