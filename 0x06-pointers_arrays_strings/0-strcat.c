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
	/*find the size of dest array*/
	while (dest[m] != '\0')
		m++;

	/*iterate through each src array value without the null byte*/
	for (m2 = 0; src[m2] != '\0' ; m2++)
		/*append src[m2] to dest[m] while overwritting the null byte in dest*/
		dest[m++] = src[m2];
	return (dest);
}
