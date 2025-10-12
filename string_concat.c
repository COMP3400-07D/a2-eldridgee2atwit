#include <stddef.h> // For NULL
#include <stdlib.h> // For malloc

/**
 * TODO: Describe what the function does
 * function that concatenates src2 to the end of src1
 * result string must be length of cap and null terminated
 */
void string_concat(char* src1, int src1_cap, const char* src2) {
    if(src1 == NULL || src2 == NULL || src1_cap <= 0) {
        return;
    }
    int i = 0;
    int j = 0;
    // find the end of src1
    while(i < src1_cap - 1 && src1[i] != '\0') {
        i++;
    }
    // concatenate src2 to the end of src1
    while(i < src1_cap - 1 && src2[j] != '\0') {
        src1[i] = src2[j];
        i++;
        j++;
    }
    // null terminate the result string
    src1[i] = '\0';
}

