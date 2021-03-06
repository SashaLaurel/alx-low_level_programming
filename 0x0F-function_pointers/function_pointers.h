#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
/**
 * Desc: Header file contain prototypes for all functions
 *       used in the 0x0F-function_pointers directory.
 */

#include <stddef.h>
#include <stdlib.h>
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
