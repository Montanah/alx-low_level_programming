#include <stdio.h>
/**
 * leet - encodes string
 * @s: string to use
 * Return: char value
 */
char *leet(char *s)
{
	char alphaArr[] = "a4AA4e3E3o0O0t7T7l1L1";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alphaArr[j] != '\0'; j++)
		{
			if (s[i] == alphaArr[j])
			{
				s[i] = alphaArr[j + 1];
				break;
			}
		}
	}
	return (s);
}
