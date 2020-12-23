// Average of 10 grades program 

#include <stdio.h>

int main( void ){
    
    unsigned int counter = 0;   // counter variable for average calculation

    int grade;                  // grade value
    int total = 0;
    
    float average;                // hold average

    do{       // primp for input 
        printf("%s","Enter grade, -1 to end: ");

        scanf("%d", &grade);            // read grade from user
        
        if ( grade != -1 )
            total = total + grade;      // total the grades

        counter += 1;                   // increment counter
    }
    while ( grade != -1 );             // loop 10 times

    if ( counter != 0 ){

       // Calculate the average of all grades
       average = (float) total / --counter;  // avoid truncation
       printf( "Class average is %.2f\n", average );
    }   // end if
    else {  // if no grades were entered, output message
        puts ("No grades were entered");
    }   // end else
        
    printf ( "counter was %d\n", counter ); 

    return 0;
} // end function main

