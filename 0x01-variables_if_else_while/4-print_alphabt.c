#include <stdio.h>
/**
 * main - Prints the letters of the alphabet except the letters q and e.
(*
 * Return: 0 on success
 */
int main(void)
{
	char letter = 'a';

	while (leter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');
	return (0);
}
