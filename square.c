#include <stdio.h>
#include <math.h>

int main( void )
{
    int number;
    printf("Please enter a number: ");
    scanf("%d", &number);

    double squaredNum = pow(number,2);  // the pow function works with double data type 
    printf( "The square of %d is %.2f", number, squaredNum );

    return 0;
}   // End main 


