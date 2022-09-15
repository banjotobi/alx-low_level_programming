#include "main.h"

/**
 * main - check descriptio
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *letter = "_putchar";

	while (*letter)
	{
		_putchar(*letter);
		letter++;
	}
	_putchar('\n');

	return (0);
}
