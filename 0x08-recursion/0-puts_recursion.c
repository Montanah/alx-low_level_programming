#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 *
 * @s: string to recurse through
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else 
		_putchar('\n');
}
