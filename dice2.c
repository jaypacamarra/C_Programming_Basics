#include <time.h>
#include <stdio.h>
#include <stdlib.h>

// This program uses time( NULL ) to auto generate the seed for the randum number
 
int main(void)
{
    int ranNum;
    int seed;

    srand(time( NULL ));
    ranNum = (rand() % 6) + 1;
    printf("ranNum = %d\n", ranNum);
}



