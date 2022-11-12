#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
*create_array - function
*@size: variable
*@c: variable
*Return: value
*/
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i = 0;

	if (size == 0)
		return ('\0');
	a = malloc(sizeof(char) * size);
	while (i != size)
	{
		*(a + i) = c;
		i++;
	}
	return (a);
}
