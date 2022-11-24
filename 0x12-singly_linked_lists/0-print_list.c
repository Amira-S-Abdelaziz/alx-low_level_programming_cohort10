#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
*print_list - function
*@h: var
*Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (1)
	{
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
		count++;
	}
	else
	{
		printf("[%u] %s\n", h->len, h->str);
		count++;
	}
	if (h->next == NULL)
		break;
	h = h->next;
	}
	return (count);
}


