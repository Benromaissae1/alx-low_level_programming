#include "main.h"
/**
 * _power - calculate (base and power)
 * @base: base of exponet
 * @pow: power of exponet
 * Return: value of base and power
 */
unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int sum;
	unsigned int a;

	sum = 1;
	for (a = 1; a <= pow; a++)
		sum *= base;
	return (sum);
}
/**
 * print_binary - prints the binary representation of a number
 * @n: num of prented
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int gev, results;
	char flags;

	flags = 0;
	gev = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (gev != 0)
	{
		results = n & gev;
		if (results == gev)
		{
			flags = 1;
			_putchar('1');

		}
		else if (flags == 1 || gev == 1)
		{
			_putchar('0');
		}
		gev >>= 1;
	}
}
