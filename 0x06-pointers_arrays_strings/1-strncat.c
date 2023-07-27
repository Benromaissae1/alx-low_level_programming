#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 *
 * @dest: pointer to destnation input
 * @src: pointer to source input
 * @n: input value
 *
 * Return: pointer to resulting @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int m, m2;

	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	m2 = 0;
	while (m2 < n && src[m2] != '\0')
	{
		dest[m] = src[m2];
		m++;
		m2++;
	}
	dest[m] = '\0';
	return (dest);
}
