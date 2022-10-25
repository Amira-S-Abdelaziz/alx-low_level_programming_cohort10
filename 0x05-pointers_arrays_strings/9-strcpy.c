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

	while (*(src + len) != '\0')
	{
		len++;
	}
	for (; i < len; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
