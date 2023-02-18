#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits.
(*
 * Return: 0 on success
 */
int main(void)
{
	int x = '0';
	int y = '0';

	while (x <= '9')
	{
		while (y <= '9')
		{
			putchar(x);
			putchar(y);
			if (y == '9' && x == '9')
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			y++;
		}
		if (y >= '9')
		{
			y = '0';
		}
		x++;
	}
	return (0);
}

