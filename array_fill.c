#include <stddef.h> // For NULL

/**
 * function that fills the array with values from begin to end
 * 
 */
int array_fill(int* array, int array_len, int begin, int end) {
    if(array == NULL || array_len <= 0 || begin > end) {
        return 0;
    }
    int num = begin;
    int i = 0;
    int count = 0;
    for( ; i < array_len; i++) {
        if(num < end) {
            array[i] = num;
            num++;
            count++;
        }
        else if (num == end){
            array[i] = num;
            count++;
            break;
        }

    }
    return count;
}
