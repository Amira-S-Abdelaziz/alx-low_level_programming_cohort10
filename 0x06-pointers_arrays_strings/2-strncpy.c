#include "main.h"
/**
*_strncpy - function
*@dest: var
*@src: var
*@n: var
*Return: value
*/
char *_strncpy(char *dest, char *src, int n)
{
	int lend = 0;
	int lens = 0;
	int i = 0;

	while (*(dest + lend) != '\0')
	{
		lend++;
	}
	while (*(src + lens) != '\0')
	{
		lens++;
	}
	for (; i < n && *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
		*(dest + i) = '\0';
	}
	return (dest);
}
