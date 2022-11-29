#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
*pop_listint - function
*@head: var
*Return: value
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *cur;

	if (head == NULL)
		return (0);
	temp = *head;
	cur = temp->next;
	free(temp);
	if (cur == NULL)
	{
		*head = NULL;
		return (0);
	}
	*head = cur;
	return (cur->n);
}
