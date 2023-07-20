#include "main.h"

/**
 * print_square - prints a square, followed by new line
 * @size: size of square
 */

void print_square(int size)
{
	int x, y;

	if (size < 1)
		_ptchar('\n');

	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			_putchar('#');
			x++;
		}
		_putchar('\n');
		y++
	}
}
