
#include <stdio.h>
#include <stdlib.h>
#include "remalloc.h"

static unsigned remalloc_call_number = 0;
static size_t remalloc_total_memory_allocated = 0;
static bool remalloc_memory_error_happened = false;

void* mymalloc(size_t sz)
{
    remalloc_call_number++;
    remalloc_total_memory_allocated += sz;

    if (remalloc_call_number > MAX_ALLOCS) {
        remalloc_memory_error_happened = true;
        return NULL;
    }
    if (remalloc_total_memory_allocated > MAX_MEMORY_ALLOCATED) {
        remalloc_memory_error_happened = true;
        return NULL;
    }

    //printf("malloc\n");
    return malloc(sz);
}

void* mycalloc(size_t num, size_t size)
{
    remalloc_call_number++;
    remalloc_total_memory_allocated += num*size;

    if (remalloc_call_number > MAX_ALLOCS) {
        remalloc_memory_error_happened = true;
        return NULL;
    }
    if (remalloc_total_memory_allocated > MAX_MEMORY_ALLOCATED) {
        remalloc_memory_error_happened = true;
        return NULL;
    }

    //printf("calloc\n");
    return calloc(num, size);
}

void* myrealloc(void* ptr, size_t size)
{
    // to jest zle, bo realloc nie alokuje tak duzo zwykle
    remalloc_call_number++;
    remalloc_total_memory_allocated += size;

    if (remalloc_call_number > MAX_ALLOCS) {
        remalloc_memory_error_happened = true;
        return NULL;
    }
    if (remalloc_total_memory_allocated > MAX_MEMORY_ALLOCATED) {
        remalloc_memory_error_happened = true;
        return NULL;
    }

    //printf("realloc\n");
    return realloc(ptr, size);
}

void myfree(void *p)
{
    //printf("free\n");
    free(p);
}

unsigned realloc_calls_performed() {
    return remalloc_call_number;
}

size_t remalloc_memory_allocated() {
    return remalloc_total_memory_allocated;
}

bool remalloc_memory_error() {
    return remalloc_memory_error_happened;
}
