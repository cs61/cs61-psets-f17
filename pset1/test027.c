#include "m61.h"
#include <stdio.h>
#include <assert.h>
#include <string.h>
// An unaligned invalid realloc.

int main() {
    char* ptr = (char*) malloc(2002);
    ptr = realloc(ptr + 7, 2003);
    m61_printstatistics();
}

//! MEMORY BUG???: invalid ??{realloc|free}?? of pointer ???
//! ???
