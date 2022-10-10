#include "main.h"

/**
 * array_range - range of arrays
 * @min: min value of arrays
 * @max: max value of arrays
 * return: int value
 */
int *array_range(int min, int max)
{
	int i, len;
	int *t;

	if (min > max)
		return (NULL);
	len = 0;
	for (i = min; i <= max; i++)
		len++;

	t = malloc(sizeof(int) * len);
	if (t == NULL)
		return (NULL);

	i = 0;
	while (min <= max)
	{
		t[i] = min;
		i++;
		min++;
	}
	return (t);
}
