#include <stdio.h>

int main( void ){

    int grade;
    printf("%s","Please enter your grade: ");
    scanf("%d", &grade);

    if ( grade >= 90) {
        puts ( "A" );
    } // end if
    else if ( grade >= 80  ) {
        puts ( "B" );
    } // end else if
    else if ( grade >= 70  ) {
        puts ( "C" );
    } // end else if
    else if ( grade >= 60  ) {
        puts ( "D" );
    } // end else if
    else { 
        ; //  VOID  
    } // end else

    return 0;
}
