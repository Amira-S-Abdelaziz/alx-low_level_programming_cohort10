#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
*free_listint2 - function
*@head: var
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *now = *head;

	while (1)
	{
		if (now == NULL)
			break;
		temp = now;
		now = temp->next;
		free(temp);
	}
	*head = NULL;
}
