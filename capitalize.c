#include <stddef.h> // For NULL
#include <stdlib.h> // For malloc
#include <ctype.h>  // For toupper

/**
 * function that capitalizes the first letter of each word in the string s
 * returns a new string with all the lower case letters capitalized using the toupper function
 */
char* capitalize(const char* s) {
    if (s == NULL) {
        return NULL;
    }
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }

    char* result = (char*)malloc((len + 1) * sizeof(char));
    if (result == NULL) {
        return NULL;
    }

    for (int i = 0; i < len; i++) {
        result[i] = toupper(s[i]);
    }
    result[len] = '\0';

    return result;
}

