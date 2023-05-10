#include <stdio.h>

/**
 * linear_search - finds a value by checking one aftre the other
 * @array: array to be checked
 * @size: size of array
 * @value: value to be searched for
 *
 * Return: index of value, or -1 if not found
 */
int linear_search(const int *array, size_t size, int value)
{
    if (array == NULL)
    {
        return -1;
    }

    for (size_t i = 0; i < size; i++)
    {
        printf("Value checked array[%zu] = [%d]\n", i, array[i]);
        if (array[i] == value)
        {
            return i;
        }
    }

    return -1;
}
