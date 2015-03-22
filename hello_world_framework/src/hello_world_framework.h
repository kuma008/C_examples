/**
  * @file hello_world_framework.h Interface to say Hello World, a simple framework to code in C.
  * This is a programming framework to use the standard foo.h, foo.c and foo_main.c to code C projects.
  * Add as many foo.h and foo.c pairs as necessary. Keeping only one foo_main.c is enough.
  * Note: Full list of Doxygen Tags: http://www.stack.nl/~dimitri/doxygen/commands.html
  *
  * @brief Function prototypes (declarations) for the Hello World exampless. Function declarations only here in the header file.
  *
  * @author Guanglin Du <dglqxq@163.com>
  * @version Feb. 11, 2013 Mon. Updated on Feb. 18 to add Doxygen support.
  */
#ifndef HELLO_WORLD_FRAMEWORK_H
#define HELLO_WORLD_FRAMEWORK_H

/**
 * @brief Prints the famous Hello World message using the stdio lib.
 */
void say_hello(void);

/**
 * @brief Prints a Hello message using the stdio lib to the given name.
 *
 * @param name a char pointer to some name
 */
void say_hello_to_name(char *name);

#endif // HELLO_WORLD_FRAMEWORK_H
