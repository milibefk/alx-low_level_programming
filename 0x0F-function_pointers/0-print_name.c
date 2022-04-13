#include "fun_main.h"
#include <stdlib.h>
/**
 * print_name - prints the name
 * @name: name
 * @f: function
 */
void print_name(char *name, void (*f)(char *))
{
	if (print_name == NULL || f == NULL)
		f(print_name);
	return;
}
