#include <stdio.h>
#include "function_pointers.h"
/**
*array_iterator - function
*@array: var
*@size: var
*@action: funct
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL && action != NULL)
	{
		for (; i < size; i++)
		{
			action(array[i]);
		}
	}
}
