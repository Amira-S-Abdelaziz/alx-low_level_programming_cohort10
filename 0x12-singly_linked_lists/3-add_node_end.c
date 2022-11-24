#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
*add_node_end - function
*@head: var
*@str: var
*Return: value
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *he = *head;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->next = NULL;
	temp->str = strdup(str);
	temp->len = 0;
	while (*(str + temp->len) != '\0')
		temp->len++;
	if (he == NULL)
		*head = temp;
	else
	{
		while (1)
		{
			if (he->next == NULL)
				break;
			he = he->next;
		}
		he->next = temp;
	}	
	return (*head);
}
