//finding the sum of natural numbers from 1 to 10 using for loop statement

#include <stdio.h>

int main() 
{
    int n, i, sum = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d",&n);

    for(i=1; i <= n; i++)
    {
        sum += i;   // sum = sum+i;
    }
    printf("Sum = %d",sum);
    return 0;
}