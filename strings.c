#include <stdio.h>
#include <string.h>

int main(){
    char city[40];
    printf("Enter your favourite city: ");
    scanf("%[^\n]s",city);
    puts(city);

    return 0;
}
