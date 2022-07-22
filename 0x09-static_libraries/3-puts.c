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
	if (str)
	{
		while (*str)
			_putchar(*str++);
		_putchar('\n');
	}
}
