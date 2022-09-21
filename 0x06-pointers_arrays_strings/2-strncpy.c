#include "main.h"

/**
 * _strcpy - copies bytes of src to dest string
 * @dest: string to recieve
 * @src: string copied
 * @n: num of btyes to copy
 *
 * Return: Address of dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
