#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
*sum_listint - function
*@head: var
*Return: value
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *cur;

	if (head == NULL)
		return (sum);
	cur = head;
	while (1)
	{
		if (cur == NULL)
			return (sum);
		sum += cur->n;
		cur = cur->next;
	}
}
