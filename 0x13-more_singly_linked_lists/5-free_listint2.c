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

	while (1)
	{
		if (*head == NULL)
			break;
		temp = *head;
		*head = temp->next;
		free(temp);
	}
}
