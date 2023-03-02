#include "main.h"
/**
 * string_toupper - cahnges lowercase letters of as a string to uppercase.
 * @s: input string.
 * Return: the pointer to dest.
 */

char *string_toupper(char *s)
{
	int strs = 0;

	while (*(s + strs) != '\0')
	{
		if ((*(s + strs) >= 97) && (*(s + strs) <= 122))
			*(s + strs) = *(s + strs) - 32;
		strs++;
	}

	return (s);
}
