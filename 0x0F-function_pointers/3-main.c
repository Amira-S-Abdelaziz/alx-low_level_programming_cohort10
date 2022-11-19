#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
*main - function
*@agrc: var
*@agrv: var
*Return: 0
*/
int main(int agrc, char *agrv[])
{
	int num1,num2;
	int (*o)(int, int);

	if (agrc != 4)
	{
		printf("Error\n");
		return (98);
	}
	if (agrv[2][1])
	{
		printf("Error\n");
		return (99);
	}
	o = get_op_func(agrv[2]);
	if (o == NULL)
	{
		printf("Error\n");
		return (99);
	}
	num1 = atoi(agrv[1]);
	num2 = atoi(agrv[3]);
	printf("%d\n",o(num1, num2));
	return (0);
}
