#include "main.h"
#include "2-strlen.c"

/**
 * _atoi - converts a string to an integer
 *
 * @s: string to convert
 *
 * Return: returns an integer
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int j;

	j = 0;
	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			j = (j * 10) + (*s - '0');
		else if (j > '0')
			break;
	}while (*s++);
	return (j * sign);
}
