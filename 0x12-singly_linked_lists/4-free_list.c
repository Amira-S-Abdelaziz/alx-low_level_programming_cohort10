#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
*free_list - function
*@head: var
*/
void free_list(list_t *head)
{
	list_t *cur;

	while (head != NULL)
	{
		cur = head;
		head = head->next;
		free(cur);
	}
}
