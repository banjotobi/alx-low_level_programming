#include "main.h"

/**
 * _isupper - check if characer is capital lettr
 * @c: the character being checkd
 *
 * Return: 1 if CAPITAL, 0 not capital
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
