/*
*file : 0-positive_or_negative.c
*Author:Amira
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
*_abs - prints the type
*of the number
*@n: an integer char
*
*Return:  Always 0.
*
*/
/* betty style doc for function main goes there */
int _abs(int n)
{
	if (n >= 0)
	return (n);
	else
	return (n * -1);
}
