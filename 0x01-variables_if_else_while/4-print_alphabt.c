#include <stdio.h>
/**
 * main - Prints the alphabet except the letters q and e.
(*
 * Return: 0 on success
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if (x != 'q' && x != 'e')
		{
			putchar(x);
		}
		x++;
	}
	putchar('\n');
	return (0);
}

