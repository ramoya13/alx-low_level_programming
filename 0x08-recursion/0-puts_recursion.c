#include "main.h"

/**
 * main - check the code
 *
 * Return - always 0
 */
int main(void)
{
	_puts_recursion(char *s)
	{
		if (*s == '\0')
		{
			putchar('\n');
			return;
		}
		else
		{
			putchar(*s);
			_puts_recursion(S + 1);
		}
	}
