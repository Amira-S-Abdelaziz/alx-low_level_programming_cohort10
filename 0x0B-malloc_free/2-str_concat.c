#include <stdlib.h>
#include "main.h"
/**
*str_concat - function
*@s1: variable
*@s2: variable
*Return: value
*/
char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i = 0, sz1 = 0, sz2 = 0, sz = 0;

	if (s1 != NULL)
	while (*(s1 + sz1) != '\0')
	{
		sz1++;
	}
	if (s2 != NULL)
	while (*(s2 + sz2) != '\0')
	{
		sz2++;
	}
	sz = sz2 + sz1 + 1;
	s = malloc(sizeof(char) * sz);
	if (s == NULL)
		return (NULL);
	for (; i < sz1; i++)
	{
		*(s + i) = *(s1 + i);
	}
	for (; i < sz; i++)
	{
		*(s + i) = *(s2 + i - sz1);
	}
	*(s + i) = '\0';
	return (s);
}
