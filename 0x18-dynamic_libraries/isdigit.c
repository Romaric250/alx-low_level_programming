#include "main.h"
/**
* _isdigit - function that check if a number is a digit or not.
* @c: takes in a digit
* Return: 1 if digit and 0 if other.
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	return (1);
	return (0);
}
