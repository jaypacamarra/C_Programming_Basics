#include <stdio.h>

int main( void ){
    printf("%s","Please enter your grade: ");
    int grade;
    scanf("%d", &grade);
    puts( grade >= 60 ? "Passed" : "Failed"  );
    
    return 0;
}
