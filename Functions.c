#include <stdio.h>

//prototype
void add3Num(int, int, int);

int main()
{   
    printf("\n");
    //Call function that adds 3 numbers and prints results
    add3Num(9, 2, 7);

    return 0;
}

void add3Num(int num1, int num2, int num3)
{
    int result = num1+num2+num3;
    printf("Sum of the three numbers: %d \n",result);
}
