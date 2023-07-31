#include "main.h"
#include<stdio.h>

/**
 * _strstr - function that locates a substring.
 * @needle: substring
 * @haystack: string
 * Return: pointer to needle
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *t;
	int *ptr =  NULL;

	i = 0;
	while (haystack[i] != '\n')
	{
		j = 0;
		while (needle[j] != '\n')
		{
			if (needle[j] == haystack[i])
			{
				t = &haystack[i];
				return (t);
			}
			j++;
		}
		i++;
	}
	return (0);
}
