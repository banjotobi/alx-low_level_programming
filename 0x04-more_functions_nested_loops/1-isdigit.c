#include "main.h"

/**
 * _isdigit - check for digit (0-9)
 * @c: the number being checkd
 *
 * Return: 1 if DIIGT, 0 not DIGIT
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
