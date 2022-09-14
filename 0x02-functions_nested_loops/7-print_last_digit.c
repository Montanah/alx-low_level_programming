#include "main.h"
#include "6-abs.c"

/**
 * print_last_digit - main function
 *
 * @r: ineger to get last digit of number
 *
 * Return: last digit of r
 */
int print_last_digit(int r)
{
	_putchar('0' + _abs(r % 10));
	return (_abs(r % 10));
}
