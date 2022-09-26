#include  "main.h"

/**
 * _memcpy - copies from source to destination value in array
 *
 * @dest: destination to copy to
 *
 * @src: source to copy from
 *
 * @n: number of times
 *
 * Return: return the string value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
