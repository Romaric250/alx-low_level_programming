#include "main.h"

/**
 * @c: An input character
 * Description: function return 1 of char is a uppercase or lowercase
 * Return: 1 or 0.
 */
int _isalpha(int c)
{
	char lower;
        char upper;
	int is_letter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				is_letter = 1;
		}
	}
	return (is_letter);
}
