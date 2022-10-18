/*
*file : 0-positive_or_negative.c
*Author:Amira
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#include "main.h"
/**
*print_to_98 - prints the type
*of the number
*@n: an integer char
*
*Return:  Always 0.
*
*/
/* betty style doc for function main goes there */
void print_to_98(int n)
{
	int i = n;

	for (; i <= 98; i++)
	{
		if (i != 98)
			printf("%d, ", i);
		else
			printf("%d", i);
	}
	putchar('\n');

}
