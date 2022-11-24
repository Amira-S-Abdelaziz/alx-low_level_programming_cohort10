#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
*st_len - function
*@h: var
*Return: len
*/
size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);
	while (1)
	{
		count++;
		if (h->next == NULL)
			break;
		h = h->next;
	}
	return (count);
}
