#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>


int linear_search(int *array, size_t size, int value);
void print_array(int *array, size_t low, size_t high);
int binary_search(int *array, size_t size, int value);

#endif /*SEARCH_ALGOS_H*/
