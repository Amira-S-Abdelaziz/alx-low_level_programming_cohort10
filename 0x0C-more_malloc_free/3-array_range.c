#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*array_range - function
*@min: variable
*@max: variable
*Return: value
*/
int *array_range(int min, int max)
{
	int *a;
	int i = min;
	int j = 0;

	if (min > max)
		return (NULL);
	a = malloc(sizeof(int) * (max - min + 1));
	if (a == NULL)
		return (NULL);
	for (; i <= max; i++)
	{
		*(a + j) = i;
		j++;
	}
	return (a);
}
