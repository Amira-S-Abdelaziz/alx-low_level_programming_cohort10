#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
*free_listint - function
*@head: var
*/
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (1)
	{
		if (temp == NULL)
			break;
		head = temp->next;
		free(temp);
		temp = head;
	}
}
