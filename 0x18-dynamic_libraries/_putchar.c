#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the char c to stdout
 * @c: The letter to be printed
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
