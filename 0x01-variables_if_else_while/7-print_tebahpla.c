#include <stdio.h>
/**
 * main - prints the alphabet in reverse order.
(*
 * Return: 0 on success
 */
int main(void)
{
	char x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}

