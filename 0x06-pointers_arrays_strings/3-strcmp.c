#include "main.h"
/**
*_strcmp - fucnction
*@s1: var
*@s2: var
*Return: value
*/
int _strcmp(char *s1, char *s2)
{
	int ans = 0;
	int i = 0;

	while (ans == 0)
	{
		if (*(s1 + i) == '\0' && *(s2 + i) == '\0')
			break;
		ans = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (ans);
}
