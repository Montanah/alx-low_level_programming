#include "main.h"

/**
 * _calloc - calloc function
 * @nmemb: number of elements
 * @size: size in bytes
 * Return: pointer or void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *t;
	unsigned int ;

	if (nmemb == 0 || size == 0)
		return (NULL);
	t = malloc(nmemb * size);
	if (t == NULL)
		return (NULL);
	for (i = 0; i < nmemb * szie; i++)
		t[i] = 0;

	return (t);
}
