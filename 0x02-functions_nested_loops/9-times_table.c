/*
*file : 0-positive_or_negative.c
*Author:Amira
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
*times_table- prints the type
*of the number
*
*Return:  Always 0.
*
*/
/* betty style doc for function main goes there */
void times_table(void)
{
	char tr = ' ';
	int i;
	int j;
	int k;
	int l;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = i * j;
			if (j != 0)
			{
				_putchar(tr);
				if (k < 10)
				{
					_putchar(tr);
					_putchar(k + '0');
				}
				else
				{
					l = k % 10;
					k = k / 10;
					_putchar(k + '0');
					_putchar(l + '0');
				}
			}
			else
			{
				_putchar(k + '0');
			}
			if (j != 9)
				_putchar(',');
			else
				_putchar('\n');
		}
	}
}
