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
	char a[] = "_putchar";
	int k = sizeof(a) - 1;
	int i;

	for (i = 0; i < k; i++)
		_putchar(a[i]);

	_putchar('\n');

	return (0);

}
