#include "main.h"

/**
 * puts2 - prints every othe character of a string
 *
 * @str: string to print character
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
