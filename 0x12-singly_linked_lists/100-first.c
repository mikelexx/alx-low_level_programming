#include "lists.h"
void printfirst(void)__attribute__ ((constructor));
/**
 * printfirst- runs before the main function
 */
void printfirst(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
