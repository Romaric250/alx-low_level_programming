#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: pointer
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int i;
	int j;
	char data_one[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot_data[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == data_one[j])
			{
				s[i] = rot_data[j];
				break;
			}
		}
	}
	return (s);
}
