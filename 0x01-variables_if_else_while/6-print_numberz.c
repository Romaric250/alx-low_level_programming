#include <stdio.h>
/**
 * main - prints te digit numbers 0-9 without using char or printf/puts 
(*
 * Return: 0 on success
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
