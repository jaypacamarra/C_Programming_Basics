#include <stdio.h>
#include <string.h>

int main(){
    char city[40];
    printf("Enter your favourite city: ");
    scanf("%[^\n]s",city);
    puts(city);

    printf("Hello world test test 123 \n"); 
    printf("Hello world again \n");

    // Define a string literal
    char string1[] = "first";
    printf("%c\n",string1[5]);  // prints the \0 null character which is literally an invisible char
    
    // New comment
    // Another comment cat!

    return 0;
}
