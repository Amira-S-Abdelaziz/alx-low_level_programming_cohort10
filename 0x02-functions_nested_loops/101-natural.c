/*
*file : 0-positive_or_negative.c
*Author:Amira
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
*main - prints the type
*of the number
*
*Return:  Always 0.
*
*/
/* betty style doc for function main goes there */
int main(void)
{
	int i = 1;
	int sum = 0;

	for (; i <= 1024; i++)
	{
		if (i % 5 == 0 || i % 3 == 0)
			sum = sum + i;
	}
	printf("%d\n", sum);

	return (0);

}
