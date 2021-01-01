#include <stdio.h>

int maximum(int num1, int num2, int num3);      // function prototype


int main()
{
    int num1, num2, num3;   // Initialize number variables

    printf("Enter 3 numbers:");   // Prompt user for 3 numbers for input

    scanf("%d %d %d", &num1, &num2, &num3);     // save those three numbers

    printf("Largest = %d\n", maximum(num1,num2,num3));

}   // end main


int maximum(int a, int b, int c) 
{
    int largest = a;    // Assume a is the largest

    if(b > largest)
    {
        largest = b;
    }
    if(c > largest)
    {
        largest = c;
    }

    return largest;
}   // end maximum function
