#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - the legth finded of string
 * @str: string
 *
 * Return: length of string
 */
unsigned int _strlen(char *str)
{
	unsigned int j;

	for (j = 0; str[j]; j++)
		;
	return (j);
}
/**
 * add_node_end -  adds a new node at the end of a list_t list
 * @head: head
 * @str: string
 *
 * Return: pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *sln, *drp;

	if (str == NULL)
		return (NULL);
	sln = malloc(sizeof(list_t));
	if (sln == NULL)
		return (NULL);
	sln->str = strdup(str);
	if (sln->str == NULL)
	{
		free(sln);
		return (NULL);
	}
	sln->len = _strlen(sln->str);
	sln->next = NULL;
	if (*head == NULL)
	{
		*head = sln;
		return (sln);
	}
	drp = *head;
	while (drp->next)
		drp = drp->next;
	drp->next = sln;
	return (sln);
}
