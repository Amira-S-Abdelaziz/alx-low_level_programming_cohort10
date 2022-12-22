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

	while (index != 0)
	{
		n = n >> 1;
		if ((n & 1) == 1)
			a = 1;
		else
			a = 0;
		index--;
	}
	return (a);
}
