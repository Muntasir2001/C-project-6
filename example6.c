//testing loop control statements...
//this code needs to be modified..
//ask (for the 'for' loop) why that code (last loop) only works if 'b++' is above the if statement and not when it is below....

#include <stdio.h>

int main () {
    int a = 2;
    int b = 3;
    int c;

    //using break statement...
    while (a <= 90) {
        printf("The value of a is: %d \n", a);
        a ++;
        if (a == 20) {
            break;
        }
    }

    printf("While loop broken by break statement. \n");
    

    //using continue statement...
    while (b <= 25) {
        b ++;
        if (b == 20) {
            continue;
        }
        //code does not work if the b++ line is below the if statement..
        printf("The value of b is: %d \n", b);
        
    }
    printf("While loop broken by continue statement. \n");

    //continue statement using for loop...
    for (c = 1; c <=20; c ++) {
        if (c == 10) {
            continue;
        }
        printf("The value of c is: %d \n", c);
    }

    printf("For loop terminated \n");
    
    return 0;
}