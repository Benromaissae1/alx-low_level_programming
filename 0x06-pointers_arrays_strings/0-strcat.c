#include "main.h"

/**
 * strcat - function that concatenates two strings.
 *
 * @dest: pointer to destnation input
 * @src: pointer to source input
 *
 * Return: pointer to resulting @dest
 */

char *_strcat(char *dest, char *src)
{
	int m, m2;

	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	m2 = 0;
	while (src[m2] != '\0')
	{
		dest[m] = src[m2];
		m++;
		m2++;
	}

	dest[m] = '\0';
	return (dest);
}
