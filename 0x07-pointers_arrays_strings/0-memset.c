#include "main.h"

/**
 * _memset - fills memory with byte
 *
 * @n: number of spaces
 * @s: memory area
 * @b: value
 *
 * Return - filled display
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
