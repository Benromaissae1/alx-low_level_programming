#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * _strlen - return the length of a string 
 * @s: a character
 * Return: value is b
 */
int _strlen(const char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	return (j);
}

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: the head ofthe list list_t
 * @str: str
 * Return: number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	add->len = _strlen(str);

	add->str = strdup(str);
	*head = add;

	return (add);
}
