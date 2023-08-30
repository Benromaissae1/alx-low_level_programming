#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: the pointer to the beginning of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *here;

	tortoise = here = head;
	while (tortoise && here && here->next)
	{
		tortoise = tortoise->next;
		here = here->next->next;
		if (tortoise == here)
		{
			tortoise = head;
			break;
		}
	}
	if (!tortoise || !here || !here->next)
		return (NULL);
	while (tortoise != here)
	{
		tortoise = tortoise->next;
		here = here->next;
	}
	return (here);
}
