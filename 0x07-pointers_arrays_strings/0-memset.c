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
	int flag = 0;

	for (; i < n; i++)
	{
		if (*(s + i) == '\0')
			flag = 1;
		*(s + i) = b;
	}
	if (flag == 0)
	{
		while (*(s + i) != '\0')
		{
			*(s + i) = '\0';
			i++;
		}
	}
	*(s + i) = '\0';
	return (s);
}
