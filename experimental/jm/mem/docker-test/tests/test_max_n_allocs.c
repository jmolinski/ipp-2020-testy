

//////////////////////////////////////////////////////////////////////////////

// zostanie doklejone do oryginalnego pliku gamma_main.c
// oryginalny main jest dostepny jako original_main
#include <stdlib.h>
#include <errno.h>
#include <malloc.h>
#include <stdbool.h>
#include <stdio.h>
#include "remalloc.h"

int main() {
    int ret = original_main();
    printf("\n\nalokow %i\n\n", realloc_calls_performed());
    return ret;
}
