#include "main.h"

/**
 * _strlen - returns length of string
 *
 * @s: character to getstring
 *
 * Return: returns string length
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}
	return (i);
}
