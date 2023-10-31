#include <stdio.h>

/**
 * main - print name of the program
 *
 * @argc: size of argv array and number of command line arguments
 * @argv: an array of size argc
 *
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
