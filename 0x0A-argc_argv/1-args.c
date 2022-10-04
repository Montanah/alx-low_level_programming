#include "main.h"
#define UNUSED(x) (void) (x)

/**
 * main - main function
 *
 * @argc - argument counter
 *
 * @argv - argument vector
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	UNUSED(argv);
	printf("%d\n", argc - 1);
	return (0);
}
