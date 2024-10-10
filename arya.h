// arya.h
#ifndef ARYA_H
#define ARYA_H

#include <stdio.h>
#include <stdlib.h>

// Replace data types
#define entity int
#define char_entity char
#define string_entity char*

// Replace printf with display
#define display(...) printf(__VA_ARGS__)

// Replace scanf with take
#define take(...) scanf(__VA_ARGS__)

#endif // ARYA_H
