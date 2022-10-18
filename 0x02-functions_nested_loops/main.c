/*
*file : 0-positive_or_negative.c
*Author:Amira
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "_putchar.h"
#include "main.h"
/**
*main - prints the type
*of the number
*
*Return:  Always 0.
*
*/
/* betty style doc for function main goes there */
void printthis()
{
	char s[] = "_putchar";
	int a;
	int sz = sizeof(s) / sizeof(s[0]);

	for (a = 0; a < sz ; a++)
		_putchar(s[a]);
	_putchar('\n');
}
