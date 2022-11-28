#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
*listint_len - function
*@h: var
*Return: value
*/
size_t listint_len(const listint_t *h)
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
