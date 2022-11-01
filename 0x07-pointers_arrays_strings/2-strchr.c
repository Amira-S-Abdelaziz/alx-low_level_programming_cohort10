#include "main.h"
/**
*_strchr - function
*@s: var
*@c: var
*Return: value
*/
char *_strchr(char *s, char c)
{
	int i = 0;
	char *p = NULL;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return ((s + i));
		}
			i++;
	}
	if (*(s + i) == c)
	{
		return ((s + i));
	}
	return (p);
}
