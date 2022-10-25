#include "main.h"
/**
*_strcpy - function
*@dest: var
*@src: var
*Return: value
*/
char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i = 0;
	char s[1000000];

	while (*(src + len) != '\0')
	{
		len++;
	}
	for (; i < len; i++)
	{
		*(s + i) = *(src + i);
	}
	i = 0;
	for (; i < len; i++)
	{
		*(dest + i) = s[i];
	}
	return (src);
}
