#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*main - function
*@argc: var
*@argv: var
*Return: value
*/
int main(int argc,char *argv[])
{
	int a;
	int ans = 0;

	if (argc > 2 || argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	if (a <= 0)
		printf("0\n");
	else
	{
		if (a >= 25)
		{
			ans += (a / 25);
			a = a - (25 * (a / 25));
		}
		if (a >= 10)
		{
			ans += (a / 10);
			a = a - (10 * (a / 10));
		}
		if (a >= 5)
		{
			ans += (a / 5);
			a = a - (5 * (a / 5));
		}
		if (a >= 2)
		{
			ans += (a / 2);
			a = a - (2 * (a / 2));
		}
		printf("%d\n", ans + a);
	}
	return (0);
}
