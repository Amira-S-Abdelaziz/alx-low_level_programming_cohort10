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
*print_last_digit - prints the type
*of the number
*@n: an integer char
*
*Return:  Always 0.
*
*/
/* betty style doc for function main goes there */
int print_last_digit(int n)
{
	if (n == INT_MIN)
		n = 8;
	else if (n < 0)
		n = n * -1;
	_putchar((n % 10) + '0');
	return (n % 10);
}
