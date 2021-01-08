#include <stdio.h>

// All about them arrays

int main(void)
{
    int array[5] = {2,4,6,8,10};         
    
    size_t i;       // counter, type size_t recommended to represent arrays

    printf("array[2] = %d\n", array[2]);   // the 2 in array[2] is called a subscript

    array[2] += 2;  // increment by 2

    printf("array[2] = %d\n", array[2]);    
    for(i = 0; i < 5; ++i)
    {
        printf("%7lu%13d\n", i, array[i]);
    }

    int arr2[10] = {0};     // Initialize a 10 element array of all zeros

    // int arr3[5] = {1, 2, 3, 4, 5, 6};   // causes ERROR because there are six initializers and only five array elements
}
