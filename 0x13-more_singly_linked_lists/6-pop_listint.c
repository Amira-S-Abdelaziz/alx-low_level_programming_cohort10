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
	int i = 0;

	if (*head == NULL)
		return (0);
	temp = *head;
	i = temp->n;
	cur = temp->next;
	free(temp);
	*head = cur;
	return (i);
}
