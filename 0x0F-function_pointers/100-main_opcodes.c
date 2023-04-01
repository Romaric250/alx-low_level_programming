#include <stdio.h>
#include <stdlib.h>

/**
 * main - checks the code 🙌🙌🙌👀.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *m = (char *) main;
	int n, let;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	let = atoi(argv[1]);

	if (let < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (n = 0; n < let; n++)
	{
		printf("%02x", m[n] & 0xFF);
		if (n != let - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
