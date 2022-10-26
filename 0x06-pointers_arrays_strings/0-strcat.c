#include "main.h"
/**
*_strcat - function
*@dest: var
*@src: var
*Return: value
*/
char *_strcat(char *dest, char *src)
{
	int lens = 0;
	int lend = 0;
	int i = 0;

	while (*(dest + lend) != '\0')
	{
		lend++;
	}
	while (*(src + lens) != '\0')
	{
		lens++;
	}
	for (; i <= lens; i++)
	{
		*(dest + i + lend) = *(src + i);
	}
	return (dest);
}
