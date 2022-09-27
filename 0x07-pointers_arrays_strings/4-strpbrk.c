#include "main.h"

/**
 * _strpbrk - search a string for another
 *
 * @s: String
 * @accept: string to check against
 *
 * Return: pointer to byte where there is a match
 */

char *_strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (s + i);
	}
	return (0);
}
