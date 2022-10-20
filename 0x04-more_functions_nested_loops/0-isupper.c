#include <stdio.h>
#include "main.h"

/**
*_isupper - check a char
*@c: variable
*
*Return: 0 or 2
*/
int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (0);
	else
		return (1);
}
