#include "main.h"

/**
 * _print_diagsums - find character in string
 *
 * @a: pinter to star
 * @size: width of matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, p, l = 0, r = 0;

	for (i = 0; i < size; i++)
	{
		p = (i * size) + i;
		l += *(a + p);
	}
	for (j = 0; j < size; j++)
	{
		p = (j * size) + (size - 1 - j);
		r += *(a + p);
	}
	print("%i, %i\n", l, r);
}
