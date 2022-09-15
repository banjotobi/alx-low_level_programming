#include "main.h"

/**
 * print_alphabet - prints the alphabets in lower case 10 times
 */

void print_alphabet_x10(void)
{
	char letter;
	int count = 1;

	while(count++ <=  10)
	{
		for(letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);

		_putchar('\n');
	}
}
