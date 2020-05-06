#ifndef MY_MALLOC_H
#define MY_MALLOC_H

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void* mymalloc(size_t sz);

void* mycalloc(size_t num, size_t size);

void* myrealloc(void* ptr, size_t size);

void myfree(void *p);

unsigned realloc_calls_performed();

size_t remalloc_memory_allocated();

bool remalloc_memory_error();

#endif /* MY_MALLOC_H */
