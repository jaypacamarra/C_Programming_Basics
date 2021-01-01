// Program to count state exma results
// and display the results

#include <stdio.h>

int main ( void ){

    unsigned int numStudents = 10;      // Number of students 

    unsigned int numPassed = 0;         // Initialize counter for passed

    unsigned int numFailed = 0;         // Initialize counter for failed

    unsigned int counter = 0;           // counter variable for while loop

    int testResult;                      // test result of a student, 1 pass 2 fail

    while ( counter < numStudents ){  // Loop as many students there are
        printf("%s","Enter test score (1=passed, 2=failed): ");  // User prompt

        scanf("%d", &testResult);            // Save user input into testScore

        // Pass or fail processing
        if( testResult  == 1 )
            numPassed++;
        else if ( testResult == 2 )
            numFailed++;
        else{
            puts( "Invalid input, try again" );
            continue;   // intentionally skip counter variable
        }

        // Update repition control variable
        counter++;

    }   // end while

    // Print results of state exa,
    puts( "State exam results:" );
    printf( "Number of students who passed: %u \n", numPassed);
    printf( "Number of students who failed: %u \n", numFailed);

    // Print bonus if achieved
    if ( numPassed > 8 )
        puts( "Bonus to instructor!" );

    return 0;

} // End function main
