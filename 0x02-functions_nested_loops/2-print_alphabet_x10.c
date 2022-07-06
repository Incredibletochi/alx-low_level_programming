#include "main.h"

/**
 * main - prints_alphabet_x10 -> prints the lowercase alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int j;
	char c;

	for (j = 0; j < 10; j++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		return (0);
	}
}
