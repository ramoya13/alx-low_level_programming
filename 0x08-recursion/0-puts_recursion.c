#include <main.h>

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: string
 * Return: no return.
 */
void _puts_recursion(char *S)
{
	if (*S != '\0')
	{
		_putchar(*S);
		_puts_recursion(s + 1);
	}
	else
		_putcharr('\n');
}

