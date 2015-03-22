/**
 * @file pointer_examples.h Examples from: 2.27 Pointers, Introduction to C using lcc
 * (Introduction-to-C-using-lcc-with-index-V20120415.pdf)  See also 2.27.9 Why Pointers? in the same book.
 *
 * @brief Pointer examples. prototypes only here in the header file.
 *
 * @author Guanglin Du <dglqxq@163.com>
 * @version Feb. 9, 2013 Sat. Spring Festival Eve. Updated on Feb. 18 to add Doxygen support.
 */
#include <stdbool.h>

#ifndef POINTER_EXAMPLES_H
#define POINTER_EXAMPLES_H

/**
 * @def MAX_NAME
 *
 * @brief  The maximum length of a name in struct person, in bytes.
 */
#define MAX_NAME 128

/**
 * @struct person
 * @brief A person struct with a few members.
 *
 * To produce faster code, GCC pads struct members so that each one can be accessed without delays; this sometimes produces struct size which is larger than the sum of the sizes of its members. If you need to minimize this padding (e.g., if your program uses large arrays of such structs, where padding will waste a lot of memory), lay out your structures so that the longer members are before the shorter ones.
 */
struct person
{
	/** @brief name of the person, the length limit is 128 chars. */
	char name[MAX_NAME];

	/** @brief Weight of the person. */
	double weight;

	/** @brief Age of the person. */
	int age;

	/** @brief Sex of the person: true is male; false is female. */
	bool sex;

	//void print(); //cannot declare functions in a struct in C
};

/**
 * @typedef StructPerson
 * @brief typedefs the struct person as StructPerson.
 */
typedef struct person StructPerson;

/**
 * @brief Calculates the size of struct person and prints the size in bytes.
 */
void calculate_struct_size(void);

/**
 * @brief This is a WRONG use of pointer, extremely error-prone as the local variable will be discarded after the call ends.
 *
 * Calculates the sum of two integers and returns a pointer to the sum.
 *
 * @param i1 pointer to the 1st integer
 * @param i2 pointer to the 2nd integer
 * @return a pointer to the sum
 */
int* sum01(int *i1, int *i2);
//int * sum01(int *i1, int *i2); //OK
//int *sum01(int *i1, int *i2); //OK

/**
 * @brief Calculates the sum of two integers and returns a pointer to the sum. Good example in using pointers.
 *
 * @param i1 pointer to the 1st integer
 * @param i2 pointer to the 2nd integer
 */
void sum02(int *i1, int *i2, int *sum);

/**
 * @brief An 1-D array example.
 */
void one_dimensional_array();

/**
 * @brief An 2-D array example.
 */
void two_dimensional_array();

/**
 * @brief An example of how to use typedef to define new data types.
 */
void typedef_demo();

#endif //POINTER_EXAMPLES_H
