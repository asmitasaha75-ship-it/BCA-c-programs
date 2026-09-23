#include<stdio.h>
int main()
{
    int i = 1,n;        
    int sum = 0;      
    printf("enter the value of n:");
    scanf("%d",&n);
    // while loop condition
    while (i <= n) {
        sum = sum + i;  
        i++;            
}

    printf("the sum of number from 1 to %d is : %d\n", n, sum);

    return 0;
}

