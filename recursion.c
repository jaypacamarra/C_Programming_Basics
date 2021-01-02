#include <stdio.h>

unsigned long long int factorial(unsigned int number);

int main(void)
{
    // Easiest example to showcase recursion is factorials
    printf("Enter an integer number to take factorial of: ");
    unsigned int num;
    scanf("%d", &num);

    printf("%u! = %llu\n", num, factorial(num)); // calculate factorial recursively

}

unsigned long long int factorial(unsigned int number)
{
    // Check if base case reached
    if (number <= 1) return 1;

    // Recurse if not base case
    return number * factorial(number - 1);
        
}
