#include <stdio.h>
/**
 * main - prints the alphabet both in lower and uppercase.
(*
 * Return: 0 on success
 */
int main(void)
{
	char letter_lowercase = 'a';
        char letter_uppercase = 'A';

	while (letter_lowercase <= 'z')
	{
		putchar(letter_lowercase);
		letter_lowercase++;
	}
        while(letter_uppercase<='Z')
        {
                putchar(letter_uppercase);
                letter_uppercase++;
        }
	putchar('\n');
	return (0);
}
