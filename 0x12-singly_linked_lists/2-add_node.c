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
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->next = *head;
	temp->str = strdup(str);
	temp->len = 0;
	while (*(str + temp->len) != '\0')
	{
		temp->len++;
	}
	*head = temp;
	return (*head);
}
