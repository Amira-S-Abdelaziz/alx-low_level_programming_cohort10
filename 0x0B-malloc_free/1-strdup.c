#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
*_strdup - function
*@str: variable
*Return: value
*/
char *_strdup(char *str)
{
	unsigned int sz = 0;
	char *a;
	unsigned int i = 0;

	while (*(str + sz) != '\0')
	{
		sz++;
	}
	sz++;
	if (sz == 0)
		return (NULL);
	if (str == NULL)
		return (NULL);
	a = malloc(sizeof(char) * sz);
	if (a == NULL)
		return (NULL);
	for (; i < sz; i++)
	{
		*(a + i) = *(str + i);
	}
	*(a + i) = '\0';
	return (a);
}
