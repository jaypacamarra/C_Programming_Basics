#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = rand();
    printf("random number = %d\n", i);
    printf("The RAND_MAX value = %d\n", RAND_MAX);
}
