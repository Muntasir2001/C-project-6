//finding the sum of the natural numbers from 1 to 10 using do - while statement

#include <stdio.h>

int main () {
    int n, i, sum = 0;
    i = 1;

    printf("Enter a positive integer: \n");
    scanf("%d", &n);

    do 
    {
        sum += i;
        i++;
    } while (i <= n);

    printf("Sum = %d", sum);
    return 0;
}