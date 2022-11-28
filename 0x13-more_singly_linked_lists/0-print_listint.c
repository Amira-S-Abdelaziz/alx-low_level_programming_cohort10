#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
*print_listint - function
*@h: var
*Return: value
*/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	while (1)
	{
		printf ("%d\n",h->n);
		h = h->next;
		count++;
		if (h == NULL)
			break;
	}
	return (count);
}
