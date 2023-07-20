#include "main.h"

/**
 * print_square - prints a square, followed by new line
 * @size: size of square
 */

void print_square(int size)
{
	int x, y;
	
	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; x++)
			_putchar('#');
		_putchar('\n');
	}
}
