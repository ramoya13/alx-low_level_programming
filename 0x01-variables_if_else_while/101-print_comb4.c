#include <stdio.h>

/**
 * main - prints numbers between 012 to 789
 *
 * return - always 0 (Success)
 */
int main(void)
{
	int i, e, g;

	i = 48;
	e = 48;
	g = 48;

	while (e < 48)
	{
		i  = 48;
		while (i < 58)
		{
			g = 48;
			while (g < 58)
			{
				if (e != i && e != g && i != g && e < i && i < g)
				{
					putchar(e);
					putchar(i);
					putchar(g);
					if (i == 56 && e == 55 && g == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				g++;
			}
			i++;

		}
		e++;
	}
	putchar('\n');
	return (0);
}
