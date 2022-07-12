#include "main.h"

/**
 * _puts - write a function that prints a string, follwed by a new line, to
 * stdout
 * @str: This is my input string
 *
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\n'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
