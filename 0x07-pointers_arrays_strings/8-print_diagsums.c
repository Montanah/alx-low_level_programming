#include "main.h"

/**
 * print_diagsums - prints sum of two diagonals ofa  square of matrix integer
 *
 * @a: array to use
 *
 * @size: size of diagonal
 */
void print_diagsums(int *a, int size)
{
	int i;
	int diagA = 0;
	int diagB = 0;

	for (i = 0; i < size; i++)
	{
		diagA += a[(i * size) + i];
		diagB += a[(size - 1) + ((size - 1) * i)];
	}
	printf("%d, %d\n", diagA, diagB);
}
