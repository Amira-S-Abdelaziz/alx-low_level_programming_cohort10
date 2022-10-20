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
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
