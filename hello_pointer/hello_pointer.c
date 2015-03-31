#include<stdio.h>
#include"hello_pointer.h"

void simple_pointers()
{
	int x = 1, y = 2, z[10];
	int *ip;
	ip = &x;
	printf("The address of x:%p, the size of the address is %d byte.\n", ip, sizeof(ip));
	
	y = *ip;
	printf("y = %d\n", y);
	*ip = 0;
	printf("*ip = %d\n", *ip);
	ip = &z[0];
	printf("ip, *ip = %p, %d\n", ip, *ip);
	
	char *cp, c = 'd';
	cp = &c;
	printf("c = %c\n", *cp);
	printf("The address of c:%p, the size of the address is %d byte.\n", ip, sizeof(ip));
	
	long li = 100.0l, *lp;
	lp = &li;
	printf("li = %lu, size of li is %d bytes\n", *lp, sizeof(lp));
}