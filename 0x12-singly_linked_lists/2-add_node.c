#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
*add_node - function
*@head: var
*@str: var
*Return: value
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));
	list_t *he = *head;

	if (*head == NULL)
	{
		temp->next = NULL;
		temp->str = strdup(str);
		temp->len = 0;
		while (*(temp->str + temp->len) != '\0')
		{
			temp->len++;
		}
		*head = temp;
		return (*head);
	}
	else
	{
		temp->next = he;
		temp->str = strdup(str);
		temp->len = 0;
		while (*(temp->str + temp->len) != '\0')
		{
			temp->len++;
		}
		*head = temp;
		return (*head);
	}
}

