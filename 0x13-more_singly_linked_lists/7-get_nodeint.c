#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
*get_nodeint_at_index - function
*@head: var
*@index: var
*Return: value
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *cur;
	unsigned int in = 0;

	if (head == NULL)
		return (NULL);
	cur = head;
	while (1)
	{
		if (in == index)
			return (cur);
		if (cur == NULL)
			return (NULL);
		in++;
		cur = cur->next;
	}
}
