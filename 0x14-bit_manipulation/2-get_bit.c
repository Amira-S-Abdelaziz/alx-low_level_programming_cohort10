#include <stdio.h>
#include "main.h"
/**
*get_bit - function
*@n: variable
*@index: variable
*Return: value
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int a = 0;
	unsigned int i = 0;

	if (index >= 64)
		return (-1);
	while (index != i)
	{
		n = n >> 1;
		if ((n & 1) == 1)
			a = 1;
		else
			a = 0;
		i++;
	}
	return (a);
}
