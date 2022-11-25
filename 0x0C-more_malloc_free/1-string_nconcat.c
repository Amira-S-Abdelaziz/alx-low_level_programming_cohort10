#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*string_nconcat - function
*@s1: var
*@s2: var
*@n: var
*Return: value
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	unsigned int i = 0, j = 0;

	if (sizeof(s2) - 1 >= n)
		res = malloc(sizeof(s1) + sizeof(char) * n);
	else
		res = malloc(sizeof(s1) + sizeof(s2) - 1);
	if (res == NULL)
		return (NULL);
	while (*(s1 + i) != '\0')
	{
		*(res + i) = *(s1 + i);
		i++;
	}
	while (*(s2 + j) != '\0' && j <= n)
	{
		*(res + i) = *(s2 + j);
		i++, j++;
	}
	return (res);
}
