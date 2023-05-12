#include "search_algos.h"

/**
 * print_array - print the array being searched every time it changes
 * @array: a pointer to the first element of the array to search in
 * @low: the beginning of the array
 * @high: the end of the array
 */
 void print_array(int *array, size_t high, size_t low)
{
	size_t i;

	printf("Searching in the array: ");

	for (i = low ; i < high; i++)
	{
		printf("%i, ", array[i]);
	}

	printf("%i\n", array[i]);
}
/**
 * advanced_binary - finds a value by checking value at middle of array
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located or -1 if not found
 */
 int advanced_binary(int *array, size_t size, int value)
{
	int mid;
	int result;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	printf("Searching in array: ");

	print_array(array, size);

	if (*array == value)
	{
		return (0);
	}

	if (size == 1 && *array != value)
	{
		return (-1);
	}

	mid = (size - 1) / 2;

	if (*(array + mid) >= value)
	{
		return (advanced_binary(array, mid + 1, value));
	}
	if (*(array + mid) < value)
	{
		result = advanced_binary(array + mid + 1, size - 1 - mid, value);
		if (result == -1)
		{
			return (-1);
		}
		return (result + mid + 1);
	}
	return (-1);
}
