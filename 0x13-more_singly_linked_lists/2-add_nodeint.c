#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
*add_nodeint - function
*@head: var
*@n: var
*Return: pointer
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(int));
	if (new == NULL)
	{
		return (NULL);
	}
	new->next = *head;
	new->n = n;
	*head = new;
	return (*head);
}
