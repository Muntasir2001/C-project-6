//nested loop (for - while)

#include <stdio.h>

int main () {
    int a = 1;
    int b = 2;

    do {
        printf("The value of a is: %d \n", a);
        do {
            printf("The value of b is: %d \n", b);
            b ++;
        } while (b <= 6);
        a ++;
    } while (a <=5);

    return 0;
}

/*
// Output:
// The value of a is: 1
// The value of b is: 2
// The value of b is: 3
// The value of b is: 4
// The value of b is: 5
// The value of b is: 6
// The value of a is: 2
// The value of b is: 7
// The value of a is: 3
// The value of b is: 8
// The value of a is: 4
// The value of b is: 9
// The value of a is: 5
// The value of b is: 10

*/