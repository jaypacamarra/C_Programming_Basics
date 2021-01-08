#include <stdio.h>

void initStaticFunction(void);

int main(void)
{

    puts("First: Call static function");
    initStaticFunction();
    
    puts("\nSecond: Call static function");
    initStaticFunction();

}

void initStaticFunction(void)
{
    static int arr[] = {3,6,9,12};

    puts("arr values when entering the initStaticFunction");
    for( size_t i = 0; i <= 3; ++i)
    {
        printf("arr[%lu] = %d\n", i, arr[i]); 
    }

    puts("arr values after exiting the initStaticFunction");
    for( size_t i = 0; i <= 3; ++i)
    {
        arr[i] += 100;
        printf("arr[%lu] = %d\n", i, arr[i]); 
    }
}

