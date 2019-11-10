//nested loop (for loop)

#include <stdio.h>

int main () {
    int a;
    int b;

    for (a = 1; a <= 5; a ++) {
        printf("The value of a is: %d \n", a);
        for (b = 2; b <= 6; b ++) {
            printf("The value of b is: %d \n", b);
        }
    }

    return 0;
}

//Output
// The value of a is: 1
// The value of b is: 2
// The value of b is: 3
// The value of b is: 4
// The value of b is: 5
// The value of b is: 6
// The value of a is: 2
// The value of b is: 2
// The value of b is: 3
// The value of b is: 4
// The value of b is: 5
// The value of b is: 6
// The value of a is: 3
// The value of b is: 2
// The value of b is: 3
// The value of b is: 4
// The value of b is: 5
// The value of b is: 6
// The value of a is: 4
// The value of b is: 2
// The value of b is: 3
// The value of b is: 4
// The value of b is: 5
// The value of b is: 6
// The value of a is: 5
// The value of b is: 2
// The value of b is: 3
// The value of b is: 4
// The value of b is: 5
// The value of b is: 6