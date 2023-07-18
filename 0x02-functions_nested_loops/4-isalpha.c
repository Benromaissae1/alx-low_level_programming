#include "main.h"

/**
 * _isalpha - function to checks if
 *            character is alphabetic
 *
 * @c: cheks input of function
 *
 * Return: returns 1 if 'c' is alphabetic, lowercase
 *         otherwise always 0 (Success)
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
