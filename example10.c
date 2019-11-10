//finding the sum of the natural numbers from 1 to 10 using while statement

#include <stdio.h>

int main() 
{
    int n, i, sum = 0;
    i = 1;
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    while (i <= n) 
    {
        sum += i;
        i ++;
    }

    printf("Sum = %d",sum);
    return 0;
}