#include "main.h"
/**
*func - function
*@n: var
*@x: var
*Return: value
*/
int func(int n, int x)
{
	if (x <= 0)
		return (-1);
	else if (n % x == 0 && n / x == x)
		return (x);
	else
		return (func(n, x - 1));
}
/**
*_sqrt_recursion - function
*@n: var
*Return: value
*/
int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	else if (n < 0)
		return (-1);
	else
		return (func(n, n - 1));
}
