#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
*add_nodeint_end - function
*@head: var
*@n: var
*Return: value
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	new = malloc(sizeof(int));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		*head = new;
		return (new);
	}
	temp = *head;
	while (1)
	{
		if (temp->next == NULL)
			break;
		temp = temp->next;
	}
	temp->next = new;
	new->n = n;
	new->next = NULL;
	return (new);
}



