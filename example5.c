//nested loop (while loop)

#include <stdio.h>

int main () {
    int a = 1;
    int b = 2;

    while (a <=5) {
        printf("The value of a is: %d \n", a);
        a ++;
        while (b <= 6) {
            printf("The value of b is: %d \n", b);
            b ++;
        }
    }

    return 0;
}

//output
// The value of a is: 1
// The value of b is: 2
// The value of b is: 3
// The value of b is: 4
// The value of b is: 5
// The value of b is: 6
// The value of a is: 2
// The value of a is: 3
// The value of a is: 4
// The value of a is: 5

//In this loop, the nested loop does not run anymore since the b variable has reached the limit so that loop is broken.