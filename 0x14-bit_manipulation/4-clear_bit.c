#include <stdio.h>
#include "main.h"
/**
*clear_bit - function
*@n: variable
*@index: variable
*Return: value
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a = 1;
	unsigned int i = 0;

	if (index >= 64)
		return (-1);
	while (index != i)
	{
		a = a << 1;
		i++;
	}
	a = ~a;
	*n = (*n & a);
	return (1);
}
