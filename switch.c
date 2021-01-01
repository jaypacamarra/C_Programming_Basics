#include <stdio.h>

// Program that showcases the switch statement 

int main( void ){
    int grade;      // your bad grades here

    puts( "Enter your grade please: ");     // Message prompt for the user
    puts( "Enter the EOF character to end input." );

    // loop until the end-of-file key is pressed
    while( (grade = getchar()) != EOF ) {
        switch ( grade ){
            case 'A':
            case 'a':
                puts("You got an A");
                break;

            case 'B':
            case 'b':
                puts("You got a B");
                break;

            case 'C':
            case 'c':
                puts("You got a C");
                break;

            case '\n':  // ignore newlines
            case '\t':  // tabs
            case ' ':    // and spaces in input
                break;

            default:
                puts("You fail, study harder!");
                break;

        }   // End switch
    }   // End while

    return 0;
}
