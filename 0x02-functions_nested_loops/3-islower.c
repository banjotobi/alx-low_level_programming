#include "main.h"

/**
 * _islower -  checks if a character is lower case
 * @c: The character to be checked
 *
 * Return: 1 if lower, 0 if capital
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
