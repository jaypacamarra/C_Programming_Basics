// Average of 10 grades program 

#include <stdio.h>

int main( void ){
    
    int grade;                  // grade value
    unsigned int counter = 1;   // counter variable for average calculation
    int average;                // hold average
    int total = 0;

    while ( counter <= 10) {            // loop 10 times
        printf("%s","Enter grade: ");   // primp for input 

        scanf("%d", &grade);            // read grade from user

        total = total + grade;          // total the grades

        counter += 1;                   // increment counter
    }

    average = total / 10;           // Compute class average

    printf("The class average is %d\n", average);   // display result

    return 0;
} // end function main
