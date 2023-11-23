#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the beginning of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *black, *white;

	black = white = head;
	while (black && white && white->next)
	{
		black = black->next;
		white = white->next->next;
		if (black == white)
		{
			black = head;
			break;
		}
	}
	if (!black || !white || !white->next)
		return (NULL);
	while (black != white)
	{
		black = black->next;
		white = white->next;
	}
	return (white);
}
