#include "main.h"
/**
*_memset - function
*@s: var
*@b: char
*@n: integer
*Return: value
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
