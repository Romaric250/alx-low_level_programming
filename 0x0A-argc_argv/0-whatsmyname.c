#include <stdio.h>
/**
 * main - prints name of the program, followed by a new line.
 * @argc: gives the number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 on success.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
