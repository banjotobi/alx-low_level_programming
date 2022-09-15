#include "main.h"

/**
 * _islower -  chekcs if a character is lower case
 * @c: The character to be checked
 * Return: 1 if lower and 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
