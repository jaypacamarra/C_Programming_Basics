#include <stdio.h>

#define SIZE 5

// Function prototype
void modifyArray( int b[], size_t size );
void modifyElement( int i );

int main(void)
{
    int a[ SIZE ] = { 0, 1, 2, 3, 4 };   // init arr a

    size_t i;   // counter

    puts("Effects of passing entire array by reference:\n\nThe values of the original are:");

    // output original array
    for ( i = 0; i < SIZE; ++i ){
        printf( "%3d", a[ i ] );
    }   // end for

    puts("");

    // pass array a to modifyArray by reference
    modifyArray( a, SIZE );

    puts("The values of the modified array are:");

    // output modified array
    for (i = 0; i < SIZE ; ++i){
        printf( "%3d", a[ i ] );
    }

    // Jay's code
    printf("\nThe value of a[3] in a is = %d\n", a[3]);

    // output value of a[ 3 ]
    printf( "\n\n\nEffects of passing array element by value: \n\nThe value of a[3] is %d\n", a[3]);

    modifyElement( a[ 3 ] );    // pass array element a[ 3 ] by value

    // output value of a[ 3 ]
    printf( "The value of a[3] is %d\n", a[3] );

}   // end main


void modifyArray( int b[], size_t size )
{
    size_t j;   // counter

    // multiply each element by 2
    for (j = 0; j < size; ++j)
    {
        b[j] *= 2;  // actually modifies original array}
    }

}   // end function

void modifyElement( int e )
{
    // In this function, "e" is a local copy of array element
    // a[ 3 ] passed from main

    // multiply parameter by 2
     printf( "The value of a[3] in modifyElement is %d\n", e*=2 );

}   // end function
