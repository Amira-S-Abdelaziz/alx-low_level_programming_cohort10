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
	int len2 = 0;
	int i = 0;

	while (*(src + len) != '\0')
	{
		len++;
	}
	while (*(dest + len2) != '\0')
	{
		len2++;
	}
	for (; i < len; i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < len2; i++)
	{
		*(dest + i) = '\0';
	}
	return (src);
}
