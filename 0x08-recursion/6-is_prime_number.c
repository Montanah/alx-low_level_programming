#include "main.h"

/**
 * helper - checks whether right
 *
 * @i: integer to randomly put
 *
 * @n: integer to test
 *
 * Return: value
 */
int helper(int i, int n)
{
	if (n % i = 0 && n != 1)
		return (0);
	if (n % i != 0 && i < n)
		return (helper(i + 1, n));
	return (1);
}
/**
 * is_prime_number - tests whether a number is  aprime number or not
 *
 * @n: integer to compare
 *
 * Return: boolean
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);
	return (helper(i, n));
}
