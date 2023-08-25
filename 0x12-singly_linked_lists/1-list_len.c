#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: The name list
 * Return: The number of nodes
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
