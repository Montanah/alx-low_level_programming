#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - Prints half a string
 *
 * @str: string to be used
 */
void puts_half(char *str)
{
	int j;
	int oE = 0;

	if (_strlen(str) % 2 != 0)
	{
		oE += 1;
	} for (j = (_strlen(str) + oE) / 2; j < _strlen(str); j++)
	{
		_putchar(str[j]);
	}
	_putcha('\n');
}
