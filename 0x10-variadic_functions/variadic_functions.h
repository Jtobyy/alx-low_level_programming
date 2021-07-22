#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>

int sum_them_all(unsigned int, ...);
void print_numbers(const char *separator, const unsigned int n, ...);

#endif /* VARIADIC_FUNCTIONS_H */
