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
	int index;

	for (index = 0; str[index] != '\n'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
