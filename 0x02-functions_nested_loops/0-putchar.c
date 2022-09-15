#include "main.h"

/**
 * _putchar - writes the character to c to stdout
 * @c: the character to print
 *
 * Return: On success 1.
 */
char _putchar(char c)
{
	return(write(1, &c, 1));
}
