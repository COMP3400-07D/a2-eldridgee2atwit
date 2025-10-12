#include <stddef.h> // For NULL

/**
 * TODO: Describe what the function does
 * function that fills the dest array with the character c
 */
void string_fill(char dest[], int dest_cap, char c) {
    if(dest == NULL || dest_cap <= 0) {
        return;
    }
    int i = 0;
    for( ; i < dest_cap - 1; i++) {
        dest[i] = c;
    }
    dest[i] = '\0';
}
