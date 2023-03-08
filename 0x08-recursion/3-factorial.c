#include "main.h"

/**
 * factorial - returns the factorial of a given number n.
 * @n: input number.
 * Return: factorial the number n.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
