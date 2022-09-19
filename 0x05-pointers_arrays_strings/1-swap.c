#include "main.h"

/**
 * swap_int - swaps integers
 *
 * @a: 1st integer
 *
 * @b: 2nd integer
 */
void swap_int(int *a, int *b)
{
	int c = *b;
	int d = *a;
	*a = c;
	*b = d;
}
