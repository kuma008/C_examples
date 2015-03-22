/**
 * This is a programming framework to use the standard foo.h, foo.c and foo_main.c to code C projects.
 *
 * @author Guanglin Du (dglqxq@163.com)
 * @version Feb. 11, 2013 Mon.
 */
#include <stdio.h>
#include "hello_world_framework.h"
#include "pointer_examples.h"

int main(int argc, char *argv[])
{
	int *pa, *pb, *sum, s2, *ps2;
	int a = 5, b = 6;
	printf("\n*** Output of the main program ***\n");
	printf("main, addresses of a and b = %p, %p\n", &a, &b);

	// printf("Hello World from Dev-C++, LCC-Win, Code::Blocks!\n");
	say_hello();
	say_hello_to_name("dugl");
	
	// Pointer to function demo
	printf("\n---Start of pointer to function demo---\n");
	void (*pf1)(), (*pf2)(char *s);
	pf1 = say_hello;
	pf2 = say_hello_to_name;
	(*pf1)();
	(*pf2)("Wife");
	printf("---End of pointer to function demo---\n\n");

	pa = &a;
	pb = &b;
	// Wrong use of a pointer here(error-prone)
	sum = sum01(pa, pb);
	printf("main, %d + %d = %d\n", *pa, *pb, *sum);//might be still OK
	printf("main, addresses = %p, %p, %p, %d\n", pa, pb, sum, *sum+1);//error appears!

	s2 = 0;
	ps2 = &s2;
	// sum02(pa, pb, &s2);
	sum02(pa, pb, ps2);
	printf("main, %d + %d = %d\n", a, b, s2);

	printf("main, sum + 1 = %d\n", s2+1);
	printf("main, sum + 2 = %d\n", s2+2);

	calculate_struct_size();
	
	one_dimensional_array();
	
	two_dimensional_array();

	typedef_demo();
	
	return 0;
}
