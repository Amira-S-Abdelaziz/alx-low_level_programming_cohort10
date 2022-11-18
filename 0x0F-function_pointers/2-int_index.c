#include <stdio.h>
#include "function_pointers.h"
/**
*int_index - function
*@array: var
*@size: var
*@cmp: func
*Return: int
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);
		for (; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
		return (-1);
	}
	return (-1);
}
