#include "main.h"
#include <string.h>
/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int coins = 0;

	if (argc == 2)
	{
		if (strchr(argv[argc - 1], '-'))
		{
			printf("0\n");
			return (1);
		}
		int cents;

		cents = atoi(argv[argc - 1]);

		while (cents > 0)
		{
			if (cents % 25 == 0)
			{
				cents -= 25;
			}
			else if (cents % 10 == 0)
			{
				cents -= 10;
			}
			else if (cents % 5 == 0)
			{
				cents -= 5;
			}
			else if (cents % 2 == 0)
			{
				cents -= 2;
			}
			else
			{
				cents--;
			}
			coins++;
		}
		printf("%d\n", coins);
		return (0);
	}
	printf("Error\n");
	return (1);
}
