#include "main.h"
#include "2-strlen.c"

/**
 * _strcpy - a function that copies the string pointed to
 *
 * @dest: destination to copy to
 *
 * @src: src
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
