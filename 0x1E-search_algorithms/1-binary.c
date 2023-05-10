#include "search_algos.h"

/**
 * print_array - prints an array
 * @array: array to print
 * @size: size of array
 */
void print_array(int *array, size_t size)
{
	unsigned int i;

	for (i = 0; i < size - 1; i++, array++)
	{
		printf("%i, ", *array);
	}

	printf("%i\n", *array);
}

/**
 * binary_search - finds a value by checking value at middle of array
 * @array: array to be checked
 * @size: size of array
 * @value: value to be searched for
 *
 * Return: index of value, or -1 if not found
 */
 int binary_search(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
	{
		return (-1);
	}

    int low = 0;
    int high = size - 1;
    int mid;

    while (low <= high)
    {
		mid = low + (high - low) / 2;

		if (array[mid] == value)
		{
			return (mid);
		}

		else if (array[mid] < value)
		{
			low = mid + 1;
		}

		else
		{
			high = mid - 1;
		}
	}
	return (-1);
}
