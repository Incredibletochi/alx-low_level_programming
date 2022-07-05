#include "main.h"

/**
 * main - entry point
 * Description: Prints_alphabet_x10 -> Prints the lowercase alphabets
 */

void print_alphabet_x10(void);
{
	int i;
	int x;

	for (x = 0; x < 10; x++)
	{
		for  (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
