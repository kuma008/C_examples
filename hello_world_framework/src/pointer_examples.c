/**
 * The function definition(implementation) file.
 * The pointer examples are from: 2.27 Pointers, Introduction to C using
 * lcc (Introduction-to-C-using-lcc-with-index-V20120415.pdf).
 *
 * @author Guanglin Du
 * @version Feb. 9, 2013 Sat. Spring Festival Eve.
 */
#include <stdio.h>
#include "pointer_examples.h"

/**
 * Calculates a Struct's size and prints it.See 2.27 Pointers on page 104.
 * The sizeof of a struct is not equal to the sum of sizeof of each member, often larger because of structure alignment.
 */
void calculate_struct_size()
{
	struct person Joe;
	Joe.name[0] = 'J';
	Joe.name[1] = 'o';
	Joe.name[2] = 'e';
	Joe.weight = 80.0;
	Joe.age = 52;
	Joe.sex = true;
	
	// Note: Joe.name is in effect an pointer!
	printf("Joe's info: name %s, weight %5.2f, age %d, sex %d\n", Joe.name, Joe.weight, Joe.age, Joe.sex);

	// %lu for long unsigned int instead of %d
	//printf("0x%x + %lu\n", &Joe, sizeof(struct person)); //OK with a warning
	printf("%p + %lu\n", &Joe, sizeof(struct person)); //144 not 141, why?
	printf("The size of a char type is %lu\n", sizeof(char));
	printf("The size of a double type is %lu\n", sizeof(double));
	printf("The size of a int type is %lu\n", sizeof(int));
	printf("The size of a bool type is %lu\n", sizeof(bool));
}

/**
 * !!!NOTE: WRONG USE OF POINTER. Very dangerous, error-prone.
 * Calculates the sum of two integers, i1 and i2, and returns a pointer to the sum.
 * As this function exits, the local variable temp disappears. Though the memery address remains, the value is to be garbage-collected any time!
 */
int* sum01(int *i1, int *i2)
{
	int temp, *pt;
	temp = *i1 + *i2;
	pt = &temp;
	printf("sum01, addresses = %p, %p, %p, %d\n", i1, i2, &temp, temp);
	printf("sum01, addresses = %p, %p, %p\n", &i1, &i2, &pt);
	return pt;
}

/**
 * Calculates the sum of two integers.
 */
void sum02(int *i1, int *i2, int *sum)
{
	*sum = *i1 + *i2;
}

/**
 * An one dimensional array example.
 */
void one_dimensional_array()
{
	printf("--- An one dimensional array example ---\n");
	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int* pa, i;

//	pa = &a[0];
//	for(i = 0; i < 10; i++)
//		printf("a[%d] = %d\n", i, *(pa+i));

	i = 0;
	for(pa = a; pa < (a + 10); pa++)
	{
		printf("a[%d] = %d\n", i, *pa);
		i++;
	}
}

/**
 * A two dimensional array example.
 */
void two_dimensional_array()
{
	printf("--- A two dimensional array example ---\n");
	int a[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
	int *p;
//	int (*p)[4](a); //C++ style
	int i = 0;
//	for(p = a; p < a+12; p++) //wrong at a+12 , 12 = 12 rows
//	for(p = a[0]; p < a[0]+12; p++) //ok
	for(p = a[0]; p < a[0]+12; p++) //also ok
	{
		printf("%d, %d\n", i++, *p);
	}
}

/*
 * @brief An example of how to use typedef to define new data types.
 */
void typedef_demo()
{
	int i = 0;
	typedef char * string;
	string months[] = {"February", "March", "April"};
	printf("--- typedef example ---\n");
	do {
		printf("months[%d] = %s\n", i, months[i]);
		i++;
	} while (i < 3);

}
