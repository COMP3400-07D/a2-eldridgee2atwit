#include <stddef.h> // For NULL
#include <stdlib.h> // For malloc

/**
 * TODO: Describe what the function does
 * function that creates an array of even integers from begin to end (inclusive)
 * returns a pointer to the array, or NULL if the array could not be created
 * the caller is responsible for freeing the array
 */
int* array_create_evens(int begin, int end) {
    if (begin > end) {
        return NULL;
    }

    // Calculate the number of even integers in the range
    int count = 0;
    for (int i = begin; i <= end; i++) {
        if (i % 2 == 0) {
            count++;
        }
    }
    if (count == 0) {
        return NULL;
    }

    // Allocate memory for the array
    int* array = (int*)malloc(count * sizeof(int));
    if (array == NULL) {
        return NULL;
    }

    // Fill the array with even integers
    int index = 0;
    for (int i = begin; i <= end; i++) {
        if (i % 2 == 0) {
            array[index] = i;
            index++;
        }
    }

    return array;
}
