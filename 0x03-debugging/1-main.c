#include 'main.h'

/**
 * main - generate infinite loop
 *
 * Return: 0
 */

int main(void)
{
	int i;

	printf("inifite loop incoming :(\n");

	i = 0;

	while (i < 10)
	{
		putchar(i);
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
