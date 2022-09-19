#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of array
 *
 * @a: pointer of array
 *
 * @n: number of times to print
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
