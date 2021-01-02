#include <stdio.h>

enum State {WORKING = 0, FAILED, FREEZED};

enum State currState = 2;

enum State FindState() {

    return currState;

}

int main() {

    printf("currState = %d\n", currState);
    printf("FindState() = %d\n", FindState());

    (FindState() == WORKING)? printf("WORKING"): printf("NOT WORKING");

    return 0;

}
