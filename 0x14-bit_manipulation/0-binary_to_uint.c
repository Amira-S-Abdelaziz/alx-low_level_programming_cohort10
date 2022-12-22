#include <stdio.h>
#include "main.h"
/**
*binary_to_uint - function
*@b: variable
*Return: value
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;
	int i = 0;
	int j = 0;
	int pow = 0;
	unsigned int two = 1;

	if (b == NULL)
		return (0);
	while (*(b + i) != '\0')
	{
		i++;
	}
	i--;
	while (i != -1)
	{
		if (*(b + i) != '0' && *(b + i) != '1')
			return (0);
		pow = j;
		two = 1;
		if (*(b + i) == '0')
		{
			i--;
			j++;
			continue;
		}
		while (pow != 0)
		{
			two *= 2;
			pow--;
		}
		x += two;
		i--;
		j++;
	}
	return (x);
}
