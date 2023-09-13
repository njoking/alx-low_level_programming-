#ifndef FUNCTION_POINTERS_
#define FUNCTION_POINTERS_
#include <stdio.h>
#include <stdlib.h>
int _putchar(char c);
int main(int argc, char *argv[]);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
#endif
