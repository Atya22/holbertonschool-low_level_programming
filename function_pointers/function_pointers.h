#ifndef __FILE_NAME__
#define __FILE_NAME__

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print_name(char *name, void (*f)(char *));
int int_index(int *array, int size, int (*cmp)(int));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
