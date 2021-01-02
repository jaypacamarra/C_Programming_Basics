#include <stdio.h>

// This is an enum deleration with type Status with default generated constants
// 0, 1, 2, ... etc.
// Continue = 0, WON = 1, LOST = 2
// the gameStatus at the end of } is an instantiation of enum type Status
enum Status { CONTINUE, WON, LOST }gameStatus; 

int main(void)
{
    // This program shows how to use enums 
    puts("Let's print all states available for us to use:");

    // Create a Status enum
    // enum Status gameStatus;

    // Print all the states now
    printf("State: CONTINUE, Value: %d\n",CONTINUE);
    printf("State: WON, Value: %d\n",WON);
    printf("State: LOST, Value: %d\n",LOST);

    // Update gameStatus to WON
    gameStatus = WON;
    printf("gameStatus = %d\n",gameStatus);
}
