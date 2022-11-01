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

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			return ((s + i));
			i++;
	}
	return (NULL);
}
