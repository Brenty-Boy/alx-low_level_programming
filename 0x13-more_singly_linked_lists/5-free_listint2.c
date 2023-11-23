#include "lists.h"
#include <stdlib.h>

/**
* free_listint2 - Write a function that frees listint_t.
* @head: address.
* Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *test;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			test = *head;
			*head = (*head)->next;
			free(test);
		}
	}
	head = NULL;
}
