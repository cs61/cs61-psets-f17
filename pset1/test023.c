#include "m61.h"
#include <stdio.h>
#include <assert.h>
#include <string.h>
// Misaligned wild free.

int main() {
    void* ptr = malloc(2001);
    free((char*) ptr + 127);
    m61_printstatistics();
}

//! MEMORY BUG: test???.c:9: invalid free of pointer ???, not allocated
//! ???
