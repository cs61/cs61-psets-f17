#include "m61.h"
#include <stdio.h>
#include <assert.h>
#include <string.h>
// NULL is freeable.

int main() {
    char* p = malloc(10);
    free(NULL);
    free(p);
    m61_printstatistics();
}

//! malloc count: active          0   total          1   fail          0
//! malloc size:  active          0   total         10   fail          0
