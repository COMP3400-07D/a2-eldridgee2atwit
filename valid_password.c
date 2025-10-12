#include <stddef.h> // For NULL
#include <stdbool.h> // For true/false

/**
 * TODO: Describe what the function does
 * function that checks if the password is valid
 * A valid password is between 6 and 10 characters long
 * and contains at least two uppercase letters, and two lowercase letters,
 * each character must be a lowercase or uppercase letter or a digit
 * returns true if the password is valid, false otherwise
 */
bool valid_password(const char* s) {
    if (s == NULL) {
        return false;
    }

    int len = 0;
    int upper = 0;
    int lower = 0;
    int digit = 0;

    while (s[len] != '\0') {
     
            if (s[len] >= 'A' && s[len] <= 'Z') {
                upper++;
            } else if (s[len] >= 'a' && s[len] <= 'z') {
                lower++;
            } else if (s[len] >= '0' && s[len] <= '9') {
                digit++;
            } else {
                return false;
            }
        
        len++;
    }

    return (len >= 6 && len <= 10 && upper >= 2 && lower >= 2);
}
