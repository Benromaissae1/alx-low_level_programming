#include "main.h"
/**
 * flip_bits - flip to get from one number to another.
 * @n: the first number
 * @m: the second number
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int differnces, results;
	unsigned int a, a2;

	a = 0;
	results = 1;
	differnces = n ^ m;
	for (a2 = 0; a2 < (sizeof(unsigned long int) * 8); a2++)
	{
		if (results == (differnces & results))
			a++;
		results <<= 1;
	}

	return (a);
}
