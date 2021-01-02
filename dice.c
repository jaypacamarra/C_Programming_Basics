#include <stdio.h>
#include <stdlib.h>

// This program asks the user to enter a seed to generate a random number

int main(void)
{
    int ranNum;
    int seed;

    printf("Enter a seed for the new random number: ");
    scanf("%d",&seed);
    srand(seed);
    ranNum = (rand() % 6) + 1;
    printf("ranNum = %d\n", ranNum);
}


