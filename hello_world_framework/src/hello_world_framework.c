/**
 * Function implementation(definition) only here.
 *
 * @author Guanglin Du (dglqxq@163.com)
 * @version Feb. 11, 2013 Mon.
 */
#include <stdio.h>
#include "hello_world_framework.h"

/** Just say the classical Hello World. */
void say_hello()
{
	printf("Hello World from Notepad++/Geany/Dev-C++/lcc-Win/Code::Blocks!\n");
}

/** Prints a Hello message using the stdio lib to the given name. */
void say_hello_to_name(char *name)
{
	printf("Hello %s from Notepad++/Geany/Dev-C++/lcc-Win/Code::Blocks!\n", name);
}
