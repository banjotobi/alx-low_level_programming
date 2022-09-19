#include "main.h"

/**
 * _strcpy - copy string pointed by scr to butter
 * @src: source
 * @dest: destination
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
