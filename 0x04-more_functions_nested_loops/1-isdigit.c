#include <stdio.h>
#include "main.h"

/**
*_isdigit - check a char
*@c: variable
*
*Return: 0 or 2
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '1')
		return (1);
	else
		return (0);
}
