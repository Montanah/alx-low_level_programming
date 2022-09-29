#include "main.h"

/**
 * length - length of string
 *
 * @s: string to use
 *
 * Return: string length
 */
int length(char *s)
{
	int i = 0;

	if (*s)
	{
		i = i + length(s + 1);
		return (i += 1);
	}
	return (0);
}
/**
 * helper2 - checks the string
 *
 * @i: integer to use
 *
 * @s: string to use
 *
 * Return: int value
 */
int helper2(int i, char *s)
{
	 if (*s)
	 {
		 if (*s != s[length(s) - i])
		 {
			 return (0);
		 }
		 else
		 {
			 return (helper2(i + 1, s + 1));
		 }
	 }
	 return (1);
}
/**
 * is_palindrome - checks if string is a palidrome
 *
 * @s: string to check
 *
 * Return: boolean
 */
int is_palindrome(char *s)
{
	int i = 1;

	return (helper2(i, s));
}
