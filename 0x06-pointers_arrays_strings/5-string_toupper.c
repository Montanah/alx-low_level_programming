#include "main.h"
/**
 * string_toupper - changes lowercase letters to uppercase
 * @s: character to change to upper
 * Return: return value of upper
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;

	return (s);
}
