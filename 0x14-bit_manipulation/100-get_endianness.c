#include "main.h"
/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int a;
	char *d;

	a = 1;
	d = (char *)&a;

	return (*d);
}
