#include "main.h"

/**
<<<<<<< HEAD
 * _puts - print a string, followed by a new line
 * @str: pointer to a string to print
 *
 * Return: 0
=======
 * _puts - Write a function that prints a string, followed by a new line, to
 * stdout
 *
 * @str: This is my input string
 *
>>>>>>> 21a499a2cf3e275550f8ecbb1d12495dbceb4021
 */
void _puts(char * str)
{
<<<<<<< HEAD
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
=======
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
>>>>>>> 21a499a2cf3e275550f8ecbb1d12495dbceb4021
	}
	_putchar('\n');
}
