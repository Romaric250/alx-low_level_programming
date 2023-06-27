#include "main.h"

/**
 * _puts: function prints a string 
 * @str: an input string
 * Return: Nothing
 */
void _puts(char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}

