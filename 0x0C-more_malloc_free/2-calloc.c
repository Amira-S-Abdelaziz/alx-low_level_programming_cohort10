#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*_calloc - function
*@nmemb: variable
*@size: variable
*Return: value
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i = 0;

	if (size == 0 || nmemb == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	while (i != nmemb * size)
	{
		*(a + i) = 0;
		i++;
	}
	return (a);
}
