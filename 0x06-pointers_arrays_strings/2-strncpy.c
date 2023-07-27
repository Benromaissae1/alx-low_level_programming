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

char *_strncpy(char *dest, char *src, int n)
{
	int m2;

	m2 = 0;
	while (m2 < n && src[m2] != '\0')
	{
		dest[m2] = src[m2];
		m2++;
	}
	while (m2 < n)
	{
		dest[m2] = '\0';
		m2++;
	}
	return (dest);
}
