//Using goto statement (control statement)

#include <stdio.h>

int main () {
    int a;
    int b;

    printf("Please enter a value for b between 0 and 10 \n");
    scanf("%d", &b);

    for (a = 1; a <= 10; a ++) {
        if (b == a) {
            goto c;
        }
        else {
            printf("The value of a is: %d \n", a);
        }
    }

    c: printf("Jumped from goto statement \n");
    return 0;
}