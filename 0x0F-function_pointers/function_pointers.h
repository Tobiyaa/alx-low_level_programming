#ifndef FUNCTION_POINTRS_H
#define FUNCTION_POINTRS_H

void _putchar(char *c);
void print_nam(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *arrat, int size, int (*cmp)(int));

#endif /*FUNCTION_POINTRS_H */
