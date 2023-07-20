#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: the number of times the \ character should be printed
 */

void print_diagonal(int n)
{
	int ln, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (ln = 0; ln < n; ln++)
		{
			for (space = 0; space < ln; space++)
				_putchar(' ');
			_putchar(92); /*is equal to '/' char*/
			_putchar('\n');
		}
	}
}
