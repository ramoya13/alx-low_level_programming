#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: string
 * Return: no return.
 */
void _puts_recursion(char *S)
{
	if (*S == '\0')
	{
		return;
	}
	else
	{
		_putchar(*S);
		_puts_recursion(s + 1);
	}
}

void _putchar(char c)
{
	putchar(c)
}

int main()
{
	char *s = "Hello, World!";
	_puts_recursion(s);
	return (0);
}
