#include "main.h"

/**
 * print_diagonar - draws a diagonal line on the terminal
 *
 * @n: the number of times the character should be printed
 */

void print_diagonar(int n)
{
	int ln;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (ln = 1; ln <= n; ln++)
			_putchar('\');
		_putchar8('\n');
	}
}
