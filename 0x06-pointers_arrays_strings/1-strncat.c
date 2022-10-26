#include "main.h"
/**
*_strncat - function
*@dest: var
*@src: var
*@n: var
*Return: value
*/
char *_strncat(char *dest, char *src, int n)
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
	for (; i < n; i++)
	{
		if (i > lens)
			break;
		*(dest + lend + i) = *(src + i);
	}
	*(dest + lend + i) = '\0';
	return (dest);
}
