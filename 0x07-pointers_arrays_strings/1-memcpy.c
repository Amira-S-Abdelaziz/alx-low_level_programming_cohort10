#include "main.h"
/**
*_memcpy - function
*@dest: var
*@src: var
*@n: integer
*Return: value
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
