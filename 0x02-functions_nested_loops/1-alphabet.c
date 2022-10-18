/*
*file : 0-positive_or_negative.c
*Author:Amira
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
*print_alphabet - prints the type
*of the number
*
*Return:  Always 0.
*
*/
/* betty style doc for function main goes there */
void print_alphabet(void)
{
	char a = 'a';

	for (; a <= 'z'; a++)
		_putchar(a);

	_putchar('\n');

}
