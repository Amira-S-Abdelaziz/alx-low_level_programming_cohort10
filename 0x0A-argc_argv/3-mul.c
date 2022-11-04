#include <stdio.h>
#include <stdlib.h>
/**
*main - function
*@argc: counter
*@argv: value
*Return: value
*/
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
