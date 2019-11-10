#include <stdio.h>

int main () {
    
    int a = 1;
    printf("Using WHILE  loop \n");

    while (a <= 4) {
        printf("this is the value of %d \n", a);
        a ++;
    }

    // OR ...
    printf("Using FOR loop \n");
    //syntax: for (init; condition; update)

    for (a = 1; a <= 4; a ++) {
        printf("this is the value of %d \n", a);
    }

    //Prove that the variable is updated even if the condition is false...(using for loop)
    int b;
    for (b = 2; b <=7; b ++) {
        printf("%d \n", b);
    }
    printf("The final value of b is: %d \n", b);

    return 0;
}