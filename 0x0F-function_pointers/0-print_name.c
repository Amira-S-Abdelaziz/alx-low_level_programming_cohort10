#include <stdio.h>
#include "function_pointers.h"
/**
*print_name - functioj=n
*@name: var
*@f: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		f(name);
	else
		f("");

}
