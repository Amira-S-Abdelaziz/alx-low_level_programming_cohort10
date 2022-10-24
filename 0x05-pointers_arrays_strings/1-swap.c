#include "main.h"
/**
*swap_int - function to swap
*@a: var1
*@b: var2
*/
void swap_int(int *a, int *b)
{
	int *p = a;
	int k = *p;

	*a = *b;
	*b = k;
}
