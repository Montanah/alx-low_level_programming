#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: integer to get root of
 *
 * Return: value or -1
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (helper(i, n) == n && n != 1)
		return (-1);
	return (helper (i, n));
}
