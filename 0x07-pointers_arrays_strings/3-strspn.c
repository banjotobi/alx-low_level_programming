#include "main.h"

/**
 * _strspn - fills memory with byte
 *
 * @s: String
 * @accept: string to check against
 *
 * Return: no of bytes of s in accept
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
		if (!accept[j])
			break;
	}
	return (i);
}
