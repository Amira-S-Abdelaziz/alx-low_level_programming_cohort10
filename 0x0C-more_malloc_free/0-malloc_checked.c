#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*malloc_checked - function
*@b: var
*Return: pointer
*/
void *malloc_checked(unsigned int b)
{
	char *a = malloc(b);

	if (a == NULL)
		exit(98);
	else
		return (a);
}
