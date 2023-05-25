#include "main.h"

/**
 * _putchar -this func writes a char to the stdout.
 * @c: The letter to be printed
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
